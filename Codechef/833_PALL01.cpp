// https://www.codechef.com/submit/PALL01

#include <iostream>
// #include <string>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        string number;
        cin >> number;

        bool is_polynomial = true;

        int i = 0, j = number.length() - 1;

        while (i < j)
        {
            if (number[i] != number[j]) {
                is_polynomial = false;
                break;
            }
            i++; j--;
        }
        if (is_polynomial)
            cout << "wins" << endl;
        else
            cout << "loses" << endl;

        // cout << number << endl;
    }
    
}