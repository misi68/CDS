#include <iostream>

using namespace std;
int MaxImp(int a,int b)
{
    int max1=b;
    int i,j,szor;
    for(i=b; i>=a; i--)
    {
        int szor=1;
        for(j=1; j<=i; j+=2)
        {
            if(i%j==0)
                szor=szor*j;
        }
        if(szor>max1)
        {
            return i;
        }
    }
    return 0;
}
int main()
{
    int a,b;
    cin >> a >> b;
    cout << MaxImp(a,b);
}
