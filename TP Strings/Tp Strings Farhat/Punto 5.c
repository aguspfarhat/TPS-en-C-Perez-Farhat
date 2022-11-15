#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
  int i, m, len, c=0;
  char p[30];
  do{
    m=0;
    printf("Ingrese una palabra en mayúsculas\n");
    scanf("%s", p);
    len = strlen(p);
    for(i=0;i<len;i++){
      if(isupper(p[i])){
        m++;
      }
    }
  }
  while(m!=len);//Control de mayusculas
  printf("Tu palabra es: %s\n", p);
  
  for(i=0;i<len;i++){
    if(p[i]=='C'){
      if(p[i+1]== 'A'){
        c=i;
        while(c<len){
          p[c]=p[c+2];
          c++;
          i=i-2;
        }
      }
    }
  }
  printf("Tu palabra sin CA es: %s", p);
  return 0;
}