#include "function.h"

int main()
{
  printf("running...\n");
  char line1[100] = "ls -a -l\0";
  char ** args = parse_args(line1);//memory already allocated
  printf("args[0] is %s\n", args[0]);
  execvp(args[0], args);

  printf("shoudln't have gotten here...\n");
  // char line[100] = "woah-this-is-cool";
  // char *s1 = line;
  // printf("[%s]\n", strsep( &s1, "-" ));
  // printf("[%s]\n", s1);
  return 0;
}
