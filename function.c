#include "function.h"

char ** parse_args( char * line )
{
  char * arg;
  int argIndex;
  char * argArray[5];
  for(argIndex = 0 ; argIndex < 5 ; argIndex ++)
  {
    if(* line || * line == " ")
    {
      argIndex = 5;
    }
    else
    {
      arg = strsep(&line, " "); // line is changed to the next argument
      argArray[argIndex] = arg;
    }
  }
  return argArray;
}
