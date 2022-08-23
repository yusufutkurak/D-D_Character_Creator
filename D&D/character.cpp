#include <iostream>
#include<string.h>
#include "character.h"

using namespace std;

void character::set_strength(int a) {
    strength = a;
}
int character::get_strength() {
    return strength;
}

void character::set_dexterity(int a) {
    dexterity = a;
}
int character::get_dexterity() {
    return dexterity;
}

void character::set_constitution(int a) {
    constitution = a;
}
int character::get_constitution() {
    return constitution;
}

void character::set_intelligence(int a) {
    intelligence = a;
}
int character::get_intelligence() {
    return intelligence;
}

void character::set_wisdom(int a) {
    wisdom = a;
}
int character::get_wisdom() {
    return wisdom;
}

void character::set_charisma(int a) {
    charisma = a;
}
int character::get_charisma() {
    return charisma;
}
void character::set_race(string a) {
    races = a;
}

string character::get_race() {
    return races;
}

void character::set_classes(string a) {
    classes = a;
}
string character::get_classes() {
    return classes;
}

