#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y ,z,a,b=0;
    cin>>x>>y>>z;
    int sum=0;
    for (int i = 0 ; i < x ; i++)
    {
        cin>>a;
        if(a<=y)
        {
            sum+=a;
            if (sum>z)
            {
            b++;
            sum=0;
            }
        }

    }

    cout<<b<<endl;
    return 0;
}