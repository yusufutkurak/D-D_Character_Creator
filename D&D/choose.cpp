#include <iostream>
#include "choose.h"
#include "character.h"

using namespace std;

void ch_races(character& one) {
    string races[7] = { "HUMAN", "DWARF", "ELF", "GNOME" , "HALF-ELF" , "HALF-ORC" , "HALFING" };
    int temp, i;
    cout << "Choose your race" << endl;
    for (i = 0;i < 7;i++) {
        cout << i + 1 << ". " << races[i] << endl;
    }
    cin >> temp;
    one.set_race(races[temp - 1]);
}

void ch_classes(character& one) {
    string classes[11] = { "BARBARIAN", "BARD", "CLERIC", "DRUID" , "FIGHTER" , "MONK" , "PALADIN" , "RANGER" ,"ROUGE" , "SORCERER" , "WIZARDS"};
    int temp, i;
    cout << "Choose your classes" << endl;
    for (i = 0;i < 11;i++) {
        cout << i + 1 << ". " << classes[i] << endl;
    }
    cin >> temp;
    one.set_classes(classes[temp - 1]);
}

void choose(character& one, int ability[6]) {
    int temp;
    cout << "Choose an ability point for strength (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_strength(ability[temp - 1]);
    ability[temp - 1] = 0;

    cout << "Choose an ability point for dexterity (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_dexterity(ability[temp - 1]);
    ability[temp - 1] = 0;

    cout << "Choose an ability point for constitution (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_constitution(ability[temp - 1]);
    ability[temp - 1] = 0;

    cout << "Choose an ability point for intelligence (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_intelligence(ability[temp - 1]);
    ability[temp - 1] = 0;

    cout << "Choose an ability point for wisdom (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_wisdom(ability[temp - 1]);
    ability[temp - 1] = 0;

    cout << "Choose an ability point for charisma (1-6)";
    cin >> temp;
    temp = choose_control(temp, ability);
    one.set_charisma(ability[temp - 1]);
    ability[temp - 1] = 0;
}

int choose_control(int temp, int ability[6]) {
    bool check = true;
    char a;

    while (check) {
        if (ability[temp - 1] == 0) {
            cout << "Re-select previously selected ability points!";
            cin >> temp;
        }
        if (ability[temp - 1] != 0) {
            check = false;
        }
    }

    check = true;
    while (check) {
        cout << "Are you sure?(y/n)";
        cin >> a;
        if (a == 'n') {
            cout << "Try again";
            cin >> temp;
        }
        if (a == 'y') {
            check = false;
        }
    }

    return temp;
}
