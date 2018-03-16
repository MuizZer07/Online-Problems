#include <iostream>
using namespace std;

int main()
{
    int in, ger, inter = 0, gremio =0, draw = 0, match = 0;;
    string a;

    cin >> in >> ger;

    if(in > ger) inter++;
    else if(in < ger) gremio++;
    else draw++;

    match++;

    int nov;
    cout << "Novo grenal (1-sim 2-nao)" << endl;
    cin >> nov;
    while(nov!=2){



        cin >> in >> ger;

        if(in > ger) inter++;
        else if(in < ger) gremio++;
        else draw++;

        match++;

        cout << "Novo grenal (1-sim 2-nao)" << endl;
        cin >> nov;
    }

    if(inter > gremio) a = "Inter";
    else if(inter < gremio) a = "Gremio";
    else a = "Não houve vencedor";

    cout << match << " grenais\nInter:"<< inter << endl
        << "Gremio:" << gremio << endl << "Empates:" << draw << endl
        << a << " venceu mais" << endl;

    return 0;
}
