#include <iostream>
using namespace std;

int main(){

    bool match = false;
    while(!match){
        int pass;
        cin >> pass;

        if(pass == 2002){
            cout << "Acesso Permitido" << endl;
            match = true;
        }
        else cout << "Senha Invalida" << endl;
    }



    return 0;
}


