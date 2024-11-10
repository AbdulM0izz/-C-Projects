#include <iostream>
using namespace std;
class ATM{
    private:
    int balance ;
    public:
    ATM( int bal){
         balance =bal;
    }
    int getBalance(){
        return balance;
    }
    int withdraw( int amount){
        if (amount > balance){
            return false;
        }
        balance = balance - amount;
        return true;

    }
    void deposit (int amount ){
        balance = balance - amount;
    }
};

int main(){
    cout<<"\tA T M    M A C H I N E:   ";
    cout<<"\tPROJECT BY ABDUL MOIZ F24BSE010 "<<endl;
    ATM atm(1000);
    int choice;
    cout<<"1. View Balance: "<<endl;
    cout<<"2. Cash withdraw "<<endl;
    cout<<"3. Cash deposit "<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter your choice : ";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Your balance is :"<<atm.getBalance();
        break;
    }
   
    



    return 0;
}
