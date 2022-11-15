#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  int i, len;
  char p[30];
  printf("Ingrese una palabra\n");
  scanf("%s", p);
  len= strlen(p);
  printf("Reemplazando las consonantes por '++':\n");
  for(i=0;i<len;i++){
    if(p[i] !='a' && p[i] !='e' && p[i] !='i' && p[i] !='o' && p[i] !='u' && p[i] !='A' && p[i] !='E' && p[i] !='I' && p[i] !='O' && p[i] !='U'){
      printf("++");
    }else{
      printf("%c", p[i]);
    }
  }
  return 0;
}