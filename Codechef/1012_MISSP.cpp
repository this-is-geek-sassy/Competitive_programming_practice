// https://www.codechef.com/submit/MISSP

#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        int arr[100001] = {0}, unpaired = -1;

        for (auto i=1; i<=n; i++) {
            int temp_input;
            cin >> temp_input;

            if(arr[temp_input])
                arr[temp_input] = 0;
            else {
                arr[temp_input] = 1;
                unpaired = temp_input;
            }
        }
        for (auto i = 0; i < 100001; i++)
        {
            if (arr[i]) {
                cout << i << endl;
                break;
            }
        }
        
    }
}