#include <iostream>
#include <string>
using namespace std;

struct acc {
    string bank_name;
    int loc_code;
};

class account {
    private:
        string acc_holder_name;
        int acc_no;
        int balance;
        acc bank_info;

    public:
        account() {
            acc_no = 0;
            balance = 0;
            acc_holder_name = "unknown";
            bank_info.bank_name = "canara";
            bank_info.loc_code = 641018;
        }

    account(int acc, int bal, string name, string bnk, int loc ) {
        acc_no = acc;
        balance = bal;
        acc_holder_name = name;
        bank_info.bank_name = bnk;
        bank_info.loc_code = loc;
    }

    void deposit() {
        cout << "------------------------------" << endl;
        cout << "        Deposit Amount        " << endl;
        cout << "------------------------------" << endl;
        float amount;
        cout << "\nEnter amount to deposit : ";
        cin >> amount;

        if (amount <= 0) {
            cout << "\n Invalid amount to deposit" << endl;
            return;
        }

        float old_bal = balance;
        balance += amount;

       
        cout << "\nAmount Deposited Successfully" << endl;
        cout << "\nOld balance      : " << old_bal << endl;
        cout << "Deposited Amount : " << amount << endl;
        cout << "New balance      : " << balance << endl;  
    }

     void withdraw () {
        cout << "------------------------------" << endl;
        cout << "        Withdraw Amount        " << endl;
        cout << "------------------------------" << endl;

        float amount;
        cout << "\nEnter amount to withdraw : ";
        cin >> amount;

        if (amount <= 0) {
            cout << "\nInvalid amount to withdraw" << endl;
            return;
        }

        if (amount > balance) {
            cout << "\nInsufficient balance" << endl;
        } else {
            float old_bal = balance;
            balance -= amount;

            cout << "\nAmount Succesfully withdrawed" << endl;
            cout << "\nOld balance       : " << old_bal << endl;
            cout << "Amount Withdrawed : " << amount << endl;
            cout << "New balance       : " << balance << endl;
        }
    }

    void check_balance () {
            cout << "------------------------------" << endl;
            cout << "        Check Balance         " << endl;
            cout << "------------------------------" << endl;
            cout << "\nCurrent Balance : " << balance << endl;
    }


    void view_data() {
        cout << "\n=========================" << "\n"
             << "=====Account Details=====" << "\n"
             << "=========================" << "\n"
             << "Account Holder : " << acc_holder_name << endl
             << "Account Number : " << acc_no << endl
             << "Bank Name      : " << bank_info.bank_name << endl
             << "Branch code    : " << bank_info.loc_code << endl
             << "Balance        : " << balance << endl;
    }

    ~account() {
        cout << "\nAccount is closed" << endl;
    }
};

int main() {
    int operation;
    account acc(123, 1000, "Navya", "HDFC", 641019);

    cout << "==============================" << endl;
    cout << "      Welcome To The Bank     " << endl;
    cout << "==============================" << endl;

    while(1) {
        
        cout << "\nChoose an option" << endl;
        cout << "------------------------------" << endl;
        cout << " 1 -  Deposit" << endl;
        cout << " 2 -  Withdraw" << endl;
            cout  << " 3 -  Check Balance" << endl;
            cout  << " 4 -  View Account Details" << endl;
            cout  << " 0 -  Exit" << endl;
        cout << "------------------------------" << endl;

        cout << "\nEnter your choice : " ;
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
                acc.view_data();
                break;

            case 0:
                cout << "\nThank you!" << endl;
                return 0;
  
            default:
                cout << "Invalid choice" << endl;

        }


      }
}
