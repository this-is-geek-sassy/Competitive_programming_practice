// https://www.codechef.com/submit/GENE01

#include<iostream>
using namespace std;

int main() {

    
        char father, mother;
        cin >> father >> mother;

        if(father=='R' || mother=='R')
            cout << "R" << endl;
        else if (father=='B' || mother=='B')
            cout << "B" << endl;
        else if (father=='G' || mother=='G')
            cout << "G" << endl;
    
    
}