#include<iostream>
using namespace std;

void holeSqOf2nos(int x, int y){
  int a = x*x;
  int b = y*y;
  int c = 2*x*y;

  int sum = a+b+c;
  cout<<"hole square of a + b is "<<sum<<endl;
   
}

int main()
{
    holeSqOf2nos(2,5);
    return 0;
}