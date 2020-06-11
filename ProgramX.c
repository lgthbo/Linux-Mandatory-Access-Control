#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main() {


  printf("retrieve the source code of Program Y from the Internet\n");
  if (system("wget -O /var/X/ProgramY.c https://gist.githubusercontent.com/lgthbo/e89c3690cee4d21841ec85ac92c0b8f6/raw/f3f96fd47e253cb3eb73a722ffd97aa8f287df4b/ProgramY.c") != -1) printf("Done!\n");

  printf("Build Program Y under /var/X/ and install into /var/Y/py\n");
  if (system("gcc /var/X/ProgramY.c -o /var/Y/py") != -1) printf("Done!\n");
    
  int exit_status;
  pid_t PID = fork();
    switch(PID){
        case -1:
            perror("fork()");
            exit(-1);
        case 0:
            printf("Fork a child ford process to execute Program Y");
            execl("/var/Y/py", "", NULL, NULL);
            break;
        default:
            wait(&exit_status);
            printf("[ProgramY End]\n");
    }

  return 0;
}
