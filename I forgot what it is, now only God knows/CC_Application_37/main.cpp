/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 22, 2020, 8:58 AM
 */
/* https://codeforces.com/problemset/problem/732/B */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,k;
    cin >> n >> k;
    vector<int> walks(n), add_walks(n);
    for(auto i=0; i<walks.size(); i++)
        cin >> walks[i];
    
    for(auto i=1; i<walks.size(); i++)
    {
        int t = k - walks[i-1] - add_walks[i-1] - walks[i];
        if(t < 0)
            add_walks[i] = 0;
        else
            add_walks[i] = t;
    }
    long long int total_additional_walks = 0;
    for(auto i=0; i<walks.size(); i++)
        total_additional_walks += add_walks[i];
    cout << total_additional_walks << endl;
    for(auto i=0; i<walks.size(); i++)
        cout << walks[i] + add_walks[i] << " ";
    cout << endl;
    return 0;
}

