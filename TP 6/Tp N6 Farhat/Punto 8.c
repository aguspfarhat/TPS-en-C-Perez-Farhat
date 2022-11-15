#include <stdio.h>

int main() {
  int x, n, i, aux;
  printf("Ingrese la cantidad de elementos en el vector\n");
  scanf("%i", &n);
  int v[n];
  //Cargo el vector
  for(i=0;i<n;i++){
  printf("Ingrese un valor dentro del vector\n");
  scanf("%i", &x);
  v[i]=x;
  }
  //Lo muestro
  printf("El vector es:\n");
  for(i=0;i<n;i++){
  printf("%i\t",v[i]);
  }
  //Lo muestro invertido
    printf("\nEl vector invertido es:\n");
    for(i=n-1;i!=-1;i--){
      printf("%i\t",v[i]);
      }
  return 0;
}