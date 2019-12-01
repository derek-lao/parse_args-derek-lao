#include "function.h"

char ** parse_args( char * line )//from what I read online, standards conventions is that the args ends with a null argument
{
  char * arg = malloc(100 * sizeof(char *));
  int argIndex;
  char ** argArray = malloc(5 * sizeof(char **));//memory is allocated
  for(argIndex = 0 ; argIndex < 5 ; argIndex ++)
  {
    if(!line)
    {
      // printf("final stretch now!\n");
      argIndex = 5;
    }
    else
    {
      strcpy(arg, strsep(&line, " ")); // line is changed to the next argument
      argArray[argIndex] = arg;
      printf("arg is %s\n", arg);
      printf("argArray[argIndex] is %s\n", argArray[argIndex]);
    }
  }
  printf("argArray[0] is %s\n", argArray[0]);
  return argArray;
}
