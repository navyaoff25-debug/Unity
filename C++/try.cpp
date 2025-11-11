#include<iostream>
#include<string>
using namespace std;

class character {
public:
    std::string name;
    int health;
    int level;
    int attackPower;

    character () {
        name = "unknown";
        health = 0;
        level = 0;
        attackPower = 0;
    }

    character (string n, int h, int l, int a) {
        name = n;
        health = h;
        level = l;
        attackPower = a;
    }

    virtual void attack() = 0;

    void display() {
        cout << "\n=============================\n";
        cout << "     CHARACTER STATUS\n";
        cout << "=============================\n";
        cout << " Name          : " << name << endl;
        cout << " Health        : " << health << endl;
        cout << " Attack Power  : " << attackPower << endl;
        cout << " Level         : " << level << endl;
        cout << "=============================\n\n";
    }

    void damagehealth(int amount) {
      health -= amount ;
      cout << name << " takes " << amount << " damage!" << endl;
    }

    void levelup() {
      level ++;
      cout << name << " leveled up! Now level " << level << endl;
    }

    ~character() {
      cout << name << " has been removed from the battlefield. \n";
    }
    
};

class warrior : public character {
public:
    int rage;
    
    warrior(string n, int h, int a, int l) : character(n, h, a, l) {
        rage = 0;
    }

    void attack() override {
        cout << "swings a mighty sword!" << endl;
    }

    void specialmove() {
      cout << "uses Rage Slash! " << endl;
    }

    ~warrior() {
        cout << "(Warrior) retired with honor. " << endl;
    }
};

class Mage : public character {
    public:
    int mana;

    Mage(string n, int h, int a, int l) : character(n, h, a, l) {
        mana = 0;
    }

    void attack() override {
      cout << "casts a Fireball! " << endl;
    }

    void specialmove() {
      cout << "uses Lightning Storm!" << endl;
    }

    ~Mage() {
        cout << "(Mage) vanished into the mist. " << endl;
    }
};

class Archer : public character {
    public:
    int arrows;

    Archer(string n, int h, int a, int l) : character(n, h, a, l) {
        arrows = 10;
    }

    void attack() override {
        cout << "shoots a piercing arrow! "<< endl;
    }

    void specialMove() {
        cout << name << "uses Multi-Shot! " << endl;
    }

    ~Archer() {
        cout << "(Archer) returned to the forest." << endl;
    }

};

int main() {
    cout << "=============================\n";
    cout << "   RPG CHARACTER SHOWDOWN  \n";
    cout << "=============================\n\n";

    character* c1 = new warrior("Thor", 100, 20, 1);
    character* c2 = new Mage("Merlin", 80, 30, 1);
    character* c3 = new Archer("Legolas", 90, 25, 1);

    c1->attack();
    c2->attack();
    c3->attack();

    c1->display();
    c2->display();
    c3->display();

    cout << "\n=============================\n";
    cout << "        END OF GAME \n";
    cout << "=============================\n";

    delete c1;
    delete c2;
    delete c3;

    return 0;
}
