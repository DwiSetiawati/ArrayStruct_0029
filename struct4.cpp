#include <iostream>
#include <string>
using namespace std;

struct Weapon
{
    string name;
    int damage;
};

struct Player
{
    string name;
    string id;
    string level;
    Weapon weapon;
};

int main()
{
    Player yo[3];
    for (int i = 0; i < 3; i++)
    {
        cout << " Masukkan nama player=";
        getline(cin, yo[i].name);
        cout << "Masukkan id= ";
        cin >> yo[i].id;
        cout << "Masukkan level player= ";
        cin >> yo[i].level;
        cin.ignore();
        cout << "Masukkan Weapon=";
        getline(cin, yo[i].weapon.name);
        cout << "Masukkan damage=";
        cin >> yo[i].weapon.damage;
    }

    cout << endl;
    cout << "Tampilkan Player" << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Nama Player=" << yo[i].name << endl;
        cout << "Id Player=" << yo[i].id << endl;
        cout << "Level Player=" << yo[i].level << endl;
        cout << "Weapon Player=" << yo[i].weapon.name << endl;
        cout << "Damage Weapon=" << yo[i].weapon.damage << endl;
    }
}