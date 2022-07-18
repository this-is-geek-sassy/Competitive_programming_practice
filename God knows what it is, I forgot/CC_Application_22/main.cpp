/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 8, 2020, 10:05 AM
 */
/* https://www.codechef.com/problems/CSUB */
//SOLVED
#include <bits/stdc++.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        long long int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        for(char t: s){
            if(t=='1')
                ++count;
        }
        cout << (long long int) (count*(count + 1)/2) << endl;
    }
    return 0;
}

