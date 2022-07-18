/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 27, 2020, 10:02 PM
 */
/* https://codeforces.com/problemset/problem/1433/C */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        long long int n, max_at = 0;
        cin >> n;
        vector<long long int> aq(n);
        vector<long long int> max_positions;
        for(int i=0; i<n; i++){
            cin >> aq[i];
            if(aq[i] > aq[max_at])
            {
                max_at = i;
                max_positions.clear();
                max_positions.push_back(max_at);
            }
            else if(aq[i] == aq[max_at])
                max_positions.push_back(i);
        }
        /*for(auto i=0; i<max_positions.size(); i++)
            cout << max_positions[i] << " ";
        cout << endl;*/
        if(n == max_positions.size())
            cout << -1 << endl;
        else{
            for(auto i=0; i<max_positions.size(); i++){
                if(aq[max_positions[i]+1] < aq[max_positions[i]] || 
                        aq[max_positions[i]-1] < aq[max_positions[i]]){
                    cout << max_positions[i]+1 << endl;  break;  }
            }
        }
    }
    return 0;
}

