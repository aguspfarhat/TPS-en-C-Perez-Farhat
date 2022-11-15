#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  int len, i, c=0;
  char p[30];
  printf("Ingrese una palabra\n");
  scanf("%s", p);
  len = strlen(p);
  for(i=0;i<len;i++){
    if(p[i]=='a'|| p[i]=='e'|| p[i]=='i'|| p[i]=='o'|| p[i]=='u'|| p[i]=='A'|| p[i]=='E'|| p[i]=='I'|| p[i]=='O'|| p[i]=='U'){
      c++;
    }
  }
  printf("En la palabra hay %i vocal/es", c);
  return 0;
}