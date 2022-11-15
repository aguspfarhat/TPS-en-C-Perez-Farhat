#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(){
  int i, len;
  printf("Ingrese una palabra completamente en mayúsculas\n");
  char p[30];
  scanf("%s", p);
  printf("La palabra: %s\n", p);
  len= strlen(p);
  for(i=0;i<len;i++){
    if(p[i]== 'A' || p[i]== 'E' || p[i]== 'I' || p[i]== 'O' || p[i]== 'U' ){
      p[i]= tolower(p[i]);
    }
  }
  printf("La palabra con vocales minúsculas: %s\n", p);
  return 0;
}