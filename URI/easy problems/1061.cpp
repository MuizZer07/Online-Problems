#include <iostream>
using namespace std;

int main()
{
    string str;
    int startDay, startHour, startMin, startSec, endDay, endHour, endMin, endSec, totalDay, totalHour, totalMin, totalSec;
    for(int i=0; i<4;i++){
        if(i==0)
            cin >> str >> startDay;
        else if(i==1)
            cin  >> startHour >> str >> startMin >> str >> startSec;
        else if(i==2)
            cin >> str >> endDay;
        else if(i==3)
            cin  >> endHour >> str >> endMin >> str >> endSec;
    }

    totalDay = endDay - startDay;

    if(startHour <=endHour) totalHour = endHour - startHour;
    else{
        totalHour = (24-startHour) + endHour;
        totalDay--;
    }

    if(startMin <=endMin) totalMin = endMin - startMin;
    else{
        totalMin = (60-startMin) + endMin;
        totalHour--;
    }


    if(startSec<=endSec) totalSec =  endSec - startSec;
    else {
        totalSec = (60-startSec) + endSec;
        totalMin--;
    }

    cout << totalDay << " dia(s)\n" << totalHour << " hora(s)\n" << totalMin << " minuto(s)\n" << totalSec << " segundo(s)" << endl;

    return 0;
}
