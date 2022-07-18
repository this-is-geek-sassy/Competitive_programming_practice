// https://www.codechef.com/submit/INCREAR

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        long long int x, y;
        unsigned long long int no_ops = 0;
        cin >> x >> y;

        
            if (y > x) {
                no_ops = (y - x);
            } else if (x > y) {

                if ((x - y) % 2) {
                    no_ops = 0.5 * (x - y) + 1;
                    no_ops++;
                }
                else 
                    no_ops = 0.5 * (x - y);
            } else {
                no_ops = 0;
            }
            cout << no_ops << endl;
        
    }
    
}