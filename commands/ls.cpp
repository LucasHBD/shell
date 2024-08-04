#include <iostream>

int ls(){
    const char *command = "ls";
    char *args[] = {const_cast<char*>(command), NULL};

    if(execvp("ls", args) == -1){
        cerr << "execvp" << endl;
        exit(EXIT_FAILURE);
    }
    return 0;
}