/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 3, 2020, 12:44 PM
 */
/* website url: https://codeforces.com/problemset/problem/1399/C */

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int t;  //testcases
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int w[n], sum = 0;
        for(int i=0; i<n; i++){
            cin >> w[i];
            sum += w[i];
        }
        double _avg = (sum*1.0)/n;
        //cout << "Average =  " << avg << '\n';
        int avg = floor(_avg);
        int s = 2*avg;
        int before_s = s-1;
        int after_s = s+1;
        sort(w, w+n);
        int i = 0, j = n - 1;
        while(i<=j){
            if 
        }
        
    }
    return 0;
}

