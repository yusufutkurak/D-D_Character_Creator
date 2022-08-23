#include <iostream>
#include "dice.h"
using namespace std;

void dice(int ability[6]) {

    srand(time(NULL));
    int i, j;
    int diceds[4];

    for (i = 0;i < 6;i++)
    {
        for (j = 0;j < 4;j++) {
            diceds[j] = (rand() % 7) + 1;
        }
        ability[i] = minimum(diceds);
    }

}

int minimum(int dic[]) {
    int i, j, min, total;

    min = dic[0];
    total = 0;

    for (i = 0;i < 4;i++) {
        total += dic[i];
        if (dic[i] > min) {
            min = dic[i];
        }
    }

    return total - min;
}

bool check_dice(int abilty[]) {

    int i, j = 0;

    for (i = 0;i < 6;i++) {
        if (abilty[i] < 14) {
            j++;
        }
        if (j == 6) {
            dice(abilty);
        }
    }

    if (j == 6)
        return true;

    else
        return false;
}
