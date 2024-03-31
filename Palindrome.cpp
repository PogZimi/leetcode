#include<iostream>
#include<cstring>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
         string n = to_string(x);
         bool isPalindromer=false;
         int n_size = n.size();
         int q_ = n_size;
         vector<string>num;
         for(int i =0;i < n_size; i++){
              num.push_back(string(1, n[i]));
         }


         for(int i = 0; i < n_size; i++ ){
              if(num[i] != num[q_ - 1]){
                     isPalindromer=false;
                     q_--;
                     break;
              }   
              else{
                     isPalindromer=true;
                     q_--;
              }
         }
         return isPalindromer;
    }
};

int main(){

    Solution o;
    int x; 
    cin >> x; 
    bool flock = o.isPalindrome(x);
      
    if(flock == 1){
         cout << "true\n"; 
    }
    else{
          cout << "false\n";
    }
    return 0;
}
