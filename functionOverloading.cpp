#include<iostream>
using namespace std;

int area(int no){                     // function decleration 
   
  int  sqArea = no*no;
  return sqArea;
                }         

int area(int x, int y){                     // function decleration 
   
   int ReactArea = x * y;
   return ReactArea;
}         


double area(double r){                     // function decleration 
    double cirArea = 3.14*r*r;

    return cirArea;
  }         


int main(){
            cout<<area(10)<<endl;;
            cout<<area(10,20)<<endl;
            cout<<area(10.4)<<endl;

    return 0;
}