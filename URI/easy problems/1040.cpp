#include <iostream>
#include <cstdio>
using namespace std;

int main(){

    double n1, n2, n3, n4, n5;
    double avg1, avg2;

    cin >> n1 >> n2 >> n3 >> n4;


    avg1 = ((n1*2)+(n2*3)+(n3*4)+(n4*1))/(2+3+4+1);
    if(avg1<=6.9 && avg1>=5.0)
        cin >> n5;

    printf("Media: %.1f\n", avg1 );

    if(avg1>=7.0) cout  << "Aluno aprovado." << endl;
    else if (avg1<5.0) cout  << "Aluno reprovado." << endl;
    else if(avg1<7.0 && avg1>=5.0){
        cout << "Aluno em exame." << endl;


        avg2 = (avg1+n5)/2;


        printf("Nota do exame: %.1f\n", n5 );
        if(avg2>=5.0) cout  << "Aluno aprovado." << endl;
        else if(avg2<=4.9) cout  << "Aluno reprovado." << endl;
        printf("Media final: %.1f\n", avg2 );
    }

    return 0;
}




