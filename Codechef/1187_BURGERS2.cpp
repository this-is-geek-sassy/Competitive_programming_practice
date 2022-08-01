// https://www.codechef.com/submit/BURGERS2

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        unsigned int x, y;

        unsigned long long int n, r;

        cin >> x >> y >> n >> r;

        if (x*n > r)
            cout << "-1" << endl;
        else if (y*n <= r)
            cout << '0' << " " << n << endl;
        else {

            unsigned long long int k = ceil((double)(y*n - r) / (y - x));

            cout << k << " " << n-k << endl;
        }
    }
}