// https://www.codechef.com/submit/CHEFARRP?tab=statement

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--)
    {
        int n, counter=0;
        cin >> n;

        vector<int> a;
        a.resize(n);

        for(auto i=0; i<n; i++)
            cin >> a[i];

        /*for(auto i: a)
            cout << i << " ";
        cout << endl;*/

        for (auto i=0; i<n; i++) {

            int sum=0, product=1;
            for (auto j=i; j<n; j++) {
                sum = sum + a[j];
                product = product * a[j];

                if (sum == product)
                    counter++;
            }
        }

        cout << counter << endl;
    }
    
}