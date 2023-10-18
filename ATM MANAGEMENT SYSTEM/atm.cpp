#include <iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Bank{
    private:
    string name;
    long long accnumber;
    char type[10];
    long long amount = 0;
    long long tot = 0;
    
    public:
    void setvalue(){
        cout<<"Enter Account name:\n";
       cin.ignore();
        getline(cin,name);
        cin>>name;
        cout<<"Enter Account number:\n";
        cin>>accnumber;
        cout<<"Account type:\n";
        cin>>type;
        cout<<"Enter balance:\n";
        cin>>tot;
    }
    
    void showdata(){
        cout<<"Name: "<<name<<endl;
        cout<<"Account number: "<<accnumber<<endl;
        cout<<"Account type: "<<type<<endl;
        cout<<"Total balance: "<<tot<<endl;
    }
    
    void deposit(){
        int a;
        cout<<"Enter amount for deposit:\n";
        cin>>a;
        tot=tot+a;
    }
    
    void withdrawl(){
        int b;
        cout<<"Enter amount for withdrowl:\n";
        cin>>b;
        tot=tot-b;
    }
    
    
};


int main()
{

Bank b;
int choice;
while(1){
    cout<<"\n----------WELCOME----------\n";
    cout<<"---------------------------\n";
    cout<<"1. Open account\n2. Show balance\n3. Deposite\n4. Withdraw\n5. Exti: ";
    cin>>choice;
    switch(choice){
        case 1: b.setvalue(); break;
        case 2: b.showdata(); break;
        case 3: b.deposit(); break;
        case 4: b.withdrawl(); break;
        case 5: exit(1);
        default: cout<<"inviled input";
    }
}
    return 0;
}
