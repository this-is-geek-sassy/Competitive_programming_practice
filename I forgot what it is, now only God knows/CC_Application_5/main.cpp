/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 1, 2020, 11:13 AM
 */
/* website url: https://codeforces.com/problemset/problem/855/A */
//SOLVED
#include <iostream>
#include <vector>
using namespace std;

/*
 * 
 */
string xsearch(vector<string> names, int n){
    int i = n-1;
    string last_name = names[n];
    while(i>=0){
        if(names[i]==last_name)
            return "YES";
        --i;
    }
    return "NO";
}

int main(int argc, char** argv) {
    int n;
    cin >> n;
    vector<string> names;
    for(int i=0; i<n; i++){
        string name;
        cin >> name;
        names.push_back(name);
        //cout << names[i] << endl;
        string j = xsearch(names, i);
        cout << j << endl;
    }
    /*cout << "Printing names" << endl;
    for(int i=0; i<n; i++){
        cout << names[i] << " ";
    }*/
    
    return 0;
}

