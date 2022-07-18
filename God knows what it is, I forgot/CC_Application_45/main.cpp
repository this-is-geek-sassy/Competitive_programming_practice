/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on November 11, 2020, 9:57 PM
 */
/* https://codeforces.com/problemset/problem/1095/B */
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    /*for(int i=0; i<n; i++)
        cout << arr[i] << ' ';
    cout << endl;*/
    
    int max = arr[n-1], min = arr[0], sec_min = arr[1], sec_max = arr[n-2];
    if((max - sec_max) > (sec_min - min)){
        cout << (sec_max - min) << endl;
    }
    else{
        cout << (max - sec_min) << endl;
    }
    
    return 0;
}

