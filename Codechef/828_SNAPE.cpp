// https://www.codechef.com/submit/SNAPE

#include <iostream>
#include <cmath>
#include "stdio.h"
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--) {

        int b, ls;
        cin >> b >> ls;
        double rs_max, rs_min;

        rs_max = sqrt((b*b) + (ls*ls));
        rs_min = sqrt((ls*ls) - (b*b));

        //cout << rs_min << " " << rs_max << endl;
        printf("%lf %lf \n", rs_min, rs_max);
    }
}