/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 16, 2020, 8:19 PM
 */
/* https://codeforces.com/problemset/problem/1359/B */
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int t;
    cin >> t;
    while(t--){
        int n, m, x, y;  //x:=price of 1X1 tile   y:=price of 1X2 tile
        cin >> n >> m >> x >> y;
        vector<vector<char>> th(n, vector<char>(m));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cin >> th[i][j];
        }
        /*for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
                cout << th[i][j] << " ";
            cout << endl;
        }*/
        int cost=0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++)
            {
                if((j<m-1) && (th[i][j] == '.' &&  th[i][j+1] == '.')){
                    cost += min(2*x, y);
                    //(min(y, 2*x))? j++ : j+=0;
                    j++;
                }
                else if(th[i][j] == '.')
                    cost += x;
            }
        }
        cout << cost << endl;
    }
    return 0;
}

