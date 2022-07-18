/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on November 11, 2020, 10:40 PM
 */
/* https://codeforces.com/problemset/problem/1248/B */
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    vector<int> a(n), h, v;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a.begin(), a.end());
    //cout << "hello " << endl;
    int i = 0, j = n-1;
    while(i <= j){
        //cout << "hello " << endl;
        if(i == j){
            h.push_back(a[j--]);
            continue;
        }
        v.push_back(a[i++]);
        h.push_back(a[j--]);
    }
    long long int hsum=0, vsum=0;
    for(int i=0; i<h.size(); i++)
        hsum += h[i];
    
    for(int i=0; i<v.size(); i++)
        vsum += v[i];
    cout << hsum*hsum + vsum*vsum << endl;
    
    return 0;
}

