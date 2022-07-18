/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 9, 2020, 6:01 PM
 */
/* website url: https://codeforces.com/problemset/problem/1005/B */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int min(int a, int b){
    return (a<b)? a:b;
}

int main(int argc, char** argv) {
    string s,t;
    cin >> s >> t;
    if(s == t){
        cout << 0;
        return 0;
    }
    int k = min(s.size(),t.size());
    //k--;
    int i;
    for(i = 1; i<=k; i++){
        if(s[s.size() - i] != t[t.size() - i])
            break;
    }
    int c = (s.size()-i+1) + (t.size()-i+1);
    cout << c << endl;
    return 0;
}

