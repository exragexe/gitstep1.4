

#include <iostream>
#include <math.h>

using namespace std;
int x, form1, form2,form3,form4;
unsigned int n;

void Exercise() {
    cout << "Enter a 4-significant integer: " << endl;
    cin >> x;
    form1 = x / 1000;
    form2 = x / 100 %10;
    form3 = x / 10 %10;
    form4 = x % 10;


    while (x > 0)
    {
        x /= 10;
        n++;

    }

    if (n == 4)
    {
        cout << form2<<form1<<form4<<form3 ;

    }
    else
    {
        cout <<"Number is not a 4-significant integer.";
    }

}
int main()
{
    Exercise();
    return 0;
}