#include <iostream>
using namespace std;
int max(int x, int y, int z)
{
    int m;
    if (x>y)
    {
        if (x>z) m=x;
        else m=z;
    }
    else
    {
        if (y>z) m=y;
        else m=z;
    }
    return(m);
}

int main()
{
    int a,b,c,m;
    cin >> a >> b >> c;
    m=max(a,b,c);
    cout << "max=" << m <<'\n';
    return 0;
}