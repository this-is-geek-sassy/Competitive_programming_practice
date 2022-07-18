/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 17, 2020, 4:36 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n;
    cin >> n ;
    int x_comp = 0, y_comp = 0, z_comp = 0;
    for(int i=0; i<n; i++){
        int x, y, z;
        cin >> x >> y >> z;
        x_comp += x; y_comp += y; z_comp += z;
    }
    if(x_comp==0 && y_comp==0 && z_comp==0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    return 0;
}

