/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 5, 2020, 11:06 AM
 */
/* https://codeforces.com/problemset/problem/977/A */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n, k;
    cin >> n >> k;
    while(k--){
        if(n%10 == 0)
            n /= 10;
        else
            n--;
        //cout << n << " ";
    }
    cout << n;
    return 0;
}

