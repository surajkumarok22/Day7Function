#include<iostream>
using namespace std;

bool isPrime(int no){                     // function decleration 
   if(no == 1)
        {
           return false;
        }

    for(int i = 2; i<=no-1; i++)
    {
       if(no%i == 0)
            {
                return true;
            }

       else{
            return false;
           }
    }
   
}         


int main(){
        cout<<isPrime(31);
    return 0;
}