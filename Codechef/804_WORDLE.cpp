// https://www.codechef.com/submit/WORDLE

#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        string s, t, m;
        // getline(cin, s);
        // getline(cin, t);

        cin >> s >> t;

        for (auto i = 0; i < s.length(); i++)
        {
            if (s[i] == t[i])
            {
                m.push_back('G');
            } else 
                m.push_back('B');
            
        }
        
        cout << m << endl;
        // cout << s << " " << t << endl;
    }
    
}