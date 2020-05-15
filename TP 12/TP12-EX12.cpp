#include<iostream>


using namespace std;

void EvenOrOdd(int n){
    if(n%2==0){
        cout<<"Even number : True";
    }
    else if(n%2==1){
        cout<<"Odd number : False";
    }
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    EvenOrOdd(n);

}





