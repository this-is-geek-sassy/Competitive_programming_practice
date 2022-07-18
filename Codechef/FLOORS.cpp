#include <iostream>
using namespace std;

int main () {

    int t; // no of testcases
    cin >> t;
    while (t--)
    {
        int x_loc, y_loc, x_floor, y_floor, x_room, y_room;
        cin >> x_loc >> y_loc;

        x_floor = (x_loc/10) + 1;
        x_room = x_loc % 10;
        if (x_room == 0)
        {
            x_floor--;
            x_room = 10;
        }

        y_floor = (y_loc/10) + 1;
        y_room = y_loc % 10;
        if (y_room == 0)
        {
            y_floor--;
            y_room = 10;
        }
        
        cout << abs(x_floor - y_floor) << endl;
        
    }
    

    return 0;
}