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
    Player yo;

    cout << " Masukkan nama player=";
    getline(cin, yo.name);
    cout << "Masukkan id= ";
    cin >> yo.id;
    cout << "Masukkan level player= ";
    cin >> yo.level;
    cin.ignore();
    cout << "Masukkan Weapon=";
    getline(cin, yo.weapon.name);
    cout << "Masukkan damage=";
    cin >> yo.weapon.damage;

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player=" << yo.name << endl;
    cout << "Id Player=" << yo.id << endl;
    cout << "Level Player=" << yo.level << endl;
    cout << "Weapon Player=" << yo.weapon.name << endl;
    cout << "Damage Weapon=" << yo.weapon.damage << endl;
}