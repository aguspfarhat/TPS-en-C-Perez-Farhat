#include <stdio.h>
int main(){
  int n, i, j, k;
  printf("Ingrese un numero par de elementos para el vector\n");
  scanf("%i", &n);
  int v[n];
  for(i=0;i<n;i++){
    printf("Ingrese un elemento dentro del arreglo\n");
    scanf("%i", &v[i]);
  }
  int v1[n], v2[n];
  for(j=0;j<n/2;j++){//Cargo en el subvector si I es par
    i=0;
    while(i<n){
     if(i%2==0){
       v1[j]=v[i];
       j++;
       }
      i++;
     }
    }
  for(k=0;k<n/2;k++){//Cargo en el subvector si I es impar
    i=0;
    while(i<n){
     if(i%2==1){
       v2[k]=v[i];
       k++;
       }
      i++;
     }
    }
    //Muestro por pantalla
  printf("El vector completo:\n");
    for(i=0;i<n;i++){
      printf("%i\t", v[i]);
    }
  printf("\nEl subvector uno(indices pares):\n");
    for(j=0;j<n/2;j++){
      printf("%i\t", v1[j]);
    }
      printf("\nEl subvector dos(indices impares):\n");
    for(k=0;k<n/2;k++){
      printf("%i\t", v2[k]);
    }
  return 0;
}