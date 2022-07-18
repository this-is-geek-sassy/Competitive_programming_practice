/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 16, 2020, 11:38 AM
 */
/* Subset max problem on codeforces */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int findmax(vector<int>& s){
    int minel=-1;
    for(auto x: s){
        if(x > minel)
            minel = x;
    }
    return minel;
}
int first_occ_of_one(vector<int>& occourence){
    for(int i=0; i< occourence.size(); i++){
        if(occourence[i] == 1){
            return i;
        }
    }
    return -1;
}
int first_occ_of_zer(vector<int>& occourence){
    for(int i=0; i< occourence.size(); i++){
        if(occourence[i] == 0){
            return i;
        }
    }
    return -1;
}
int main(int argc, char** argv) {
    short int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> s(n);
        for(int i=0; i<n; i++)
            cin >> s[i];
        
        int maxel = findmax(s);
        vector<int> occourence(maxel+2, 0);
        for(int i=0; i<n; i++){
            occourence[s[i]]++;
        }
        /*for(int i=0; i<occourence.size(); i++)
            cout << occourence[i] << " ";*/
        
        int mex, zero_occouring_at = first_occ_of_zer(occourence);
        int one_occouring_at = first_occ_of_one(occourence);
        if(one_occouring_at < 0)
            mex = zero_occouring_at*2;
        else if(zero_occouring_at < one_occouring_at)
            mex = zero_occouring_at*2;
        else
            mex = one_occouring_at + zero_occouring_at;
        cout << mex << endl;
    }
    return 0;
}

