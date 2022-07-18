/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 27, 2020, 7:06 PM
 */
/* https://codeforces.com/problemset/problem/1436/B */
#include <bits/stdc++.h>

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
        vector<vector<int>> square(n, vector<int> (n,0));
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(i==j || i==(n-1-j))
                    square[i][j] = 1;
            }
        }
        if(n%2){
            square[n/2-1][n/2] = 1;
            square[n/2][n/2+1] = 1;
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout << square[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}

