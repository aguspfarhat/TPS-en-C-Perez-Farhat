#include <stdio.h>
#include <string.h>
#include <ctype.h>
void invertirString(char v[]);
void toupperString(char v[]);
int main(){
  char v[40];
  printf("Ingrese una palabra que desee invertir\n");
  scanf("%s", v);
  printf("Su palabra es: %s\n",v);
  invertirString(v);
  printf("Su palabra invertida es: %s\n",v);
  toupperString(v);
  printf("Su palabra invertida y en mayúscula es: %s\n",v);
  return 0;
}
void invertirString(char v[]){
  int i, len, temp;
  len = strlen(v);
  for(i=0;i<len/2;i++){
    temp= v[i];
    v[i]=v[len-i-1];
    v[len-i-1] = temp;
  }
}
void toupperString(char v[]){
  int i, len;
  len=strlen(v);
  for(i=0;i<len;i++){
    v[i]=toupper(v[i]);
  }

}
