#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    string name;
    cin >> name;

    double s,ts;
    cin >> s >> ts;

    double salary = s + ((15*ts)/100);

    printf("TOTAL = R$ %.2f", salary );
    cout << endl;


    return 0;
}



