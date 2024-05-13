#include<iostream>
using namespace std;

void largeNo(int x, int y, int z){
  
    if(x>y && x>z){
        cout<<x<<" is largest number"<<endl;
    }
    else if(y > z){
          cout<<y<<" is greatest number"<<endl;
    }
    else{
        cout<<z<<" is greatest number"<<endl;
    }
}

int main()
{
    largeNo(10,20,30);
    largeNo(40,50,30);
    return 0;
}