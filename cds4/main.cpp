#include <iostream>

using namespace std;
void f(int a, int b)
{
    if(a<=b)
    {
        f(a+1, b-2);
        cout << "*";
    }
    else cout << b;
}
int main()
{
    f(3, 17);
}
