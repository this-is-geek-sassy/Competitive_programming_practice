/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on August 31, 2020, 11:08 AM
 */
/* website url: https://codeforces.com/problemset/problem/236/A */
//SOLVED
#include <cstdlib>
#include <iostream>
#include <string>
#include <set>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string name;
    cin >> name;
    set<char> _name(begin(name), end(name));
    if(_name.size()%2)
        cout << "IGNORE HIM!";
    else
        cout << "CHAT WITH HER!";
    return 0;
}

