#include <iostream>
#include <math.h>
using namespace std;
float area(float x, float y, float z)
{
    float m;
    m=(x+y)*z/2.0;
    return(m);
}

int main()
{
    float a, b, h, m;
    cin >> a >> b >> h;
    m=area(a,b,h);
    cout << "trapezoid area is " << m << '\n';  
    cin >> a;
    return 0;
}