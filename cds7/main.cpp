#include <iostream>

using namespace std;

int main()
{
    int n,m,v[100][100],i,x,j;
    cin >> n >> m;
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            cin >> v[i][j];
        }
    }
    x=v[n-1][m-1];
    for(i=0; i<n; i++)
    {
        for(j=0; j<m; j++)
        {
            if(j==0 && j==(m-1) && i==0 && i==(n-1))
            {
                v[i][j]=x;
            }
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
