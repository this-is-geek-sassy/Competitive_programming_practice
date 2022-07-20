// https://www.codechef.com/START48D/problems/MAKEPAL2

#include <iostream>
#include <string>
#include <cmath>
using namespace std; 

bool is_palindrome (string number) {

    int i=0, len = number.length();

    while (i < (len/2))
    {
        if (number[i] != number[len-i-1])
            return false;

        i++;
    }

    return true;
}

int main() {

    int t;
    cin >> t;

    while(t--) {

        int n;
        cin >> n;

        string number, modified_number;

        cin >> number;

        int limit = floor(n*1.0/2);
        modified_number = number;

        int front = 0, back = modified_number.length() - 1;

        for (auto counter=1; counter <= limit; counter++) {

            if(is_palindrome(modified_number)) {
                // cout << modified_number << endl;
                break;
            }
            else if (modified_number[front] == modified_number[back]) {
                front ++;  back--;
            } 
            else {
                
                if (modified_number[front] != modified_number[front+1]) {
                    modified_number = modified_number.substr(0, front) + modified_number.substr((front+1), (modified_number.length() - (front + 1)));

                    back--;
                }
                else if (modified_number[back] != modified_number[back-1]) {
                    modified_number = modified_number.substr(0, back) + modified_number.substr((back+1), (modified_number.length() - (back + 1)));

                    back--;
                }
            }
        }

        cout << modified_number << endl;

        // cout << number << endl;
    }
}