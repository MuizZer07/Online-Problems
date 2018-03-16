#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    int n;
    cin >>n;

    for(int i=0; i<n;i++){
        int x, y;
        cin >> x >> y;

        if(y!=0){
             double res =  x / (double)y;
            printf("%.1f\n", res);
        }
        else cout << "divisao impossivel" << endl;

    }
    return 0;
}



