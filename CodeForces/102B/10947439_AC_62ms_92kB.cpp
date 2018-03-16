#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char p[100000];
    cin >> p;
    int x=0,counter=0;
    if(strlen(p)>1)
    {
        for(int i=0;i<strlen(p);i++)
        {
            x += (p[i]-'0');
        }
        counter++;
        ll n = x;
        int len = log10(n) +1;
        ll sum = 0;
        ll s;
        while(len >1)
        {
            sum = 0;
            for(int i=0; i<len;i++)
            {
                s = n%10;
                sum += s;
                n = n/10;
            }
            n = sum;
            len = log10(n) +1;
            counter++;
        }
    }

    cout<<counter<<endl;
    return 0;

}
