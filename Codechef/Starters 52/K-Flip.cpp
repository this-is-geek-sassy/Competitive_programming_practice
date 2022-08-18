// https://www.codechef.com/START52D/problems/KLIP

#include <iostream>
#include <cmath>
#include "string.h"
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

    // string *ptr = &s;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        char s[n];
        // cin >> s;
        for (auto i=0; i<n; i++)
            cin >> s[i];
        // string *ptr = &s;

        int upheal = floor((1.0)*(n + k - 1) / 2), downheal = ceil((1.0)*(n + k - 1) / 2);

        for (auto i = 1; i <= upheal; i++) {

                for (auto j=0; j<n; j++) {

                    if(s[j] == '0') {
                        flip( &s[0], j, j+k-1, n);
                        // i++;
                        break;
                    }
                }
        }
        for (auto i = upheal+1; i <= upheal+downheal; i++) {

            for (auto j=0; j<n; j++) {

                    if(s[j] == '1') {
                        flip( &s[0], j, j+k-1, n);
                        // i++;
                        break;
                    }
            }
        }

        for (auto i=0; i<n; i++)
            cout << s[i];
        cout << endl;
    }
    
}