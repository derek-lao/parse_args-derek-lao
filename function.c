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
      printf("final stretch now!\n");
      argIndex = 5;
    }
    else
    {
      strcpy(arg, strsep(&line, " ")); // line is changed to the next argument
      printf("made it!\n");
      printf("arg is %s\n", arg);
      // printf("line is %ld\n", line);
      // printf("* line is %c\n\n", * line);
      argArray[argIndex] = arg;
      printf("job's done, the beach is dead\n");
    }
  }
  return argArray;
}
