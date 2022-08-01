// https://www.codechef.com/submit/VALIDMIN

#include <iostream>
#include <algorithm>
using namespace std; 

int main() {

    int t;
    cin >> t;

    while(t--) {

        int a[3];
        cin >> a[0] >> a[1] >> a[2];

        sort(a, a+3);

        if (a[0] == a[1] && a[1] <= a[2])
            cout << "yes" << endl;
        else 
            cout << "no" << endl;
    }
}