// https://www.codechef.com/START48D/problems/FILLCANDIES

#include <iostream>
#include <cmath>
using namespace std; 

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, k, m;
        cin >> n >> k >> m;

        int no_of_bags = ceil((1.0*n)/(k*m));

        cout << no_of_bags << endl;
    }
}