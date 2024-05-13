#include<iostream>
using namespace std;

void palindrome(int num){
    int temp = num;
    int lastDigit,sum = 0;
    while(temp != 0){
        lastDigit = temp%10;
        sum = (sum*10)+lastDigit;
        temp = temp/10;
    }
    if(sum == num){
        cout<<num<<" is palindrome"<<endl;
    }
    else{
          cout<<num<<" is not palindrome"<<endl;
    }
}

int main()
{
   palindrome(121);
   palindrome(125);
    return 0;
}