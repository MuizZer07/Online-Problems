#include <iostream>
#include <cmath>
using namespace std;

int main(){

    int n;
    cin >> n;

    int a[n], sum = 0, j=0, k=0;
    for(int i=0; i<n;i++){
        cin >> a[n];
        sum += a[n];

        if(a[n]==100) j++;
        if(a[n]==200) k++;
    }

    if(k%2==0)
    {
        if(j%2==0)
            cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else
    {
        if(j<2)
            cout<<"NO"<<endl;
        else
        {
            j-=2;
            if(j%2==0)
               cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }

}
    return 0;

}

