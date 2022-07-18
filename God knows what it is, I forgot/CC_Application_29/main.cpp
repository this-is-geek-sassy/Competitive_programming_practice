/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 16, 2020, 3:52 PM
 */
/* https://codeforces.com/problemset/problem/1141/B */
//SOLVED
#include <bits/stdc++.h>
typedef long long int lli;
using namespace std;
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

/*
 * 
 */
int main(int argc, char** argv) {
    fastio;
    lli n;
    cin >> n;
    vector<int> schedule(n);
    for(auto i=0; i<n; i++)
        cin >> schedule[i];
    int count = 0, i = 0, final_count = 0;
    for(int i=0; i<2*n; i++){
        if(schedule[i%n] == 1)
            count++;
        else
            count = 0;
        if(count > final_count)
            final_count = count;
    }
    /*if(schedule[0]==1 && schedule[n-1]==1)
        count++;
    if(count > final_count)
        final_count = count;*/
    
    cout << final_count << endl;
    return 0;
}

