/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 17, 2020, 9:53 AM
 */
/* https://codeforces.com/problemset/problem/44/A */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    string leaf_colour, leaf_species;
    cin >> n;
    //cout << leaf_species << " " << leaf_colour << endl;
    set<string> collection;
    for(int i=0; i<n; i++){
        cin >> leaf_species >> leaf_colour;
        string leaf = leaf_species + " " + leaf_colour;
        collection.insert(leaf);
    }
    cout << collection.size() << endl;
    return 0;
}

