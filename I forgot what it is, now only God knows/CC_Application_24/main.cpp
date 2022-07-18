/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 10, 2020, 7:39 PM
 */
/* https://codeforces.com/problemset/problem/1155/A */
/* Hey! It's Saswata from Kolkata, India. */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int lex_sorted(string s){
    for(size_t i=0; i<s.size()-1; i++){
        if(s[i] > s[i+1])
            return i;
    }
    return -1;
}
    /*long long int find_next_min(string& s, long long int j){
        long long int k=0;
        for(size_t i=j+1; i<s.size(); i++){
            if(s[i] < s[j]){
                k = i;
                return k;
            }
        }
        return k;
    }
    long long int findmax(string& s){
        long long int k=0;
        for(size_t i=0; i<s.size()-1; i++){
            if(s[i] > s[k])
                k = i;
        }
        return k;
    }*/
int main(int argc, char** argv) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    //cout << s.size() << endl;
    int k = lex_sorted(s);
    if (k != -1){
        cout << "YES\n";
        cout << k+1 << " " << k+2 << endl;
    }
    else{
        cout << "NO\n";
    }
    return 0;
}

