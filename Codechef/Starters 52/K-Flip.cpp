// https://www.codechef.com/START52D/problems/KLIP

#include <iostream>
#include <cmath>
using namespace std;

string s;

void flip(int i, int j) {

    for (auto k=i; k<=j; k++) {
        if(s[k])
            s[k] = '0';
        else
            s[k] = '1';
    }
}

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        cin >> s;

        int upheal = floor((n + k - 1) / 2), downheal = ceil((n + k - 1) / 2);

        for (auto i=1; i<=(n-k+1); i++) {

            for (auto j=0; j<s.length(); j++) {

                if ()

                if(s[j] == 0) {
                    flip(j, j+k-1);
                    i++;
                }
            }
            
        }
    }
    
}