

#include <iostream>
#include <math.h>

using namespace std;
double fir,sec,thir,four,fif,formula,n;

void Exercise() {
    cout << "Enter first value: ";
    cin >> fir;
    cout << "Enter second value: ";
    cin >> sec;
    cout << "Enter third value: ";
    cin >> thir;
    cout << "Enter fourth value: ";
    cin >> four;
    cout << "Enter fifth value: ";
    cin >> fif;


    formula = (fir + sec + thir + four + fif) / 5;
    if (formula >=4)
    {
        cout << "The student is admitted to the exam";
    }
    else if (formula < 4)
    {
        cout << "The stident is not admitted to the exam";
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