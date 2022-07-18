#include <iostream>

using namespace std;

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        string dna;

        cin >> n >> dna;
        //getline(cin, dna);

        for (int i = 0; i < n; i++)
        {
            char n_base = dna[i];
            if (n_base == 'A')
            {
                n_base = 'T';
            }
            else if (n_base == 'T')
            {
                n_base = 'A';
            }
            else if(n_base == 'C') {
                n_base = 'G';
            }
            else
            {
                n_base = 'C';
            }
            dna[i] = n_base;
        }
        

        cout << dna << endl;
    }
}