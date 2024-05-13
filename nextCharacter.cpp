#include<iostream>
using namespace std;

char nextChar(char ch){

  if(ch == 'z'){
    return 'a';
  }
   if(ch == 'Z'){
    return 'A';
  }

   char next_char = ch + 1;
  return next_char;
  
}

int main()
{
    cout<<nextChar('a')<<endl;
    cout<<nextChar('z')<<endl;
    cout<<nextChar('A')<<endl;
    cout<<nextChar('Z')<<endl;

    return 0;
}