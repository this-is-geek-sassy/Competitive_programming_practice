/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 3, 2020, 5:55 PM
 */
/* website url: https://codeforces.com/problemset/problem/1167/A */
//RESOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string number;
        cin >> number;
        if(n == 11 && number[0]=='8'){
            cout << "YES" << '\n';
            continue;
        }
        else if((n == 11 && number[0]!='8') || n < 11)
        {
            cout << "NO" << '\n';
            continue;
        }
        int no_of_extra_digits = n - 11;
        //cout << no_of_extra_digits << endl;
        bool found = false;
        for(int i=0; i<no_of_extra_digits+1; i++){
            if(number[i] == '8'){
                found = true;
                cout << "YES" << endl;
                break;
            }
        }
        if(found == false)
            cout << "NO" << endl;
    }
    return 0;
}

