/*Problem statement

Programming languages have some conditional / decision-making statements that execute when some specific condition is fulfilled.

Switch-case is one of the ways to implement them.
In a menu-driven program, the user is given a set of choices of things to do (the menu) and then is asked to select a menu item.

There are 2 choices in the menu:

Choice 1 is to find the area of a circle having radius 'r'.

Choice 2 is to find the area of a rectangle having dimensions 'l' and 'b'.



You are given the choice 'ch' and an array 'a'.



If ‘ch’ is 1, ‘a’ contains a single number ‘r’. If ‘ch’ is 2, ‘a’ contains 2 numbers, ‘l’ and ‘b’.



Consider the choice and print the appropriate area.

Example :
Input: ‘ch’ = 2 and ‘a’ = [3, 2]

Output: area = 6

Explanation: Since the choice ‘ch’ is 2, we have to print the area of the rectangle having ‘l’ = 3 and ‘b’ = 2, which is 6.*/


#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>

using namespace std;

double areaSwitchCase(int ch, vector<double> a) {
    switch (ch) {
        case 1: {
            double r = a[0];
            return M_PI * r * r;  // Area of the circle
        }
        case 2: {
            double l = a[0], b = a[1];
            return l * b;  // Area of the rectangle
        }
        default:
            return 0;  // In case of an invalid choice
    }
}

int main() {
    int tt;
    cin >> tt;  // Number of test cases
    while (tt--) {
        int ch;
        cin >> ch;  // Choice of operation (1 for circle, 2 for rectangle)
        
        vector<double> a;  // Vector to store dimensions
        
        // Input for circle or rectangle based on the choice
        if (ch == 1) {
            double r;
            cin >> r;  // Read radius
            a.push_back(r);  // Add radius to the vector
        } else if (ch == 2) {
            double l, b;
            cin >> l >> b;  // Read length and breadth
            a.push_back(l);  // Add length to the vector
            a.push_back(b);  // Add breadth to the vector
        }
        
        // Calculate and output the area based on the choice
        cout << fixed << setprecision(6) << areaSwitchCase(ch, a) << endl;
    }
    return 0;
}
