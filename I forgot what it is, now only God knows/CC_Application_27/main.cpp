/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 15, 2020, 1:20 PM
 */
/* https://codeforces.com/problemset/problem/1206/B */
//SASWATA MISHRA from Kolkata, India

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
/*template <class T>
int no_of_neg_ones(vector<T>& v){
    int count = 0;
    for(auto a: v){
        if(a < 0)
            count++;
    }
    return count;
}*/
int main(int argc, char** argv) {
    int n;
    cin >> n;
    vector<long long int> v(n);
    for(int i=0; i<n; i++)
        cin >> v[i];
    long long int sum = 0;
    bool neg = false;
    for(int i=0; i<n; i++){
        if(v[i] == -1){
            if(neg == false)
                neg = true;
            else if(neg == true)
                neg = false;
        }
        else if(v[i] < -1){
            if(neg == false)
                neg = true;
            else if(neg == true)
                neg = false;
            long long int diff = abs(v[i] - (-1));
            sum += diff;
        }
        else if(v[i] > 1){
            long long int diff = abs(v[i] - 1);
            sum += diff;
        }
        else if(v[i] == 0){
            if(neg == true)
                neg = false;
            sum++;
        }
    }
    if(neg)
        sum += 2;
    cout << sum << endl;
    return 0;
}

