#include <iostream>
#include <sstream>

using namespace std;

int main(){

    string str, words[100*100];
    int counter[100*100], pos;
    int min = -999999, l;
    int k = 0;

    for(int i=0;i<100;i++)  counter[i] = 1;

    while(getline(cin, str))
    {

        istringstream iss(str);
        string s = "";

        while(iss >> s)
        {
            words[k] = s;

            for(int i = 0; i< k-1; i++)
            {
                if(words[i] == words[k]) counter[k]++;
            }

            k++;

        }
        l = k;
    }

    for(int i=0;i<l;i++)
    {
        if(min < counter[i])
        {
            //min = counter[i];
            pos = i;
        }
    }

    cout << words[pos] << endl;
    return 0;
}
