/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on August 31, 2020, 9:27 AM
 */
/* Website url: https://codeforces.com/problemset/problem/4/A */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int w;
    cin >> w;
    if (w>2 && w%2==0)
        cout << "YES";
    else
        cout << "No";
    return 0;
}

