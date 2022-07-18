// https://www.codechef.com/submit/DNASTORAGE

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<char> dna;
        dna.resize(n);

        for (auto i=0; i<n; i++)
            cin >> dna[i];

        string dna_sequence = "";

        for (auto i=0; i<n; i+=2) {

            if (dna[i]=='0' && dna[i+1]=='0')
                dna_sequence.push_back('A');
            else if(dna[i]=='0' && dna[i+1]=='1')
                dna_sequence.push_back('T');
            else if(dna[i]=='1' && dna[i+1]=='0')
                dna_sequence.push_back('C');
            else if(dna[i]=='1' && dna[i+1]=='1')
                dna_sequence.push_back('G');
        }

        cout << dna_sequence << endl;
    }
    
}