// https://www.codechef.com/submit/EITA

#include <iostream>
#include "stdio.h"
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        int work1, work2;
        short d, x, y, z;
        cin >> d >> x >> y >> z;

        work1 = 7*x;
        work2 = y*d + z*(7-d);

        if(work1 >= work2)
            cout << work1 << endl;
        else
            cout << work2 << endl;
    }
    
}