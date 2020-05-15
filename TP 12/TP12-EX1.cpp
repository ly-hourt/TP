#include<iostream>
using namespace std;
int main()
{
    string name,sex,major;
    int age;
    cout<<"Enter your name : ";
    cin>>name;
    cout<< "Enter your age : ";
    cin>>age;
    cout<<"Enter Your Sex(M or F) : ";
    cin>>sex;
    cout<<"Enter your major : ";
    cin>>major;
    if(sex=="M"||sex=="m")
    {
        cout<<"Hi, Mr. "<<name<<", you are "<<age<<" year olds and majoring in "<<major<<endl;
    }else if(sex=="F"||sex=="f")
    {
        cout<<"Hi, Mrs. "<<name<<", you are "<<age<<" year olds and majoring in "<<major<<endl;
    }
}
