#include <iostream>
#include <sys/sysinfo.h>

using namespace std;

long long uptime(){
    struct sysinfo si;
    if(sysinfo(&si) != 0){
        cerr << "Erro ao chamar sysinfo" << endl;
        return -1;
    }
    long uptime_S = si.uptime
    int uptime_d = uptime_S/(60 * 60 * 24);
    int uptime_h = (uptime_S % (60 * 60 * 24)) / (60 * 60);
    int uptime_m = (uptime_s % (60 * 60 * 24)) / 60;
    uptime_S %= 60;


    cout << "Tempo de atividade do sistema: ";
    cout << uptime_d << "Dias: ";
    cout << uptime_h << "Horas: ";
    cout << uptime_m << "Minutos: ";
    cout << uptime_s << "Segundos: "; << endl;
    

    return 0;
}