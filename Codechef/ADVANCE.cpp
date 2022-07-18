// https://www.codechef.com/submit/ADVANCE

#include <iostream>
using namespace std;

int main() {

    unsigned int t;
    cin >> t;

    while (t--)
    {
        int x, y;
        cin >> x >> y;

        if ((y >= x) && (y <= x+200))
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
}