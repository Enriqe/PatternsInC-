#include <iostream>
#include "SubjectObserver.h"


using namespace std;

int main(){
    Subject subj;
    WeatherObserver weather(&subj);

    cout << "Changing temperature" << endl;
    subj.setTemp(38.2);
    cout << endl;

    cout << "Changing pressure" << endl;
    subj.setPress(11.2);
    cout << endl;

    cout << "Changing humidity" << endl;
    subj.setHumid(60.5);
    cout << endl;

    return 0;
}