#include <iostream>
#include <string>
using namespace std;

class Character {
public:
    string name;
    int health;
    int level;
    int attackPower;

    Character() {
        name = "Unknown";
        health = 0;
        level = 0;
        attackPower = 0;
    }

    Character(string n, int h, int l, int a) {
        name = n;
        health = h;
        level = l;
        attackPower = a;
    }

    virtual void attack() = 0; // pure virtual function

    void display() {
        cout << "\n=============================\n";
        cout << "       CHARACTER STATUS\n";
        cout << "=============================\n";
        cout << " Name          : " << name << endl;
        cout << " Health        : " << health << endl;
        cout << " Attack Power  : " << attackPower << endl;
        cout << " Level         : " << level << endl;
        cout << "=============================\n\n";
    }

    void damageHealth(int amount) {
        health -= amount;
        cout << name << " takes " << amount << " damage!" << endl;
    }

    void levelUp() {
        level++;
        cout << name << " leveled up! Now level " << level << endl;
    }

    virtual ~Character() {
        cout << name << " has left the battlefield.\n";
    }
};

// ================= Derived Classes ===================

class IronMan : public Character {
public:
    int energy;

    IronMan(string n, int h, int a, int l) : Character(n, h, a, l) {
        energy = 100;
    }

    void attack() override {
        cout << name << " fires his repulsor beams!" << endl;
    }

    void specialMove() {
        cout << name << " unleashes the Unibeam!" << endl;
    }

    ~IronMan() {
        cout << "Iron Man suit powers down.\n";
    }
};

class Thor : public Character {
public:
    int thunderPower;

    Thor(string n, int h, int a, int l) : Character(n, h, a, l) {
        thunderPower = 100;
    }

    void attack() override {
        cout << name << " swings Mjolnir and summons thunder!" << endl;
    }

    void specialMove() {
        cout << name << " calls upon the power of lightning!" << endl;
    }

    ~Thor() {
        cout << "Thor returns to Asgard.\n";
    }
};

class Hulk : public Character {
public:
    int rage;

    Hulk(string n, int h, int a, int l) : Character(n, h, a, l) {
        rage = 100;
    }

    void attack() override {
        cout << name << " smashes everything in sight!" << endl;
    }

    void specialMove() {
        cout << name << " goes into a RAGE mode — HULK SMASH!!!" << endl;
    }

    ~Hulk() {
        cout << "Hulk calms down and transforms back.\n";
    }
};

// ================= MAIN FUNCTION ===================

int main() {
    cout << "=============================\n";
    cout << "     AVENGERS BATTLE ARENA\n";
    cout << "=============================\n";

    cout << "\nChoose your hero:\n";
    cout << "1. Iron Man\n";
    cout << "2. Thor\n";
    cout << "3. Hulk\n";
    cout << "Enter your choice (1-3): ";

    int choice;
    cin >> choice;

    Character* player = nullptr;

    switch (choice) {
        case 1:
            player = new IronMan("Iron Man", 100, 30, 1);
            cout << "\nYou chose Iron Man The Genius Billionaire\n";
            break;
        case 2:
            player = new Thor("Thor", 120, 25, 1);
            cout << "\nYou chose Thor The God of Thunder\n";
            break;
        case 3:
            player = new Hulk("Hulk", 150, 35, 1);
            cout << "\nYou chose Hulk The Strongest Avenger\n";
            break;
        default:
            cout << "\nInvalid choice! Defaulting to Iron Man.\n";
            player = new IronMan("Iron Man", 100, 30, 1);
            break;
    }

    cout << "\nYour character's intro:\n";
    player->display();

    cout << "\nBattle Actions:\n";
    player->attack();
    player->damageHealth(20);
    player->levelUp();

    cout << "\n=============================\n";
    cout << "        END OF GAME\n";
    cout << "=============================\n";

    delete player;
    return 0;
}
