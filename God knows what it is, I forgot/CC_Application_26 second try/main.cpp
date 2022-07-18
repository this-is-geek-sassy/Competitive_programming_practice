/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 15, 2020, 10:50 AM
 */
/* https://codeforces.com/problemset/problem/381/A */
/*SASWATA MISHRA from Kolkata, India*/
//SOLVED
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    vector<int> cards(n);
    for(int i=0; i<n; i++){
        cin >> cards[i];
    }
    int card_start=0, card_end=n-1, sreja = 0, dima = 0;
    
    while(card_start <= card_end){
        if(cards[card_start] >= cards[card_end]){
            sreja += cards[card_start];
            card_start++;
        }
        else if(cards[card_start] < cards[card_end]){
            sreja += cards[card_end];
            card_end--;
        }
        
        if(card_start > card_end)
            break;
        if(cards[card_start] >= cards[card_end]){
            dima += cards[card_start];
            card_start++;
        }
        else if(cards[card_start] < cards[card_end]){
            dima += cards[card_end];
            card_end--;
        }
        
    }
    cout << sreja << " " << dima << endl;
    
    return 0;
}

