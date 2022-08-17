// https://www.codechef.com/START52D/problems/ACTEMP

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;

        if (b >= a && b >= c)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
}