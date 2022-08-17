// https://www.codechef.com/START52D/problems/WATESTCASES

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int test_cases[2][n];

        for (auto i = 0; i < n; i++)
        {
            cin >> test_cases[0][i];
        }

        string v;
        cin >> v;
        // cout << v;

        for (auto i = 0; i < v.length(); i++)
        {
            test_cases[1][i] = v[i] - '0';
        }
        
        // for (auto i = 0; i < n; i++)
        //     cout << test_cases[0][i] << "  ";
        // cout << endl;

        // for (auto i = 0; i < n; i++)
        //     cout << test_cases[1][i] << "  ";

        int smallest_size = 101;
        for (auto i = 0; i < n; i++) {

            if (test_cases[1][i] == 0 && test_cases[0][i] < smallest_size) {
                smallest_size = test_cases[0][i];
            }
        }

        cout << smallest_size << endl;

    }
    
}