#include<iostream>
using namespace std;
int main()
{
    string str;

    while(1)
    {
        cout<<"Enter the character(enter 0 to stop the program) : ";
        cin>>str;
        if(str=="0")
        {
            cout<<"program stop."<<endl;
            break ;
        }

        else if (str=="a"||str=="e"||str=="i"||str=="o"||str=="u")
        {
            cout<<"This character is vowel.\n\n";
        }
        else
        {
            cout<<"This character is consonant.\n\n";
        }
    }

}
