// https://www.codechef.com/submit/MAKEPAL2

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, ones=0, zeros=0;
        string number, new_string_ones = "", new_string_zeros = "";

        cin >> n >> number;

        for (auto i=0; i<n; i++) {
            if (number[i] == '1') {
                ++ones;
                new_string_ones.push_back(number[i]);
            }
            else {
                ++zeros;
                new_string_zeros.push_back(number[i]);
            }
        }

        if (ones >= zeros)
        {
            cout << new_string_ones << endl;
        } else {
            cout << new_string_zeros << endl;
        }
        // cout << n << " " << number << endl;
    }
}