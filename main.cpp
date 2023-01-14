

#include <iostream>
#include <math.h>

using namespace std;
int x;

void Exercise() {
    cout << "Enter number: ";
    cin >> x;

    if (x % 2 ==0)
    {
        cout << x * 3;
    }
    else if (x % 2 !=0)
    {
        cout << x / 2;
    }
    else
    {
        cout << "Operation not found";
    }

}

int main()
{
    Exercise();
    return 0;
}