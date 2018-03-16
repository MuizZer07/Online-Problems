#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    char p[100000];
    char q[100000];
    char r[100000];

    char u[100000];
    char v[100000];
    char w[100000];
    cin >> p >> q;

    int a = atoi(p);
    int b = atoi(q);

    int c = a+b;
    itoa(c,r,10);
    int j=0, k=0,m=0;


    for(int i=0;i<strlen(p);i++)
        {
          if(p[i] != '0') u[j++] = p[i];
        }
    for(int i=0;i<strlen(q);i++)
        {
          if(q[i] != '0') v[k++] = q[i];
        }
    for(int i=0;i<strlen(r);i++)
        {
          if(r[i] != '0') w[m++] = r[i];
        }

    int x = atoi(u);
    int y = atoi(v);

    int z = x+y;
    int Z = atoi(w);

    if(z == Z) cout<< "YES" << endl;
    else cout<< "NO" << endl;
    return 0;
}
