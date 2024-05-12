#include<iostream>
using namespace std;

void isEven(int no){              // function decleration  true(1) for even no
       if(no%2 == 0){
        cout<<"no is even"<<endl;  
       }                            // function defenation      false(0) for odd no
      else {
         cout<<"no is odd"<<endl;  
      }     
    }


int main(){
            isEven(11);
            isEven(10);

    return 0;
}