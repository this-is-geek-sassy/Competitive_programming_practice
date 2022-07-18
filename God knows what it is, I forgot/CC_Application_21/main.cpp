/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 5, 2020, 4:41 PM
 */
/* https://codeforces.com/problemset/problem/1385/B */
//SOLVED
#include <bits/stdc++.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, temp;
        cin >> n;
        vector<int> a(2*n);
        vector<int> used(2*n);
        vector<int> p;
        for(auto &it: a) cin >> it;
        
        for(int i=0; i<2*n; i++){
            if(used[a[i]] == 0){
                used[a[i]] = 1;
                p.push_back(a[i]);
            }
        }
        for(auto it: p) cout << it << " ";
        cout << endl;
    }
    return 0;
}

