#pragma once

#include <iostream>
using namespace std;

class character {
private:
    string classes;
    string races;
    int Level;
    int strength;
    int dexterity;
    int constitution;
    int intelligence;
    int wisdom;
    int charisma;
public:

    void set_charisma(int a);
    int get_charisma();

    void set_strength(int a);
    int get_strength();

    void set_dexterity(int a);
    int get_dexterity();

    void set_constitution(int a);
    int get_constitution();

    void set_intelligence(int a);
    int get_intelligence();

    void set_wisdom(int a);
    int get_wisdom();

    void set_race(string);
    string get_race();

    void set_classes(string);
    string get_classes();
};
