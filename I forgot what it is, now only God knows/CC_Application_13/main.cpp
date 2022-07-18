/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 9, 2020, 8:01 PM
 */
/* website url: https://codeforces.com/problemset/problem/299/B?locale=en */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n,k;
    cin >> n >> k;
    string road;
    cin >> road;
    int jump=0;
    for(int i=0; i<n; i++){
        if(road[i] == '#')
            ++jump;
        else if(road[i] == '.')
            jump = 0;
        if(jump >= k)
            break;
    }
    if(jump >= k)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

