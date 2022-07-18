// https://www.codechef.com/submit/CHEFAPPS

#include <iostream>

using namespace std;

int main() {

    int t;  cin >> t;

    while (t--)
    {
        int s, x, y, z, no_of_apps;
        cin >> s >> x >> y >> z;

        int a = min(x,y), b = max(x,y);

        if((s - x - y) >= z) 
            z = 0;
        else if(s - b >= z || s - a >= z)
            z = 1;
        else 
            z = 2;
        
        cout << z << endl;
    }
    
}