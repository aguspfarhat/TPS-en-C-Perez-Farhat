#include <stdio.h>
#include <ctype.h>
#include <string.h>
void vocalString(char p[]);
void toupperString(char p[]);
int main(){
  char p[30];
  printf("Ingrese una palabra\n");
  scanf("%s",p);
  printf("Tu palabra es:\n %s\n", p);
  vocalString(p);
  toupperString(p);
  printf("Tu palabra en mayusuculas y con asteriscos en vez de vocales es: \n%s", p);
  return 0;
}
void vocalString(char p[]){
  int i, len;
  len= strlen(p);
  for(i=0;i<len;i++){
    if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u' ||p[i]=='A' || p[i]=='E' || p[i]=='I' || p[i]=='O' || p[i]=='U'){
      p[i]='*';
    }
  }
}
void toupperString(char p[]){
  int i, len;
  len= strlen(p);
  for(i=0;i<len;i++){
    p[i]= toupper(p[i]);
  }
}