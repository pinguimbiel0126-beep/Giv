#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
  if (argc < 2)
  {
    printf("Giv Action <comando>\n");
    return 1;
  }
    if (strcmp(argv[1],"init") == 0) {
       printf("project initialized!\n");
       return 0;
       
    }
    
     if (strcmp(argv[1], "save") == 0) {
       if (argc < 3)
       {
         printf("Giv Action<mensagem>\n");
         return 1;
       }
       
       printf("Version saved: %s\n", argv[2]);
       return 0;
     }

  }


