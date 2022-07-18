/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 6, 2020, 12:41 PM
 */
/* website ur: https://codeforces.com/problemset/problem/320/A */
//SOLVED

#include <cstdlib>
#include <string>
#include <iostream>
using namespace std;

/*
 * 
 */
int handle(int state, char i){
    if(state==0){
        if(i=='1')
            return 1;
        else
            return 9;
    }
    else if(state==1){
        if(i=='1')
            return 1;
        else if(i=='4')
            return 2;
        else
            return 9;
    }
    else if(state==2){
        if(i=='1')
            return 1;
        else if(i=='4')
            return 3;
        else
            return 9;
    }
    else if(state==3){
        if(i=='1')
            return 1;
        else
            return 9;    
    }
    else if(state==9){
        return 9;
    }
}
int main(int argc, char** argv) {
    string n;
    cin >> n;
    int state = 0;
    for(int i=0; i<n.size(); i++){
        state = handle(state, n[i]);
    }
    if (state==9)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
    return 0;
}

