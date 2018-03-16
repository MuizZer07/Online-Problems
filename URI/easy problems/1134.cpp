#include <iostream>
using namespace std;

int main()
{
    int d, alcohol =0, Gasoline=0, Diesel =0;

    cin >> d;

    while(d!=4){
        switch(d){
            case 1:
                alcohol++;
                cin >> d;
                break;
            case 2:
                Gasoline++;
                cin >> d;
                break;
            case 3:
                Diesel++;
                cin >> d;
                break;
            default:
                cin >> d;
        }
    }



    cout << "MUITO OBRIGADO" << endl << "Alcool: " << alcohol << endl
         << "Gasolina: " << Gasoline << endl << "Diesel: " << Diesel << endl;

    return 0;
}



