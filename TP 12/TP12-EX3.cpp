#include<iostream>
using namespace std;
int main()
{
    string sex;
    int age;
    cout<<"Inter your age : ";
    cin>>age;
    cout<<"Enter your sex : ";
    cin>>sex;
    if(sex=="M"||sex=="m")
    {
        if(age>=18)
        {
            cout<<"You need to pay tax.";
        }else{
            cout<<"You do not have to pat tax.";
        }
    }else if(sex=="F"||sex=="f")
    {
        if(age>=20)
        {
            cout<<"You need to pay tax.";
        }else{
            cout<<"You do not have to pat tax.";
        }
    }
}
