#include <iostream>
using namespace std;

int main(){

    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    if(str1 == "vertebrado"){
        if(str2 == "ave"){
            if(str3 == "carnivoro"){
                cout << "aguia" << endl;
            }
            else if(str3 == "onivoro"){
                cout << "pomba" << endl;
            }
        }
        else if(str2 == "mamifero"){
            if(str3 == "onivoro"){
                cout << "homem" << endl;
            }
            else if(str3 == "herbivoro"){
                cout << "vaca" << endl;
            }
        }
    }
    else if(str1 == "invertebrado"){
        if(str2 == "inseto"){
            if(str3 == "hematofago"){
                cout << "pulga" << endl;
            }
            else if(str3 == "herbivoro"){
                cout << "lagarta" << endl;
            }
        }
        else if(str2 == "anelideo"){
            if(str3 == "hematofago"){
                cout << "sanguessuga" << endl;
            }
            else if(str3 == "onivoro"){
                cout << "minhoca" << endl;
            }
        }
    }

    return 0;
}
