#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
  int i, len;
  char p[30];
  printf("Ingrese una palabra en mayúsculas\n");
  scanf("%s", p);
  len = strlen(p);
  for(i=0;i<len;i++){
    p[i]= tolower(p[i]);
  }
  printf("La palabra en minúsculas es: %s", p);
  return 0;
}