#include <iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    string a[n];

    for(int i=0; i<n; i++){
        int b;
        cin >> b;

       if(b>0){
            if(b%2==0) a[i] = "EVEN POSITIVE";
            else a[i] = "ODD POSITIVE";
       }
       else if(b<0){
            if(b%2==0) a[i] = "EVEN NEGATIVE";
            else a[i] = "ODD NEGATIVE";
       }
       else a[i] = "NULL";
    }

    for(int i=0; i<n; i++) cout << a[i] << endl;
    return 0;
}


