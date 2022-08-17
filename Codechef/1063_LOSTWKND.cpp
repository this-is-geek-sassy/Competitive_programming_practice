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

        if(a>120 && a<=168)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    
}