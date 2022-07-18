/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on November 11, 2020, 11:57 AM
 */
/* https://codeforces.com/problemset/problem/1183/B */
//
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int q;
    cin >> q;
    while(q--){
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for(int i=0; i<n; i++)
            cin >> a[i];
        /*for(int i=0; i<n; i++)
            cout << a[i] << " ";
        cout << endl;*/
        sort(a.begin(), a.end());
        int lowest = a[0], highest = a[n-1];
        if((highest-lowest) > 2*k){
            cout << "-1" << endl;
            continue;
        }
        if( (lowest + k) == highest)
            cout << k << endl;
        else if((lowest+k) < highest){
            if((highest - (lowest+k)) <= k)
                cout << (highest - (0+k)) << endl;
        }
        else if((lowest+k) > highest){
            if(((lowest + k) - highest) <= k)
                cout << ((lowest + k) ) << endl;
        }
    }
    return 0;
}

