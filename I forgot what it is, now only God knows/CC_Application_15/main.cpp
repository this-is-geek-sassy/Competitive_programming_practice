/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 22, 2020, 12:34 PM
 */

#include <cstdlib>
#include <iostream>
#include <array>
using namespace std;

/*
 * 
 */
int bea_segs = 0;
void is_bea_seg(int arr[], int size, int index){
    for(int i=index; i<size; i++){
        
    }
}
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin >> arr[i];
        for(int i=0; i<n-2; i++){
            is_bea_seg(arr,n,i);
        }
    }
    return 0;
}

