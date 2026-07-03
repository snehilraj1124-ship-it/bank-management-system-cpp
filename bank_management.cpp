#include <iostream>
using namespace std;

class BankAccount {
private:
    string name;
    int accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "Enter Account Holder Name: ";
        cin >> name;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    void deposit() {
        double amount;
        cout << "Enter Deposit Amount: ";
        cin >> amount;
        balance += amount;
        cout << "Deposit Successful.\n";
    }

    void withdraw() {
        double amount;
        cout << "Enter Withdrawal Amount: ";
        cin >> amount;

        if(amount <= balance){
            balance -= amount;
            cout << "Withdrawal Successful.\n";
        }
        else{
            cout << "Insufficient Balance.\n";
        }
    }

    void display() {
        cout << "\n----- Account Details -----\n";
        cout << "Name: " << name << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: ₹" << balance << endl;
    }
};

int main() {

    BankAccount account;
    int choice;

    while(true){

        cout<<"\n====== Bank Management System ======\n";
        cout<<"1. Create Account\n";
        cout<<"2. Deposit Money\n";
        cout<<"3. Withdraw Money\n";
        cout<<"4. Display Account\n";
        cout<<"5. Exit\n";
        cout<<"Enter Choice: ";
        cin>>choice;

        switch(choice){

            case 1:
                account.createAccount();
                break;

            case 2:
                account.deposit();
                break;

            case 3:
                account.withdraw();
                break;

            case 4:
                account.display();
                break;

            case 5:
                cout<<"Thank You!";
                return 0;

            default:
                cout<<"Invalid Choice";
        }

    }

}
