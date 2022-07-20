// https://www.codechef.com/submit/JMARKET

#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main () {

    int t;
    cin >> t;

    while (t--)
    {
        int x, prices[3];
        cin >> x >> prices[0] >> prices[1] >> prices[2];

        sort(prices, prices+3);

        cout << (x - 1)*prices[0] + prices[1] << endl;
    }
    
}