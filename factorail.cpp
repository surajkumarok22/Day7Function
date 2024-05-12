#include<iostream>
using namespace std;

void factorail(int no){                     // function decleration 
    int fact = 1;
    for(int i = 1; i<=no; i++){
        fact *= i;
    }
    cout<< "factorail is: "<<fact<<endl;
}         


int main(){
           factorail(5);
           factorail(0);

    return 0;
}