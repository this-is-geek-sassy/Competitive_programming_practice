// https://www.codechef.com/submit/LOSTWKND

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c, d, e, p;
        cin >> a >> b >> c >> d >> e >> p;

        a = (a+b+c+d+e) * p;

        if(a>125 && a<=175)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
}