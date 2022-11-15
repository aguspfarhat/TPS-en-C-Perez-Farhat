#include <stdio.h>
int main(){
  int ksqr, n, i, m;
  float x, k;
  printf("Ingrese la cantidad de elementos que tendrá el arreglo\n");
  scanf("%i", &n);
  printf("Ingrese el valor del numero entero K\n");
  scanf("%f", &k);
  float v[n];
  m=1;
  x=k;
  ksqr= k*k;
  printf("Los valores dentro del arreglo son:\n");
  for(i=0;i<n;i++){
    x=k*m;
    if(x>ksqr){
      x/=k;
    }
    v[i]=x;
    printf("%f\t", v[i]);
    m++;
  }
  return 0;
}