/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 5, 2020, 11:49 AM
 */
/* https://codeforces.com/problemset/problem/750/A */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n, k;
    cin >> n >> k;
    int problem = 0, temp = 0;
    for(int i=1; i<=n; i++){
        temp+=i;
        if((5*temp+k) > (4*60)){
            problem = i-1;
            break;
        }
        problem = i;
    }
    
    cout << problem;
    return 0;
}

