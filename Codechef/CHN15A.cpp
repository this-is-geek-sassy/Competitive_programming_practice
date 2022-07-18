// https://www.codechef.com/submit/CHN15A

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, counter = 0;
        vector<int> cvs;

        cin >> n >> k;
        cvs.resize(n);

        for (auto i=0; i<n; i++)
            cin >> cvs[i];
        
        for (auto i=0; i<n; i++) {
            cvs[i] += k;
            if(cvs[i] % 7 == 0)
                ++counter;
        }

        cout << counter << endl;
    }
    
}