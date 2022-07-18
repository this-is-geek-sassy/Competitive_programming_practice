/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 6, 2020, 10:34 AM
 */
/* website url: https://codeforces.com/problemset/problem/1343/A */
//SOLVED
#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;

/*
 * 
 */
int expn(int k){
    return (pow(2,k) - 1);
}
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int k = 2;
        while(n % expn(k)){
            k++;
        }
        cout << n/expn(k) << endl;
    }
    return 0;
}

