// https://www.codechef.com/submit/FIRSTANDLAST?tab=statement 

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, max=0;
        cin >> n;

        vector<unsigned int> array;
        array.resize(n);

        // cin >> array[0];
        for (auto i=0; i<n; i++) {
            cin >> array[i];
        }

        for (auto i=0; i<n; i++) {

            int k = (i + 1) % n;
            
            if ((array[i] + array[k]) > (array[max] + array[max + 1])) 
                max = i;
        }

        int k = (max + 1) % n;
        cout << array[max] + array[k] << endl;
    }
}