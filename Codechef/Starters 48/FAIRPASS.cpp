// https://www.codechef.com/START48D/problems/FAIRPASS

#include <iostream>

using namespace std; 

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k;
        cin >> n >> k;

        if (k > n)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
}