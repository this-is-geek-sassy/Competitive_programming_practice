/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 8, 2020, 11:56 AM
 */
/* https://www.codechef.com/problems/LAPIN */
/* It's Saswata Mishra from HIT Kolkata */
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
        string s;
        cin >>s;
        string s_fisrt(s, 0, s.size()/2), s_second(s, ceil(s.size()/(2.0)), s.size()/2);
        
        //cout << s_fisrt << " " << s_second << endl;
        array<int, 26> presence = {};
        array<int, 26> presence_2 = {};
        for(auto x: s_fisrt){
            presence[(int)(x-97)]++;
        }
        for(auto x: s_second){
            presence[(int)(x-97)]--;
        }
        /*for(auto x: presence)
            cout << x << " ";
        cout << endl;*/
        if(presence==presence_2)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

