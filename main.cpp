

#include <iostream>
#include <math.h>

using namespace std;
int x,c,v,b,n,m,a;

void Exercise() {
    cout << "Enter 7 numbers: " << endl;
    cin >> x;
    cin >> c;
    cin >> v;
    cin >> b;
    cin >> n;
    cin >> m;
    cin >> a;
    int max = x;
    if(max < c) max = c;
    if(max < v) max = v;
    if(max < b) max = b;
    if(max < n) max = n;
    if(max < m) max = m;
    if(max < a) max = a;
    cout << max;

}
int main()
{
    Exercise();
    return 0;
}