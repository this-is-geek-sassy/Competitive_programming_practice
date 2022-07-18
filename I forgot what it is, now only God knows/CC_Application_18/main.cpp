/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 5, 2020, 11:14 AM
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
/* https://codeforces.com/problemset/problem/41/A */
//SOLVED
/*
 * 
 */
int main(int argc, char** argv) {
    string input1, input2;
    getline(cin, input1);
    getline(cin, input2);
    
    reverse(input1.begin(), input1.end());
    (input1 == input2)? cout << "YES" : cout << "NO";
    return 0;
}

