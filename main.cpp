

#include <iostream>

using namespace std;
int x,y;

void Exercise() {
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;
    (x > y) ? cout << y << " is min" : cout << x << " is min";
}

int main()
{
    Exercise();
    return 0;
}