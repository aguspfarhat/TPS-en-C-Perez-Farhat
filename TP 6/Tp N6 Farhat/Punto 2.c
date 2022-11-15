#include <stdio.h>
int main(){
  int m, n, p, i;
  n=0;
  p=0;
  printf("Ingrese el orden del vector\n");
  scanf("%i", &m);
  int v[m];
  for(i=0;i<m;i++){
    printf("Ingrese un numero dentro del vector\n");
    scanf("%i", &v[i]);
  }
  for(i=0;i<m;i++){
    if(v[i]<0){
      n+=v[i];
    }
  }
  for(i=0;i<m;i++){
    if(v[i]>0){
      p+=v[i];
    }
  }
  printf("Los positivos acumulados suman %i\nLos negativos acumulados suman %i",p,n);
  return 0;
}