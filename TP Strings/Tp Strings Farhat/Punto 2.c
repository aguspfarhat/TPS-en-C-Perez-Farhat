#include <stdio.h>
#include <ctype.h>
#include <string.h>
void toUpperVec(char v[]);
void spaceVec(char v[]);
int main() {
  int i, len, j=0;
  char v[30];
  printf("Ingrese una palabra\n");
  scanf("%s",v);
  printf("Su palabra es: %s\n",v);
  toUpperVec(v);
  printf("Su palabra en mayúscula y separada por un espacio es:\n");
  spaceVec(v);//Incluye print
  return 0;
}
void toUpperVec(char v[]){
  int i, len;
  len= strlen(v);
  for(i=0;i<len;i++){
    v[i]= toupper(v[i]);
  }
}
void spaceVec(char v[]){
  int i, len;
  len=strlen(v);
  for(i=0;i<len;i++){
    printf("%c ", v[i]);
  }
}
