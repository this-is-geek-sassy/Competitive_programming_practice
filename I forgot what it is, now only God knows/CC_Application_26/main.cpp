/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on October 14, 2020, 10:03 PM
 */

#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
void showdq(deque <int> g) 
{ 
    deque <int> :: iterator it; 
    for (it = g.begin(); it != g.end(); ++it) 
        cout << *it << " "; 
    cout << '\n'; 
} 
int collects(deque<int>& d, int points){
    deque<int>::iterator itb = d.begin();
    deque<int>::iterator ite = d.end();
    if(*itb >= *ite){
        points += *itb;
        d.pop_front();
    }
    else if(*itb < *ite){
        points += *ite;
        d.pop_back();
    }
    return points;
}
int main(int argc, char** argv) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    deque<int> cards(n);
    for(int i=0; i<n; i++){
        //int t;
        cin >> cards[i];
        //cards.push_back(t);
    }
    int card_collected = 0, sereja=0, dimma=0;
    while(card_collected != n){
        sereja = collects(cards, sereja);
        card_collected++;
        showdq(cards);
        if(card_collected==n)
            break;
        dimma = collects(cards, dimma);
        card_collected++;
        showdq(cards);
    }
    cout << sereja << " " << dimma << endl;
    
    showdq(cards);
    return 0;
}

