// https://www.codechef.com/submit/BOMBTHEBASE

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, x, first_house=0;
        cin >> n >> x;

        vector<int> houses;
        houses.resize(n+1);  houses[0] = 0;

        for (auto i=1; i<houses.size(); i++)
            cin >> houses[i];

        for (auto i=houses.size()-1; i>0; i--) {

            if (houses[i] < x) {
                first_house = i;
                break;
            }
        }

        cout << first_house << endl;

        // for (auto i=1; i<houses.size(); i++)
        //     cout << houses[i] << '\t';
    }
}