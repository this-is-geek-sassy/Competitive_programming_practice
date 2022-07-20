// https://www.codechef.com/submit/CIELRCPT

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int p;
        cin >> p;

        int menu[12];
        for (auto i=0; i<12; i++)
            menu[i] = pow(2, i);
        
        int start_idx = floor(log2(p)), item_count = 0;

        if (start_idx > 11)
            start_idx = 11;
        
        for (auto i=start_idx; i>=0; i--) {
            item_count += p/menu[i];

            p = p%menu[i];
            if (!p)
                break;
        }

        cout << item_count << endl;

        // for (auto i=0; i<12; i++)
        //     cout << menu[i] << ',' << i << '\t';
    }
    
}