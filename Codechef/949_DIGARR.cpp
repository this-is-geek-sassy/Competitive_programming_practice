// https://www.codechef.com/submit/DIGARR

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int d;
        cin >> d;
        
        string number, outcome = "No";
        cin >> number;

        for (auto i=0; i<number.length(); i++) {
            if(number[i] == '0' || number[i] == '5') {
                outcome = "Yes";  break;
            }
        }

        cout << outcome << endl;
    }
    
}