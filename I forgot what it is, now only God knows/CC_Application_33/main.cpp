/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 17, 2020, 10:49 AM
 */
/* https://codeforces.com/problemset/problem/1/A */
//Partially solved
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int tiles(long long int** th, long long int a, int b, long long int tile_size){
    if(a<=0 || b<=0)
        return 0;
    if(th[a][b] != 0)
        return 0;
    long long int cost = 1 + tiles(th, a-tile_size, b, tile_size) + tiles(th, a, b-tile_size, tile_size);
    th[a][b] = cost;
    return cost;
}
int main(int argc, char** argv) {
    long long int n, m, a;
    cin >> n >> m >> a;
    long long int** th = new long long int*[n+1];
    for(auto i=0; i<n+1; i++)
        th[i] = (long long int*)calloc((m+1), sizeof(long long int));
    /*for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++)
            th[i][j] = 0;
    }*/
    /*for(int i=0; i<n+1; i++){
        for(int j=0; j<m+1; j++)
            cout << th[i][j] << " ";
        cout << endl;
    }*/
    //th[n][m] = 8;
    long long int total_cost = 0;
    total_cost = tiles(th, n, m, a);
    cout << total_cost << endl;
    return 0;
}

