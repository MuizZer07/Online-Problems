#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;

    string s1[10] = {"one", "two", "three", "four", "five", "six", "seven",  "eight", "nine", "ten"};


    for(int t=0;t<n;t++){
        string str;
        cin >> str;
        int len = str.length();


        int maxx = -9999, k, j;

        for(int i=0; i<10; i++){
            int cont = 0;
            if(len==s1[i].length()){
               // cout << s1[i] << " " << len << " " << s1[i].length() << endl;
                for(j=0;j<len;j++){
                    if(str[j]==s1[i][j]){
                        cont++;
                    }
                }
            //cout << cont << endl;
                if(maxx < cont){
                    maxx = cont;
                    k = i;
                }
            }
        }
        cout << k+1 << endl;
}


 return 0;
}
