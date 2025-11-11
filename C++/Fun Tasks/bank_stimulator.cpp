#include<iostream>
#include<string>
using namespace std;

struct bank_info {
    string bank_name;
    int branch_code;
};

class acc_info {
    private:
        string acc_holder_name;
        int acc_no;
        float balance;
        bank_info info;
    
    public:
        acc_info() {
            acc_holder_name = "Navya";
            acc_no = 123;
            balance = 5000;
            info.bank_name = "HDFC";
            info.branch_code = 12;
        }

        acc_info (string h_name, int a_no, float bal, string b_name, int b_code) {
            acc_holder_name = h_name;
            acc_no = a_no;
            balance = bal;
            info.bank_name = b_name;
            info.branch_code = b_code;
        }

        void deposit() {
            float amount;
            cout << "Enter amount to deposit : ";
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount" << endl;
                return;
            }

            float old_bal = balance;
            balance += amount;

            cout << "Amount deposited successfully" << endl;
            cout << "Amount deposited : " << amount << endl;
            cout << "Old Balance      : " << old_bal << endl;
            cout << "New Balance      : " << balance << endl;
        }

        void withdraw() {
            float amount;
            cout << "Enter amount to withdraw : " ;
            cin >> amount;

            if (amount <= 0) {
                cout << "Invalid amount" << endl;
                return;
            } 
            
            if (amount > balance) {
                cout << "Insufficient balance" << endl;
            }

            float old_bal = balance;
            balance -= amount;

            cout << "Amount withdrawed successfully" << endl;
            cout << "Amount withdrawed : " << amount << endl;
            cout << "Old Balance       : " << balance << endl;
            cout << "New Balance       : " << balance << endl;
        }

        void check_balance() {
            cout << "Check Balance" << endl;
            cout << "Current Balance : " << balance << endl;
        }

        void view_details() {
            cout << "=============================" << endl;
            cout << "=======Account Details=======" << endl;
            cout << "=============================" << endl;
            cout << "Account Holder : " << acc_holder_name << endl
                << "Account Number : " << acc_no << endl
                << "Bank Name      : " << info.bank_name << endl
                << "Branch code    : " << info.branch_code << endl
                << "Balance        : " << balance << endl;
        }

        ~acc_info() {
            cout << "Account closed" << endl;
        }

};

int main() {
    int operation;
    acc_info acc("Navya", 9876, 6000, "Canara", 876);

    cout << "Choose your choice" << endl
         << "1 - Deposit" << endl
         << "2 - Withdraw" << endl
         << "3 - Check Balance" << endl
         << "4 - View Data" << endl
         << "0 - Exit" << endl;

    while (1) {
        cout << "Enter your choice : " ;
        cin >> operation ;

        switch (operation) {
        case 1:
            acc.deposit();
            break;
        case 2:
            acc.withdraw();
            break;
        case 3:
            acc.check_balance();
            break;
        case 4:
            acc.view_details();
            break;
        case 0:
            cout << "\nThank You!\n";
            return 0;
        default:
            cout << "Invalid choice" << endl;
        }
    }
    
    return 0;

}