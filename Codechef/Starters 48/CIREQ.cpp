// https://www.codechef.com/START48D/problems/CIREQ

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool is_all_zero(vector<int> array) {

    bool all_are_zero = true;

    for(auto i=0; i<array.size(); i++) {
        if (array[i])
        {
            all_are_zero = false;
            break;
        }
    }

    return all_are_zero;
}

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, no_of_array_reqd=0;
        cin >> n;

        vector<int> array;  array.resize(n);

        for(auto i=0; i<n; i++)
            cin >> array[i];

        sort(array.begin(), array.end());

        // for(auto i=0; i<n; i++)
        //     cout << array[i] << "  ";
        // cout << endl;

        while (!is_all_zero(array))
        {
            // int last_no_picked = -1;
            vector<int> array2;
            array2.resize(n+1);
            array2[1] = -1;
            int j = 1;

            for(auto i=0; i<n; i++) {

                if ( (array[i] != 0) && (array[i] >= j) ) {

                    array2[j] = array[i];
                    ++j;
                    array[i] = 0;
                } else if ( (array[i] != 0) && (array[i] < j) ) {
                    break;
                }
            }
            if (array2[1] != -1)
                no_of_array_reqd++;
        }

        cout << no_of_array_reqd << endl;
        
    }
    
}