// https://www.codechef.com/submit/AIRLINE

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, e;
        cin >> a >> b >> c >> d >> e;

        if ( ((a+b) <= d) && (c <= e) )
            cout << "yes" << endl;
        else if ( ((b+c) <= d) && (a <= e))
            cout << "yes" << endl;
        else if ( ((a+c) <= d) && (b <= e))
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
}