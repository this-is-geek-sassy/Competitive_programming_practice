// https://www.codechef.com/submit/HIGHSCORE

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n, max=0;
        cin >> n;

        vector<int> numbers;
        numbers.resize(4);

        cin >> numbers[0] >> numbers[1] >> numbers[2] >> numbers[3];

        for (auto i=0; i<4; i++) {
            if (numbers[i] > numbers[max])
                max = i;
        }

        cout << numbers[max] << endl;
    }
    
}