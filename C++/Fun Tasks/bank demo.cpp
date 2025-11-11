#include <iostream>
#include <string>
using namespace std;

class account {
    private:
        int acc_no;
        int balance;

    public:
        string acc_holder_name;

    account() {
        acc_no = 0;
        balance = 0;
        acc_holder_name = "unknown";
    }

    account(int x, int y, string z) {
        acc_no = x;
        balance = y;
        acc_holder_name = z;
    }

    void display() {
        cout << "Account No: " << acc_no
             << ", Balance: " << balance
             << ", Name: " << acc_holder_name << endl;
    }

    ~account() {
        cout << "Destroyed";
    }
};

struct acc {
    string bank_name;
    int loc_code;
};

int main() {
    account acc1;
    account acc2(123, 1000, "Navya");

    acc1.display();
    acc2.display();

}
