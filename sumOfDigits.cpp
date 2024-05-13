#include<iostream>
using namespace std;

void sumDigit(int num){
    int temp = num;
    int lastDigit,sum = 0;
    while(temp != 0){
        lastDigit = temp%10;
        sum =  sum+lastDigit;
        temp = temp/10;
    }
      cout<<num<<" sum of digit is: "<<sum<<endl;
}

int main()
{
  sumDigit(123456);
  sumDigit(12345);
    return 0;
}