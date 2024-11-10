#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM(int bal) : balance(bal) {}

    int getBalance() const {
        return balance;
    }

    bool withdraw(int amount) {
        if (amount > balance) {
            return false;
        }
        balance -= amount;
        return true;
    }

    void deposit(int amount) {
        balance += amount;
    }
};

int main() {
   
    ATM atm(1000);
    int choice, amount;
    char repeat;
    
    	 cout << "\tA T M    M A C H I N E:";
    cout << "\tPROJECT BY ABDUL MOIZ F24BSE010\n";

    do {
    	
        cout << "1. View Balance:\n";
        cout << "2. Cash Withdrawal\n";
        cout << "3. Cash Deposit\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your balance is: " << atm.getBalance() << endl;
                break;
            case 2:
                cout << "Your available balance: " << atm.getBalance() << endl;
                cout << "Enter the amount to withdraw: ";
                cin >> amount;
                if (atm.withdraw(amount)) {
                    cout << "Withdrawal successful.\n";
                } else {
                    cout << "Insufficient balance.\n";
                }
                break;
            case 3:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                atm.deposit(amount);
                cout << "Deposit successful.\n";
                break;
            case 4:
                cout << "Thanks for using Moiz's ATM.\n";
                break;
            default:
                cout << "Invalid choice.\n";
                break;
        }

        cout << "\nDo you want to try another transaction? [YES / NO]: ";
        cin >> repeat;
    } while (repeat == 'y' || repeat == 'Y');

    return 0;
}
