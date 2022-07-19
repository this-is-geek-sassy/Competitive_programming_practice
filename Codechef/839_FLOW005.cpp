// https://www.codechef.com/submit/FLOW005

#include <iostream>
using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n, no_of_notes, net_no_of_notes=0;
        cin >> n;

        int notes[6] = {100, 50, 10, 5, 2, 1};

        for (auto i=0; i<6; i++) {
            no_of_notes = n / notes[i];
            net_no_of_notes += no_of_notes;

            n = n % notes[i];
            if (!n)
                break;
        }

        cout << net_no_of_notes << endl;
    }
}