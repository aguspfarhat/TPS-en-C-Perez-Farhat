#include <stdio.h>
#include <ctype.h>
#include <string.h>
void toupperString(char p[], int len);
void cutString(char p[], int len);

int main(){
  int len=0;
  char p[30];
  while(len<5){
    printf("Ingrese una palabra de al menos 5 caracteres.\n");
    scanf("%s", p);
    len=strlen(p);
  }
  toupperString(p, len);
  printf("Su palabra en mayúsculas es: %s\n", p);
  printf("Las 2 primeras y ultimas letras de su palabra son:\n");
  cutString(p, len);
  return 0;
}
void toupperString(char p[], int len){
  int i;
  for(i=0;i<len;i++){
    p[i]=toupper(p[i]);
  }
}
void cutString(char p[], int len){
  int i;
  for(i=0;i<len;i++){
    if(i==0 || i==1 || i==len-1 || i==len -2){
      printf("%c" ,p[i]);
    }
  }
}