#include<iostream>
using namespace std;
int main()
{
    int i,a;
    for(i=1;i<=100;i++)
    {
        if(i%3==0){
            if(i==30||i==60||i==90){
                continue;
            }else{
                cout<<i<<" ";
            }
        }
    }
}
