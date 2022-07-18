/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: DELL
 *
 * Created on September 21, 2020, 9:49 PM
 */
/* URL: https://codeforces.com/problemset/problem/479/A */
//SOLVED

#include <cstdlib>
#include <iostream>
using namespace std;

/*
 * 
 */
int biggest(int a, int b, int c){
    if(a>=b && a>=c)
        return a;
    else if(b>=a && b>=c)
        return b;
    else
        return c;
    
}
int compare(int c[],int size){
    int biggest=0;
    for(int i=0; i<size; i++){
        if(c[i]>biggest)
            biggest = c[i];
    }
    return biggest;
}
int main(int argc, char** argv) {
    int a,b,c;
    cin >> a >> b >> c;
    int big = biggest(a,b,c);
    int op1 = a*b*c, op2, op3 = a+b+c;
    if(big==a)
    {
        op2 = a*(b+c);
        cout << biggest(op1,op2,op3) << endl;
    }
    else if(big==b){
        op2 = (a*b)+c;
        int op4 = a*(b+c);
        int op5 = a+(b*c);
        int op6 = (a+b)*c;
        int c[] = {op1,op2,op3,op4,op5,op6};
        cout << compare(c, 6) << endl;
    }
    else{
        op2 = c*(a+b);
        cout << biggest(op1,op2,op3) << endl;
    }
    return 0;
}

