// https://www.codechef.com/submit/DOLL

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, k, counter=0;
        cin >> n >> k;

        vector<int> players;
        players.resize(n);  players[0] = k;

        for (auto i = 1; i <= n; i++){
            cin >> players[i];

            if (players[i] > k)
            {
                ++counter;
            }
        }
        cout << counter << endl;
        
    }
    
}