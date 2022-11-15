#include <stdio.h>
int main(){
  int n, i, x, c, z;
  printf("Ingrese la cantidad de elementos del vector\n");
  scanf("%i", &n);
  int v[n];
  c=0;
  for(i=0;i<n;i++){//Cargar el vector V
    printf("Ingrese un elemento en el vector V\n");
    scanf("%i", &x);
    v[i]=x;
  } 
  for(i=0;i<n;i++){//Contar cuantos elementos son 0
    if(v[i]==0){
      c++;
    }
  }
  //Creo vector w con c elementos
  int w[c];
  //Los iguales a 0 los añado al vector w
  for(z=0;z<c;z++){
    i=0;
    while(i<n){
      if(v[i]==0){
        w[z]=i+1;
        z++;
      }
      i++;
    }
  }
  printf("El vector V \n");
  for(i=0;i<n;i++){//Muestro el vector v
    printf("%i\t", v[i]); 
  }
  printf("\nEl vector W \n");
  for(z=0;z<c;z++){//Muestro el vector w
    printf("%i\t", w[z]); 
  }
  return 0;
}