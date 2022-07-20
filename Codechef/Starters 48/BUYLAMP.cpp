// https://www.codechef.com/START48D/problems/BUYLAMP

#include <iostream>

using namespace std; 

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k, x, y, cost;
        cin >> n >> k >> x >> y;

        if(x < y) {
            cost = k*x + (n-k)*x;

        } else {

            cost = k*x + (n-k)*y;
        }

        cout << cost << endl;
    }
}