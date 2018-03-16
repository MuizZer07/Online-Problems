#include <iostream>
#include <string>
using namespace std;

int main(){

    int T;
    cin >> T;


    for(int i=0; i<T; i++){
        int r,c,l = 0;
        cin >> r >> c;
        char ch[r][c];
        string str[r*c];
        string smallest;

        for(int j=0;j<r; j++){
            str[l] ="";
            for(int k=0;k<c;k++){
                cin >> ch[j][k];

                if(ch[j][k] == 'X'){
                    if(str[l].length() > 1) l++;
                    else str[l] = "";
                }

                else str[l] = str[l] + ch[j][k];
            }

            if(str[l].length() >= 2)
                    l++;
        }

        for(int k=0;k<c;k++){
            str[l] ="";
            for(int j=0;j<r; j++){
                if(ch[j][k] == 'X'){
                    if(str[l].length() > 1)l++;
                    else str[l] = "";
                }
                else str[l] = str[l] + ch[j][k];

            }

            if(str[l].length() >= 2)
                    l++;
        }

//        cout << endl;
//        for(int j=0;j<r*c ; j++)
//        {
//            cout << str[j].length()<< endl; cout << str[j] << endl;
//        }

        smallest = str[0];

        for(int j=0;j<r*c ; j++)
        {
            if(str[j].length()>=2 && str[j+1].length()>=2){
                int q = 0,e;
                while( q < smallest.length()){
                    e = q;
                    char h = smallest[q];
                    char w = str[j+1][q];

                    if(h > w) smallest = str[j+1];
                    else if(h == w) q++;

                    if(q==e) break;

            }
        }
        }
      cout << "Case " << i+1 << ": " << smallest << endl;
    }

    return 0;
}


