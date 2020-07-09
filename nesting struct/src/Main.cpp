#include <iostream>
#include <string>

using namespace std;

struct Weapon{
    string name;
    double attackPower;
};

struct Armor{
    string name;
    double defencePower;
};

struct player{
    string name;
    double regen;

    Weapon weapon;
    Armor armor;
};

int main(){
    Weapon pedang,panah;
    Armor bajuBesi,bajuTembaga;
    player player1,player2;

    pedang.name = "pedang";
    pedang.attackPower = 30;
    panah.name = "panah";
    panah.attackPower = 40;

    bajuBesi.name = "baju besi";
    bajuBesi.defencePower = 27;
    bajuTembaga.name = "baju tembaga";
    bajuTembaga.defencePower = 37;

    player1.name = "otong";
    player1.regen = 100;
    player1.weapon = pedang;
    player1.armor = bajuBesi;
    player2.name = "ucup";
    player2.regen = 80;
    player2.weapon = panah;
    player2.armor = bajuTembaga;

    cout <<"name \t\t: " << player1.name << endl;
    cout <<"regen \t\t: " << player1.regen << " hp" << endl;
    cout <<"Weapon \t\t: " << player1.weapon.name << endl;
    cout <<"power \t\t: " << player1.weapon.attackPower << endl;
    cout <<"Armor \t\t: " << player1.armor.name << endl;
    cout <<"defence \t: " << player1.armor.defencePower << endl << endl;

    cout <<"name \t\t: " << player2.name << endl;
    cout <<"regen \t\t: " << player2.regen << " hp" << endl;
    cout <<"Weapon \t\t: " << player2.weapon.name << endl;
    cout <<"power \t\t: " << player2.weapon.attackPower << endl;
    cout <<"Armor \t\t: " << player2.armor.name << endl;
    cout <<"defence \t: " << player2.armor.defencePower << endl << endl;

    return 0;
}