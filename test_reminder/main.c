#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
  int begin, end, count=0;
  char s[1000],r[1000];

  printf("enter a string\n");
  gets(s);

  while(s[count]!='\0')
    count++;
  end = count-1;

  for(begin=0;begin<count;begin++){
    r[begin]=s[end];
    end--;
  }
  r[begin]= '\0';
  printf("%s", r);
  return 0;
}
