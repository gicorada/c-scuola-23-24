//
// Created by gicorada on 12/11/23.
//

#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <stdio.h>

int main() {
    // (3 + 2) * (6 - 2)

    // Realizzare un programma in C che calcoli la seguente espressione matematica con il massimo grado di parallelismo:
    //
    //(3 + 2) * (6 - 2)

    int pid1 = fork();
    int status;
    int s;
    int d;

    if(pid1 == 0) {
        exit(3+2);
    } else {
        d = 6 - 2;
        waitpid(pid1, &status, 0);
        s = WEXITSTATUS(status);
    }
    printf("Il risultato è %d\n", s*d);






    /*int pid = fork();
    int status;
    int s;
    int d;

    if(pid == 0) {
        d = 6-2;
        exit(0);
    } else {
        s = 3+2;
        waitpid(pid, &status, 0);

    }

    printf("Il risultato è %d\n", s*d);

     */

}