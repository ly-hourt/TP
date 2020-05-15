#include<iostream>

using namespace std;

//create strut

struct Address{
    int house_num;
    string district,city;
};

struct Customer{
    int citizen_id;
    string name,customer_id;
    Address address;
    char sex;
};

//create some function
void get_input();
void display_cus(string id);
void display_all_cus();

//create 10 customers
Customer cus[10];

int main()
{
    get_input();
    int choice ;
    while (1)
    {
        cout <<"This program can : \n";
        cout <<"1.display a customer info base on customer ID.\n";
        cout << "2.display information of all customers.\n";
        cout<<"press 0 to stop program.\n";
        cout<<"Your choice is: ";
        cin>>choice;
        if(choice == 0)
        {
            cout<<"the program has stopped.\n";
            break;
        }
        else if(choice == 1)
        {
            string id;
            cout << "\nEnter the customer ID: ";
            cin>>id;
            display_cus(id);
        }
        else if(choice== 2)
        {
            display_all_cus();
        }
    }
}

void get_input()
{
     for(int i=0;i<10;i++)
        {
            cout<<"Citizen "<<i+1<<"\n";
            cout<<"Enter a citizen's ID:";
            cin>>cus[i].citizen_id;
            cout<<"Enter an ID's customer:";
            cin>>cus[i].customer_id;
            cout<<"Enter a customer's name:";
            cin >> cus[i].name;
            cout<<"Enter a gender:";
            cin>>cus[i].sex;
            cout<<"Please enter an address:\n";
            cout<<"House number:";
            cin>>cus[i].address.house_num;
            cout<<"District:";
            cin>>cus[i].address.district;
            cout<<"City/Province:";
            cin>>cus[i].address.city;
            cout<<"\n";


    }
}

void display_cus(string id)
{

    for(int i=0;i<10;++i)
    {

        if(cus[i].customer_id == id)
        {
            cout<<"The customer ID:"<<cus[i].customer_id<<"Citizen's ID:"<<cus[i].citizen_id<<" Name:"<<cus[i].name<<" gender:"<<cus[i].sex;
            cout<<" Address: house's number "<<cus[i].address.house_num<<" "<<cus[i].address.district<<" district "<<cus[i].address.city<<" city.\n\n";
        }

    }
}
void display_all_cus(){
    cout<<"**All customer information**\n";
    for(int i=0;i<10;i++){

        cout<<"\nThe customer ID:"<<cus[i].customer_id<<"Citizen's ID:"<<cus[i].citizen_id<<" Name:"<<cus[i].name<<" gender:"<<cus[i].sex;
        cout<<" Address: house's number "<<cus[i].address.house_num<<" "<<cus[i].address.district<<" district "<<cus[i].address.city<<" city."<<endl;
    }


}
