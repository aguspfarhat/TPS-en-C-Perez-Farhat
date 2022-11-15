#include <stdio.h>

int main() {
  int n, c, i, num;
  printf("Ingrese la cantidad de elementos que tendrá el arreglo\n");
  scanf("%i", &n);
  printf("Ingrese el valor de C\n");
  scanf("%i", &c);
  int x[n];
  num=1;
  for(i=0;i<n;i++){
    printf("Ingrese un numero dentro del arreglo\n");
    scanf("%i", &x[i]);
  }
  for(i=0;i<n;i++){
    num*=(x[i]-c);
  }
  printf("El numero que se forma es: %i", num);
  return 0;
}