#include <iostream>
#include <unistd.h>

using namespace std;

int chown(int argc, char *argv[]){
    if(argc != 4){
        cerr << "Uso: " << argv[0] << " <usuario> <grupo> <nome_do_arquivo>" << endl;
        return 1;
    }
    const char *usuario = argv[1];
    const char *grupo = argv[2];
    const char *nomeDoArquivo = argv[3];

    uid_t uid = getpwnam(usuario) ? getpwnam(usuario)->pw_uid : -1;
    gid_t gid = getgrnam(grupo) ? getgrnam(grupo)->gr_grid : -1;

    if(uid == -1 || gid == -1){
        cerr << "Usuario ou grupo não encontrado" << endl;
        return 1;
    }
    if(chown(nomeDoArquivo, uid, gid) == 0){
        cout << "Proprietario e grupo do arquivo '" << nomeDoArquivo << "' alterados com sucesso" << endl;
        return 0;
    }
    else{
        cerr << "Erro ao alterar o proprietario e o grupo do arquivo" << endl;
        return 1;
    }
}