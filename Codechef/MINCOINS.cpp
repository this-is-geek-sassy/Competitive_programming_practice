// https://www.codechef.com/submit/MINCOINS?tab=statement

#include <iostream>

using namespace std;

int main() {

    int t;   cin >> t;

    while (t--)
    {
        int x, coin_count=0;
        cin >> x;

        if(x == 0) {
            cout << 0 << endl;
        }
        else if (x%5) {
            cout << -1 << endl;
            continue;
        }
        else if (x/10 != 0) {
            coin_count = x/10;
            x %= 10;
        }
        if(x == 5)
            coin_count++;

        cout << coin_count << endl;
    }
    
}