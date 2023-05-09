#include<iostream>
#include<cstring>
using namespace std;

class Solution {
public:
    bool isPalindrome(string number) {
         int size = number.size();
         string nums = "0123456789";
         string palindrome_num, o;
         
         for(int i = 0; i < size; i++){
             if(nums[i] != number[i]){
                     
             }             
         }
         for(int i = size-1; i > -1 ; i--){
               o = number[i];
               palindrome_num += o;
           } 

         if(palindrome_num == number){
                return true;
             }
         else{
                return false;
            }
    }
};

int main(){

    Solution o;
    int x; 
    cin >> x; 
    bool flock = o.isPalindrome(to_string(x));

    if(flock == 1){
         cout << "true\n"; 
    }
    else{
          cout << "false\n";
    }
    return 0;
}
