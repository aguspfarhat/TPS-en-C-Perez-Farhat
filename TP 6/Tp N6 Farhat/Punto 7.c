#include <stdio.h>
int main(){
  int a, b, n, i;
  printf("Ingrese cuantos elementos tendrá el vector\n");
  scanf("%i", &n);
  printf("Ingrese un entero A y un entero B\n");
  scanf("%i %i", &a, &b);
  int v[n];
  printf("Los elementos del arreglo son:\n");
  for(i=0;i<2;i++){
    if(i==0){
      v[i]=a;
    }
    if(i==1){
      v[i]=b;
    }
    printf("%i\t", v[i]);
  }
  for(i=2;i<n;i++){
    if(i%2==0){
      v[i]= v[i-2]+v[i-1];
    }
    if(i%2==1){
      v[i]= v[i-3]-v[i-2];
    }
    printf("%i\t", v[i]);
  }
  return 0;
}