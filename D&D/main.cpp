#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "dice.h"
#include "character.h"
#include "choose.h"

using namespace std;
void file(character);
void rise(character&);
void stats(character&);
int calculate(int);

int main() {

    bool ctrl = true;
    int ability[6];

    while (ctrl) {
        dice(ability);
        ctrl = check_dice(ability);
    }

    for (int i = 0;i < 6;i++) {

        cout << i + 1 << "-";
        cout << ability[i] << endl;
    }

    character one;
    ch_races(one);
    ch_classes(one);
    choose(one, ability);
    rise(one);
    stats(one);

    cout << one.get_strength() << endl;
    cout << one.get_dexterity() << endl;
    cout << one.get_constitution() << endl;
    cout << one.get_intelligence() << endl;
    cout << one.get_wisdom() << endl;
    cout << one.get_charisma() << endl;
    
    
   
    file(one);

    return 0;
}

void rise(character& one) {
    if (one.get_race() == "DWARF") {
        one.set_constitution(one.get_constitution() + 2);
        one.set_charisma(one.get_charisma() - 2);
    }
    if (one.get_race() == "ELF") {
        one.set_dexterity(one.get_dexterity() + 2);
        one.set_constitution(one.get_constitution() - 2);
    }
    if (one.get_race() == "GNOME") {
        one.set_constitution(one.get_constitution() + 2);
        one.set_strength(one.get_strength() - 2);
    }
    if (one.get_race() == "HALF-ORC") {
        one.set_strength(one.get_strength() + 2);
        one.set_charisma(one.get_charisma() - 2);
        one.set_intelligence(one.get_intelligence() - 2);
    }
    if (one.get_race() == "HALFING") {
        one.set_dexterity(one.get_dexterity() + 2);
        one.set_strength(one.get_strength() - 2);
    }


}

void stats(character& one) {
    one.set_strength(calculate(one.get_strength()));
    one.set_charisma(calculate(one.get_charisma()));
    one.set_dexterity(calculate(one.get_dexterity()));
    one.set_intelligence(calculate(one.get_intelligence()));
    one.set_wisdom(calculate(one.get_wisdom()));
    one.set_constitution(calculate(one.get_constitution()));
}

int calculate(int x) {
    int temp;
    
    if (x < 10) {
        temp = 10 - x;
        temp = temp / 2;
        temp *= -1;
    }

    else
        temp = abs(x - 10) / 2;


    return temp;
}

void file(character one) {

    ofstream write;

    write.open("Character.txt");
    write << "## CHARACTER ##" << endl;
    write << "Races        -> " << one.get_race() << endl;
    write << "Classes      -> " << one.get_classes() << endl;
    write << "Strength     -> " << one.get_strength() << endl;
    write << "Dexterity    -> " << one.get_dexterity() << endl;
    write << "Constitution -> " << one.get_constitution() << endl;
    write << "Intelligence -> " << one.get_intelligence() << endl;
    write << "Wisdom       -> " << one.get_wisdom() << endl;
    write << "Charisma     -> " << one.get_charisma() << endl;

    write.close();
}
