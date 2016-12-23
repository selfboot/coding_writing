#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    if(lseek(STDIN_FILENO, 0, SEEK_CUR) == -1){
        printf("Can't seek\n");
    }
    else{
        printf("Seek OK\n");
    }

    exit(0);
}
