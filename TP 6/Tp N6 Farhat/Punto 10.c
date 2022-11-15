#include <stdio.h>
int main(){
  int n, i, o, N, x;
  printf("Ingrese un numero\n");
  scanf("%i", &n);
  printf("El numero dado es: %i\n", n);
  N=n;
  o=0;
  while(n!=0){
    n=n/10;
    o++;
  }//Obtengo el orden o
  int v[o];
  
  for(i=o-1;i>=0;i--){// Divido el numero en el arreglo
    x=N%10;
    v[i]=x;
    N=N/10;
  }
  //Muestro el arreglo y el orden
  printf("V=\t");
  for(i=0;i<o;i++){
    printf("%i\t", v[i]);
  }
  printf(",orden %i", o);
  return 0;
}