/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on November 12, 2020, 10:11 AM
 */
/* https://codeforces.com/problemset/problem/1047/B */
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    vector<vector<unsigned long long int>> points(n);
    for(int i=0; i<n; i++)
    {
        long long int temp1, temp2;
        cin >> temp1 >> temp2;
        points[i].push_back(temp1);
        points[i].push_back(temp2);
        points[i].push_back(temp1*temp1 + temp2*temp2);
    }
    /*cout << "points are: \n";
    for(int i=0; i<n; i++){
        cout << points[i][0] << " " << points[i][1] << " " << points[i][2] << endl;
    }*/
    int max_dist = 0;
    for(int i=1; i<n; i++){
        if(points[i][2] > points[max_dist][2])
            max_dist = i;
    }
    cout << points[max_dist][0] + points[max_dist][1] << endl;
    
    return 0;
}

