#include <stdio.h>
#include <stdlib.h>
int main()
{
        printf("[Py]\n");

        printf("Program Y can read/write files under /var/Y/\n");
        if (system("touch /var/Y/test") != -1) printf("Ok!\n");

        printf("Program Y can not read/write files out of /var/Y/\n");
        if (system("touch /var/test") != -1) printf("Ok!\n");

        printf("Program Y is not allowed to create or accept network connections\n");
        if (system("ping www.nctu.edu.tw -c 1") != -1) printf("Ok!\n");

  return 0;
}
