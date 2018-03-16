#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;


    for(int j=0; j<n; j++){
        int arr[10];
        bool flag = true, flag2 = true;
        for(int i=0; i< 10; i++){
            cin >> arr[i];
        }
         for(int i=1; i<10; i++){
                if(arr[i-1] > arr[i]){
                    flag = false;
                    break;
                }
            }
         for(int i=1; i<10; i++){
            if(arr[i-1] < arr[i]){
                flag2 = false;
                break;
            }
        }
        if(j==0)cout << "Lumberjacks:" << endl;
        if(flag== true || flag2== true) cout << "Ordered" << endl;
        else cout << "Unordered" << endl;
    }

    return 0;
}
