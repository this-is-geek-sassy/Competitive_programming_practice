// https://www.codechef.com/submit/RCBPLAY

#include <iostream>
using namespace std;

int main() {

    int t; 
    cin >> t;

    while (t--)
    {
        int x,y,z;
        cin >> x >> y >> z;
        
        if((x + 2*z) >= y)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }
    
}