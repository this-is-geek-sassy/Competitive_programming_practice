/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 11, 2020, 12:58 AM
 */
/* https://codeforces.com/problemset/problem/822/B */
//SASWATA MISHRA from Kolkata, India

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n, m;
    string s, t;
    scanf("%d%d", &n, &m);
    cin >> s;
    cin >> t;
    //cout << s << '\t' << t;
    vector<int> ans;
    vector<int> final_ans;
    for(int i=0; i<n; i++)
        final_ans.push_back(i);
    
    for(int i=0; i<(m-n+1); i++){
        int a = i;
        ans.clear();
        for(int j=0; j<s.length(); j++){
            if(s[j] != t[a])
                ans.push_back(j+1);
            a++;
        }
        if(ans.size() <= final_ans.size() ){
            final_ans = ans;
        }
    }
    int sz = final_ans.size();
    cout << sz << endl;
    for ( int j = 0; j < sz; j++ )
        cout << final_ans[j] << " ";
    cout << '\n';
    return 0;
}

