/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 9, 2020, 7:23 PM
 */
/* codeforces problem: 914A */
//SOLVED

#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

/*
 * 
 */
int compare (const void * a, const void * b)
{
  return ( *(int*)b - *(int*)a );
}
int main(int argc, char** argv) {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    qsort(arr, n, sizeof(int), compare);
    for(int a : arr){
        float b = sqrt(a);
        //cout << a << " sqaure root " << b <<endl;
        
        if(ceil(b) != floor(b)){
            cout << a << endl;
            break;
        }
    }
    return 0;
}

