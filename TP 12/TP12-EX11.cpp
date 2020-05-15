#include<iostream>
using namespace std;
int main()
{
    int num[100],i,sum=0;
    for(i=1;i<=100;i++)
    {
        cout<<"Enter the number (enter 0 to stop the program ): ";
        cin>>num[i];
        if(num[i]==0)
        {
            break;
        }
        sum=sum+num[i];
    }
    cout<<"The summation of all input number = "<<sum;
}
