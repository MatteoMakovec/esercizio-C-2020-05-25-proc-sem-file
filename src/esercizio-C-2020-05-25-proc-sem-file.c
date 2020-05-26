/*
 Il processo principale crea un file "output.txt" di dimensione FILE_SIZE (all'inizio ogni byte del file deve avere valore 0)

 #define FILE_SIZE (1024*1024)

 #define N 4
 è dato un semaforo senza nome: proc_sem

 il processo principale crea N processi figli
 i processi figli aspettano al semaforo proc_sem.

 ogni volta che il processo i-mo riceve semaforo "verde", cerca il primo byte del file che abbia valore 0 e ci scrive il
 valore ('A' + i). La scrittura su file è concorrente e quindi va gestita opportunamente (ad es. con un mutex).

 se il processo i-mo non trova una posizione in cui poter scrivere il valore, allora termina.

 il processo padre:
 per (FILE_SIZE+N) volte, incrementa il semaforo proc_sem
 aspetta i processi figli e poi termina.

 risolvere il problema in due modi:
 - soluzione A: usare le system call open(), lseek(), write()
 - soluzione B: usare le system call open(), mmap()
*/

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/mman.h>

#include <errno.h>
#include <pthread.h>
#include <semaphore.h>


#define FILE_SIZE (1024*1024)
#define N 4

#define CHECK_ERR(a,msg) {if ((a) == -1) { perror((msg)); exit(EXIT_FAILURE); } }
#define CHECK_ERR_MMAP(a,msg) {if ((a) == MAP_FAILED) { perror((msg)); exit(EXIT_FAILURE); } }


int main(int argc, char *argv[]) {


	return 0;
}


