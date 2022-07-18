/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 23, 2020, 5:05 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int tell_max(int arr[], int n){
    int max = 0;
    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[max])
            max = i;
    }
    return arr[max];
}
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> students(n);
        int count[n+1] = {};
        for(auto i=0; i<n; i++){
            cin >> students[i];
            count[students[i]]++;
        }
        /*for(auto i=0; i<n+1; i++)
            cout << count[i] << " ";
        cout << endl;*/
        int max_count = tell_max(count, n+1);
        //cout << max_count << endl;
        if(n - max_count >= max_count)
            cout << max_count << endl;
        else if(n - max_count + 1 >= max_count-1)
            cout << max_count-1 << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}

