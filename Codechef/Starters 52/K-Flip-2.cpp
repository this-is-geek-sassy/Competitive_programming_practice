// https://www.codechef.com/START52D/problems/KLIP

// this is a fresh attempt inspired by drawbacks of the previous attempt ./K-Flip.cpp (3 broad attempts)

#include <iostream>
#include <cmath>
#include "string.h"
#include "stdio.h"
using namespace std;

void flip(char *s, int i, int j, int size) {

    if(j >= size)
        return;

    // string m = "";
    for (auto k=i; k<=j; k++) {
        if( s[k] == '1' )
            s[k] = '0';
        else
            s[k] = '1';
    }

    // s = s.substr(0, i) + m + s.substr(j+1);
}

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        char s[n+1];
        // s[n] = '\0';
        // cin >> s;
        // for (auto i=0; i<=n; i++) {
        //     // cin >> s[i];
        //     scanf("%c", &s[i]);
        // }
        scanf("%s", s);
        // printf("%s \n", s);
        // cin.getline(s, n);
        // string *ptr = &s;

        // just for the sake of calculating, may be of no use:
        // int upheal = floor((1.0)*(n + k - 1) / 2), downheal = ceil((1.0)*(n + k - 1) / 2);

        int count = 0;
        for (auto j=0; (j<n) && (count <= (n+k-1)); j++) {

            if (s[j] == '1') {

                flip( &s[0], j, j+k-1, n);
                count++;
                // break;
            }
        }

        printf("%s \n", s);
        // cout << endl;
    }
    
}