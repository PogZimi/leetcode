/*
Codeforces Problem - ARRAY FIX
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std; 

int leftmostdigit(int &x, int &rightmostdigit){
    int counter=0;
    while(x>10){
        x-=10;
        counter++;
    }
    rightmostdigit=x;
    x=counter;
}

vector<string>array_fix(vector<vector<int>>test_cases, int size){
      vector<string>answers;
      vector<int>bin;
      string ans;
      int left_digit, right_digit=0;
      for(int i =0;i < size; i++){
         bin.clear();
         for(int j = 0; j < test_cases[i].size(); j++){
                bin.clear();
                if(test_cases[i][j] >= 10){
                    bin=test_cases[i];
                    leftmostdigit(bin[j], right_digit);
                    bin.insert(bin.begin() + j+1, right_digit);
                    for(int k =0; k < bin.size(); k++){
                          cout << bin[k] << " ";
                    }
                    cout << endl;
                    is_sorted(bin.begin(), bin.end()) ? ans="YES" : ans="NO";
                    break;
                }
                else{
                    is_sorted(bin.begin(), bin.end()) ? ans="YES" : ans="NO";
                }            
         }
         answers.push_back(ans);
      }
     
    return answers;
}

int main(){

    int k, x, element;
    vector<vector<int>>test_cases;
    vector<int>bin;
    vector<string>a;

    cin >> k;
    for(int i = 0; i < k; i++){
         bin.clear();
         cin >> x;
         for(int j = 0; j < x; j++){
                cin >> element;
                bin.push_back(element);
         }
         test_cases.push_back(bin);
    }
    bin.clear();
    a=array_fix(test_cases, k);
    for(int i = 0; i < a.size(); i++){
          cout << a[i] << endl;
    }


    return 0;
}
