#include "function.h"

char ** parse_args( char * line )//from what I read online, standards conventions is that the args ends with a null argument
{
  char * arg;
  int argIndex;
  char ** argArray = malloc(5 * sizeof(char **));//memory is allocated
  for(argIndex = 0 ; argIndex < 5 ; argIndex ++)
  {
    if(!* line || * line == ' ')
    {
      argIndex = 5;
    }
    else
    {
      printf("&line is %ld\n", &line);
      printf("line is %ld\n", line);
      // printf("the character at line is %s\n", * line);
      arg = strsep(&line, " "); // line is changed to the next argument
      printf("made it!\n");
      argArray[argIndex] = arg;
    }
  }
  return argArray;
}
