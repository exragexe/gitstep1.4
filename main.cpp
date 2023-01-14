

#include <iostream>
#include <math.h>

using namespace std;
int x,y, switch_on;

void Exercise() {
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    cout << "Select an action: " << endl<< endl;
    cout << "0 - Addition     2 - Multiplication" << endl;
    cout << "1 - Subtraction  3 - Division " << endl;
    cin >> switch_on;

    switch (switch_on)
    {
        case 0: {
            cout << x + y;
        }break;
        case 1: {
            cout << x - y;
        }break;
        case 2: {
            cout << x * y;
        }break;
        case 3: {
            cout << x / y;
        }break;

    }

}
int main()
{
    Exercise();
    return 0;
}