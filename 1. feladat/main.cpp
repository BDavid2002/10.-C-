#include <iostream>

using namespace std;

int main()
{
    int a,n,i,j,v[9999];
    cin >> n;
    for(i=1; i<=n; i++)
    {
        cout << "v[" << i << "]=";
        cin >> v[i];
    }

    for(i=1; i<=n; i++)
    {
        cout << v[i];

    }

}
