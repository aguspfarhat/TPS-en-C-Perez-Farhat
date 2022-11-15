#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  int i, len;
  char p[30];
  printf("Ingrese una palabra en minusculas\n");
  scanf("%s", p);
  printf("Ingresaste: %s\n",p);
  len= strlen(p);
  for(i=0;i<len;i++){
    if(p[i]=='a' || p[i]=='e' || p[i]=='i' || p[i]=='o' || p[i]=='u'){}
    else{
      p[i]=toupper(p[i]);    
    }
  } 
  printf("Las consonantes en mayúscula: %s\n",p);
  return 0;
}