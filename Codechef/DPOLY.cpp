// https://www.codechef.com/submit/DPOLY

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    
    while (t--)
    {
        int n, max = 0;
        cin >> n;
        vector<int> coeffs;

        coeffs.resize(n);

        for(auto i=0; i<n; i++) {
            cin >> coeffs[i];

            if(coeffs[i])
                max = i;

        }

        // for(auto i=0; i<n; i++)
        //     cout << coeffs[i] << " ";

        cout << max << endl;

    }
    
}