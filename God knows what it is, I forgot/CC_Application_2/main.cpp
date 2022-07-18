/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on August 31, 2020, 9:50 AM
 */ 
/* website ur: https://codeforces.com/problemset/problem/231/A */
//SOLVED
#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n;
    int arr[n][3] /*= 
    {{1, 1, 0}, 
    {1, 1, 1}, 
    {0, 0, 1}}*/;
    
    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++)
            cin >> arr[i][j];
    }
    /*cout << "O/p:\n";
    for (int i=0; i<n; i++){
        for (int j=0; j<3; j++)
            cout << arr[i][j] << " ";
        cout << '\n';
    }*/
    int soln_imp = 0; //solution_implementation
    for(int i=0; i<n; i++)
    {
        int k = arr[i][0] + arr[i][1] + arr[i][2];
        if(k>=2)
            soln_imp++;
    }
    cout << soln_imp;
    return 0;
}

