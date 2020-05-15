#include<iostream>
using namespace std;
int main()
{
    int sec,hour,minute,second;
    cout<<"Input time in second : ";
    cin>>sec;
    hour=sec/3600;
    minute=(sec%3600)/60;
    second=(sec%3600)%60;
    cout<<"It is "<<hour<<" hours "<<minute<<" minute "<<second<<" seconds."<<endl;

}
