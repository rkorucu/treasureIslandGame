/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Character.h
 * Author: BBYG
 *
 * Created on September 11, 2021, 6:03 AM
 */

#ifndef CHARACTER_H
#define CHARACTER_H
#include <string>

#include "User.h"

using namespace std;

class Character : public User {
public:
    Character(string);
    ~Character();
    void setHealth(int);
    void setAttack(int);
    void setName(string);
    string getName();
    int getHealth();
    int getAttack();
    int getPower();
    
private:
    int health;
    int attack_power;
    string name;
    int numberOfLives;
};

#endif /* CHARACTER_H */

