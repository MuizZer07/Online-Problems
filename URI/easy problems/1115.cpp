#include <iostream>
using namespace std;

int main(){

    bool Null =  false;

    while(!Null){
        int x, y;
        cin >> x >> y;

        if(x != 0 && y != 0){
            if(x > 0 && y > 0) cout << "primeiro" << endl;
            else if(x > 0 && y < 0) cout << "quarto" << endl;
            else if(x < 0 && y < 0) cout << "terceiro" << endl;
            else if(x < 0 && y > 0) cout << "segundo" << endl;
        }
        else Null = true;
    }

    return 0;
}



