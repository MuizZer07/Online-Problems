#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    getchar();

    pair< vector<string> , vector<string> > handles;
    string olddd[n], newww[n];

    int k=0, l=0;

    for(int i=0; i<n;i++){
        bool flag = true;
        string oldy, newy;
        cin >> oldy >> newy;

        for(int j=0; j<k; j++){
            if(newww[j] == oldy){
                newww[j]=newy;
                flag = false;
                break;
            }
        }
        if(flag== true){
                olddd[k] = oldy;
            newww[k] = newy;
            k++;
        }
    }
        cout << k << endl;
        for(int j=0; j<k; j++) cout << olddd[j] << " " << newww[j] << endl;


    return 0;
}
