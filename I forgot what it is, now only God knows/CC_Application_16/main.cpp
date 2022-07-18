/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 22, 2020, 7:41 PM
 */
/* URL: https://www.hackerearth.com/practice/data-structures/arrays/1-d/practice-problems/algorithm/can-you-solve-it/description/?layout=old */
//SOLVED
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

/*
 * 
 */
int find_max(int arr[], int n){
    int max=0;
    for(int i=0; i<n; i++){
        if(arr[i] > max)
            max = arr[i];
    }
    return max;
}
int find_min(int arr[], int n){
    int min=INFINITY;
    for(int i=0; i<n; i++){
        if(arr[i] < min)
            min = arr[i];
    }
    return min;
}
int main(int argc, char** argv) {
    int t;
    cin >>t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        int first_arr[n], sec_arr[n];
        for(int i=0; i<n; i++){
            first_arr[i] = arr[i]+i;
            sec_arr[i] = arr[i]-i;
        }
        int max1 = find_max(first_arr, n);
        int min1 = find_min(first_arr, n);
        int max2 = find_max(sec_arr, n);
        int min2 = find_min(sec_arr, n);
        int diff1 = abs(max1 - min1);
        int diff2 = abs(max2 - min2);
        cout << max(diff1, diff2) << endl;
    }
    return 0;
}

