

#include <iostream>
#include <math.h>

using namespace std;
int x, form1, form2,form3,form4,form5,form6,sum1,sum2;
unsigned int n;

void Exercise() {
    cout << "Enter a 6-significant integer: " << endl;
    cin >> x;
    form1 = x /100000 %10;
    form2 = x / 10000 % 10;
    form3 = x / 1000 % 10;
    form4 = x / 100 % 10;
    form5 = x / 10 % 10;
    form6 = x % 10;
    sum1 = form1 + form2 + form3;
    sum2 = form4 + form5 + form6;
    while (x > 0)
    {
        x /= 10;
        n++;

    }

    if (n == 6)
    {
        if (sum1 == sum2)
        {
            cout << "Number is lucky";
        }
        else
        {
            cout << "Number is not lucky";
        }
    }
    else
    {
        cout <<"Number is not a 6-significant integer.";
    }

}
int main()
{
    Exercise();
    return 0;
}