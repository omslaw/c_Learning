/*
 * WhoWon.cpp
 * ----------
 *  This is an excercise from the 01-intro
 *  handout from first classs. 
 */

#include <iostream>
using namespace std;

int main() {
    int steelers;
    int browns;
    cout << "Steelers: How many points did they score? ";
    cin >> steelers;
    cout << "Browns: Did these bitches manage to put any points on the board? If so how much? ";
    cin >> browns;

    if ( steelers > browns) {
        cout << "That's right bitches" << endl;
    } else if (steelers == browns) {
        cout << "Well that sucks a damn tie!!" << endl;
    } else {
        cout << "Must be a dark day when the Browns beat the Steelers." << endl;
    }
    return 0;
}

