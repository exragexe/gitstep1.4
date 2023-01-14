

#include <iostream>

using namespace std;
int a;

void Exercise() {
    cout << "Enter number: ";
    cin >> a;
    if (a %2 ==0)
    {
        cout << a <<" is even";
    }
    else
    {
        cout << a << " is odd";
    }
}

int main()
{
    Exercise();
    return 0;
}