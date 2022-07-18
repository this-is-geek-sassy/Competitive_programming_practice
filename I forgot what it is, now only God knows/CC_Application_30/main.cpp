/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 16, 2020, 6:42 PM
 */
/* https://codeforces.com/problemset/problem/124/A */
#include <bits/stdc++.h>
#define min(x,y) ((x) < (y) ? (x) : (y))
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int a, b, n;
    cin >> n >> a >> b;
    cout << min(n-a, b+1) << endl;
    return 0;
}

