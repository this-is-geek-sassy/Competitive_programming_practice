/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 17, 2020, 10:47 PM
 */
/* https://codeforces.com/problemset/problem/58/A */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    string s = "hello", s_typed;
    cin >> s_typed;
    int i=0, j=0;
    while(i < s.size() && j < s_typed.size()){
        if(s_typed[j] == s[i]){
            i++;  j++;
        }
        else
            j++;
    }
    if(i == s.size())
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

