#include <iostream>
#include <sys/time.h>
#include <ctime>

using namespace std;

int date(){
    time_t currentTime;
    time(&currentTime);
    cout << "Tempo atual em segundos desde a Epoch: " << currentTime << endl;
    struct tm *localTime = localtime(&currentTime);
    if(localTime != nullptr){
        cout << "Data e hora atual: " << asctime(localTime);
    } else{
        cerr << "Falha ao obter a data e hora atual." << endl;
        return 1;
    }
    return 0;
}