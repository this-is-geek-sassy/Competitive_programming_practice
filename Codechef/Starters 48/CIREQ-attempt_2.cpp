// https://www.codechef.com/START48D/problems/CIREQ

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> array;  array.resize(n);

        for(auto i=0; i<n; i++) 
            cin >> array[i];

        vector<int> array2(n+1);

        sort(array.begin(), array.end());

        for(auto i=0; i<n; i++) {
            
        }
    }
    
}