/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on November 11, 2020, 8:05 PM
 */
/* https://codeforces.com/problemset/problem/746/B */
#include <bits/stdc++.h>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    int n, pos=0;
    cin >> n;
    string enc_word;
    cin >> enc_word;
    
    deque<char> orig_word;
    /*if(n%2)
        enc_word += ' ';*/
    if(n%2){
        while(pos < enc_word.size()){
            orig_word.push_back(enc_word[pos++]);        
            orig_word.push_front(enc_word[pos++]);
        }
    }
    else{
        while(pos < enc_word.size()){
            orig_word.push_front(enc_word[pos++]);
            orig_word.push_back(enc_word[pos++]);
        }
    }
    //orig_word.push_back(enc_word[pos++]);
    int i = 0;
    if(n%2){
        //orig_word.pop_front();
        i++;
    }
    for(i=i; i < orig_word.size(); i++)
        cout << orig_word[i];
    
    return 0;
}

