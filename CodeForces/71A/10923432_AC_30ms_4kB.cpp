#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;

int main(){

    int n;
    cin >> n;

    for(int i=0;i<n;i++){
        string a;
        cin >> a;

        int len = a.length();
        int ln = len-2;
        char s[100];
        itoa(ln, s,10);

        string str;

        if(len>10) str =  a.substr(0,1) + s + a.substr(len-1,len);
        else str = a;

        cout << str << endl;
    }
    return 0;
}