// https://www.codechef.com/START48D/problems/GRIDBL

#include <iostream>

using namespace std; 

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, m, unit_tiles;
        cin >> n >> m;

        if ( (n%2 == 0) && (m%2 == 0) ) {
            unit_tiles = 0;
            cout << unit_tiles << endl;
            continue;
        }
        else if (n%2 == 0) {
            unit_tiles = n*m - n*(m - 1);
            cout << unit_tiles << endl;
            continue;
        }
        else if (m%2 == 0) {
            unit_tiles = n*m - (n - 1)*m;
            cout << unit_tiles << endl;
            continue;
        }
        else {
            unit_tiles = n*m - (n - 1)*(m - 1);
            cout << unit_tiles << endl;
            continue;
        }
        
    }
}