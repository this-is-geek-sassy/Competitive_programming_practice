/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on August 31, 2020, 2:02 PM
 */
/* website url: https://codeforces.com/problemset/problem/1368/A */
//SOLVED
#include <cmath>
#include <iostream>
using namespace std;

/*
 * 
 */

void swap(int &a, int &b){
    int t = a;
    a = b;
    b = t;
}
int main(int argc, char** argv) {
    int t;  //number of test-cases
    cin >> t;
    while(t){
        int a,b,n;
        cin >> a >> b >> n;
        int count = 0;
        if(a>b)
            swap(a,b);
        //cout << a << " " << b << '\n';
        while(b<=n/*Confusion*/){
            a+=b;
            swap(a,b);
            count++;
        }
        cout << count << '\n';
        t--;
    }
    return 0;
}

