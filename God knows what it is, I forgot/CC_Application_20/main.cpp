/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 5, 2020, 12:38 PM
 */
/* https://codeforces.com/problemset/problem/1353/B */
//SOLVED
#include <bits/stdc++.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        int a[n], b[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        for(int i=0; i<n; i++){
            cin >> b[i];
        }
        int i=0, j=n-1;
        sort(a, a+n);
        sort(b, b+n);
        
        while(k && (i<n && j>=0)){
            if(a[i] < b[j]){
                swap(a[i], b[j]);
                k--; i++; j--;
            }
            else
                break;
        }
        /*for(int i=0; i<n; i++){
            cout << a[i] << " ";
        }*/
        valarray<int> v(a, n);
        cout << v.sum() << endl;
    }
    return 0;
}

