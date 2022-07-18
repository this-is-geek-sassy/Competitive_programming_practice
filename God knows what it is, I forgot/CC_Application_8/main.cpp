/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 3, 2020, 7:49 PM
 */
/* websiate url: https://codeforces.com/problemset/problem/172/A */
//SOLVED
#include <cstdlib>
#include <iostream>
#include <vector>
using namespace std;

/*
 * 
 */
int report_pref_idx(string prev, string current, int j){
    //int i;
    for(int i=0; i<=j; i++){
        if(prev[i] != current[i])
            return i-1;   
    }
    return j;
}

int main(int argc, char** argv) {
    int n,j;
    cin >> n;
    vector<string> friends_phno;
    for(int i=0; i<n; i++){
        string number;
        cin >> number;
        if(i==0)
            j =  number.size()-1;
        friends_phno.push_back(number);
        if(i>0){
            j = report_pref_idx(friends_phno[friends_phno.size()-2], number, j);
        }
    }
    cout << j+1 << endl;
    return 0;
}

