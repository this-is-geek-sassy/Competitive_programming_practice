/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 21, 2020, 12:54 PM
 */
/* https://codeforces.com/problemset/problem/1373/A */
//SOLVED
#include <bits/stdc++.h>
using namespace std;
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/*
 * 
 */
int main(int argc, char** argv) {
    fastio
    int t;
    cin >> t;
    while(t--){
        unsigned long long int a,b,c;
        cin >> a >> b >> c;
        int ans1, ans2;
        if(c <= a)
            ans1 = -1;
        else
            ans1 = 1;
        if(c >= a*b)
            ans2 = -1;
        else
            ans2 = b;
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}

