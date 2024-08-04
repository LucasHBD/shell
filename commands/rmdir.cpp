#include <iostream>

using namespace std;

int rmdir(int argc, char *argv[]){
    if(argc != 2){
        cerr << "Uso: " << argv[0] << " <nome_do_diretorio>" << endl;
        return 1;
    }

    const char *nomeDoDiretorio = argv[1];

    if(rmdir(nomeDoDiretorio) == 0){
        cout << "Diretorio '" << nomeDoDiretorio << "' removido com sucesso." << endl;
    }
    else{
        cerr << "Erro ao remover diretorio" << endl;
        return 1;
    }
}