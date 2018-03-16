#include <bits/stdc++.h>
using namespace std;

long long sieve(long long n){

    long long sqn = sqrt(n);
    long long i;
    for(i=2; i*i<sqn; i++){
        if(n%i==0)
            break;
    }

    if(i*i > sqn && sqn*sqn == n && n>1)
        return 1;
    else return 0;
}

int main(){

    long long n;
    scanf("%I64d",&n);
    for(long long i=0; i<n; i++){
        long long x;
        scanf("%I64d",&x);

        if(sieve(x)==1)printf("YES\n");
        else printf("NO\n");

    }
    return 0;
}
