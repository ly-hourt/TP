#include<iostream>
using namespace std;
int main()
{
    int i;
    for(i=1;i<=1000;i=i+2)
    {
        if(i>=9){
            if(i==11 || i==17 || i==21)
            {
                continue;
            }else{
            cout<<i<<" ";
            }
        }
    }
}
