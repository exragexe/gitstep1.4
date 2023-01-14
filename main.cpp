

#include <iostream>

using namespace std;
int x;

void Exercise() {
    cout << "Enter number: ";
    cin >> x;

    if (x>0)
    {
        cout << x << " is positive";
    }
    else if (x<0)
    {
        cout << x << " is negative";
    }
    else
    {
        cout << x << " is equal to 0(zero)";
    }
}

int main()
{
    Exercise();
    return 0;
}