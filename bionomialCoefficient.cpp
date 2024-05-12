#include<iostream>
using namespace std;

int factorail(int no){                     // function decleration 
    int fact = 1;
    for(int i = 1; i<=no; i++){
        fact *= i;
    }
        return fact;
    }         


int binCoffe(int x, int y){
    int val1 = factorail(x);
    int val2 = factorail(y);
    int val3 = factorail(x-y);

    int biocoeffecient = val1/(val2*val3);

    return biocoeffecient;
}

int main(){
           cout<< binCoffe(4,2);

    return 0;
}