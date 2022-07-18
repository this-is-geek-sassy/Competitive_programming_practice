// https://www.codechef.com/submit/COMPRESSVD

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, frames_eliminated = 0;
        cin >> n;

        vector<int> frames;
        frames.resize(n+1);  frames[0] = 0;

        for (auto i=1; i<=n; i++)
            cin >> frames[i];
        
        for (auto i=1; i<n; i++) {
            if (frames[i] == frames[i-1] || frames[i] == frames[i+1]) {
                frames_eliminated++;
                frames[i] = 0;
            }
        }
        cout << n-frames_eliminated << endl;
    }
    
}