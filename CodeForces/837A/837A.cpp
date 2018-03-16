#include <iostream>
#include <sstream>
using namespace std;

int main(){

    int n, maxi = -1000000000;
    cin >> n;
    cin.get();

    string str;

    getline(cin, str);

    string str1 = str.substr(0,n);
    istringstream iss(str1);
    string s = "";
    while(iss >> s){
            int counter =0;
            for(int i=0;i<s.length();i++)
                if(s[i] >= 'A' && s[i] <= 'Z') counter++;

            if(counter > maxi) maxi = counter;
    }

    cout << maxi << endl;
    return 0;
}
