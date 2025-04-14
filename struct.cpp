#include <iostream>
#include <string>
using namespace std;

struct Player
{
    string name;
    string id;
    string level;
};

int main()
{
    Player yo;

    cout << "Masukkan nama player= ";
    getline(cin, yo.name);
    cout << "Masukkan id= ";
    getline(cin, yo.id);
    cout << "Masukkan level= ";
    getline(cin, yo.level);

    cout << "Tampilkan Player" << endl;
    cout << "Nama Player=" << yo.name << endl;
    cout << "Id Player=" << yo.id << endl;
    cout << "Level PLayer=" << yo.level << endl;
}