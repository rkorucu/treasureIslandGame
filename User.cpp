/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.cpp
 * Author: BBYG
 * 
 * Created on September 11, 2021, 6:04 AM
 */

#include "User.h"

using namespace std;

User::User(){
    numberOfLives = 2;
}

User::~User() {
    numberOfLives = 0;
} 

void User::setnoLives(int w) 
{
    numberOfLives = w;
}

int User::getnoLives() {
    return numberOfLives;
}