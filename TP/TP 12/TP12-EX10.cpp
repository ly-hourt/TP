#include<iostream>
using namespace std;
int main()
{
    int num[7],max,min;
    for(int i=0;i<7;i++)
    {
        cout<<"Enter a number "<<i+1<<" : ";
        cin>>num[i];

    }
    max = num[0];
    min = num[0] ;
    for(int i=1;i<7;i++)
    {
        if(max<num[i]){
            max=num[i];
        }
        if(min>num[i]){
           min=num[i];
        }

    }

    cout<<"Mini "<<min<<endl;
    cout<<"Maxi "<<max;
}
