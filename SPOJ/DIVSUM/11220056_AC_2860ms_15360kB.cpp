#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;

    for(int i=1; i<=t;i++){
       int n, sum = 0;
       scanf("%d", &n);

       int s = n/2;
       for(int j=1; j<=s; j++){
            if(n%j==0) sum += j;
       }
      printf("%d\n", sum);
    }

    return 0;
}