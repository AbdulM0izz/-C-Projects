#include <iostream>
using namespace std;
int main(){
    int menu; 
    int balance = 1000 ;
    int amount;
    int deposit;

    cout<<" ATM MENU "<<endl;
    cout<<"\n1: Check Balance ";
    cout<<"\n2: Withdraw Money ";
    cout<<"\n3: Deposit Money ";
    cout<<"\nPress 4 to Exit ";

    do{
        cout<<"\nEnter Your Choice "<<endl;
        cin>>menu;
        switch(menu){
            case 1:
            cout<<" Your Balance "<<balance<<endl;
            break;
            
            case 2:
            	cout<<"Enter amount to withdraw "<<endl;
            	cin>>amount;
            	balance -= amount;
            	if(amount  > balance ){
            		cout<<" Insuficent Balance !!! "<<endl;
				} else if(amount > 0 ){
					cout<<" Withdraw Successfull "<<endl;
				}else{
					cout<<"Enter Valid Number "<<endl;
				}
				break;
				
				case 3:
					cout<<" Enter Amount To Deposit "<<endl;
					balance += amount;
					cin>>amount;
					if(deposit > 0){
						cout<<"Deposit successfull "<<endl;
					}else if(deposit <= 0 ){
						cout<<"Enter valid Amount "<<endl;
					}
					break;
					
					case 4:
						cout<<"Exiting "<<endl;
						break;
				         	
        }

    }while( menu != 4);
    cout<<"\nGood Bye "<<endl;

    return 0;
}

