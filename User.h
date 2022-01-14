/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.h
 * Author: BBYG
 *
 * Created on September 11, 2021, 6:04 AM
 */

#ifndef USER_H
#define USER_H
#include <string>

using namespace std;

class User {
    public:
    User();
    ~User(); 
    void setnoLives(int);
    int getnoLives();

  private:
    int numberOfLives;

};

#endif /* USER_H */

