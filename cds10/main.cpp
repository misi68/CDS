#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int j=0,i=0,a,n=0, stat[1001] = {0};
    ifstream in("bac.txt");
    while(in >> a)
    {
        stat[a]++;
    }
    for(i=1; i<1001; i+=2)
        while(stat[i]>0)
        {
            cout << i << " ";
            stat[i]--;
        }
    for(i=0; i<1001; i+=2)
        while(stat[i]>0)
        {
            cout << i << " ";
            stat[i]--;
        }
}
