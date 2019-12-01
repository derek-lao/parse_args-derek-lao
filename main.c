#include "function.h"

int main()
{
  printf("running...\n");
  char * line1 = "ls -a -l\0";
  printf("hello!\n");
  char ** args= parse_args(line1);//memory already allocated
  printf("right before execvp runs...\n");
  execvp(args[0], args);
  printf("shoudln't have gotten here...\n");
  return 0;
}
