#include <bits/stdc++.h>
using namespace std;


int sieve(int n){
    if(n==2)
        return 1;

    if(n%2 == 0 || n<2)
        return 0;


    int sqn = sqrt(n);
    for(int i=3; i<=sqn; i++){
        if(n%i==0)
            return 0;
    }
    return 1;
}

int main(){

     int n;
     while(scanf("%d", &n)!= EOF){

        if(sieve(n)!=1) printf("%d is not prime.\n", n);
        else{

           int nw = n, i=0, number=0;

            while(nw!=0){
                number =(number * 10) + nw%10;
                nw = nw/10;
                i++;
            }
           if(n == number ) printf("%d is prime.\n", n);
           else if(sieve(number)== 1)printf("%d is emirp.\n", n);
           else printf("%d is prime.\n", n);
        }
     }

     return 0;
}
