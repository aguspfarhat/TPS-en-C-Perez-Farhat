#include <stdio.h>

int main() {
  int n, i, c;
  printf("Ingrese la cantidad de elementos que tendrá el vector\n");
  scanf("%i", &n);
  printf("Los valores dentro del arreglo son:\n");
  int v[n];
  c=n-1;
  for(i=0;i<n;i++){
    v[i]=n+c;
    printf("%i\t",v[i]);
    c--;
  }
  return 0;
}