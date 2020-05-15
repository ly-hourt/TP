#include<iostream>
using namespace std;
int main()
{
    char str;
    cout<<"Input a character : ";
    cin>>str;
    if(str>=65 && str<=90){
        cout<<"It is uppercase character.";
    }else if(str>=48 && str<=57){
        cout<<"It is number.";
    }else if(str>=97 && str<=122){
        cout<<"It is lowercase character.";
    }else{
        cout<<"It neither character nor number.";
    }
}
