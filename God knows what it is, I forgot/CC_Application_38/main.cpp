/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 22, 2020, 9:36 AM
 */
/* https://codeforces.com/problemset/problem/158/B */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int give_integer(int k){
    if(k >= 0)
        return k;
    return 0;
}
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    int n;
    cin >> n;
    int counts[5] = {};
    vector<int> groups(n);
    for(auto i=0; i<n; i++){
        cin >> groups[i];
        counts[groups[i]]++;
    }
    /*for(int i=0; i<5; i++)
        cout << counts[i] << " ";
    cout << endl;*/
    long long int taxi = 0;
    taxi += counts[4];
    counts[4] = 0;
    taxi = taxi + min(counts[3], counts[1]) + give_integer(counts[3] - min(counts[3], counts[1]));
    counts[1] -= min(counts[3], counts[1]);
    counts[3] = 0;
    if(counts[2] > 1){
        taxi += floor(counts[2]/2.0);
        counts[2] -= 2*floor(counts[2]/2.0);
    }
    if(counts[2] != 0 && counts[1] >= 1){
        taxi++; counts[2]--;
        counts[1] = give_integer(counts[1] - 2);
    }
    if(counts[2]==1)
        taxi++;
    if(counts[1] != 0){
        taxi += ceil(counts[1]/4.0);
        counts[1] -= (4*floor(counts[1]/4.0) + (counts[1] - 4*floor(counts[1]/4.0) ) );
    }
    cout << taxi << endl;
    
    return 0;
}

