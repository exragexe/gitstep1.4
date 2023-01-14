

#include <iostream>
#include <math.h>

using namespace std;
int x,y;

void Exercise() {
    cout << "Enter first number: ";
    cin >> x;
    cout << "Enter second number: ";
    cin >> y;

    if (x==y)
    {
        cout <<"The numbers are equal";
    }
    else if (x!=y)
    {
        cout << min(x, y)<<" "<< max(x, y);
    }
    else
    {
        cout << x << " Operation not found";
    }
}

int main()
{
    Exercise();
    return 0;
}