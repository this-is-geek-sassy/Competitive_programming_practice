// https://www.codechef.com/START52D/problems/MINSM

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        long long int arr[n];

        for (auto i = 0; i < n; i++)
            cin >> arr[i];

        sort(arr, arr+n);

        // for (auto i = 0; i < n; i++)
        //     cout << arr[i] << " ";
        // cout << endl;

        for (auto i = n-1; i > 0; i--)
        {
            long long int gcd = __gcd(arr[i], arr[i-1]);
            arr[i] = gcd;
            sort(arr, arr+n);
        }
        long long int sum = 0;
        for (auto i = 0; i < n; i++)
            sum += arr[i];
        
        cout << sum << endl;
    }
    
}