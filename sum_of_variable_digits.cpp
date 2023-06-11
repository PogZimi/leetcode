#include<iostream>
using namespace std; 

class Solution{
public: 
   int addDigits(int num) {
        int nums = num; 
        float floating_point=static_cast<float>(num);
        int sum=0; 
        int digit=0, x, counter=0, tens=1;
        
        while(nums >= 10){
             floating_point=static_cast<float>(nums);
             
             while(floating_point >= 10){
                   floating_point = floating_point/10;
                   counter+=1;
             }
             
             digit = static_cast<int>(floating_point);
             sum = sum + digit; 
             
             for(int i = 0; i < counter; i++){
                    tens = tens*10;
             }
             nums = nums - (digit*tens);
        }
        sum+=nums;
        return sum;
    }
};

int main(){

   Solution o;
   int x = o.addDigits(84);
   cout << x << endl;

   return 0; 
}
