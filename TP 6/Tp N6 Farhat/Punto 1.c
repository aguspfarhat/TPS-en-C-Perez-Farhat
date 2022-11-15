#include <stdio.h>
int main(){
  int  n, x, c, i;
  printf("Ingrese un valor de n\n");
  scanf("%i", &n);
  printf("Ingrese un valor de x\n");
  scanf("%i", &x);
  int v[n];
  for(i=0; i<n ; i++){
    printf("Ingrese un valor dentro del arreglo\n");
    scanf("%i", &v[i]);
  }
  c=0;
  for(i=0; i<n ; i++){
    if(v[i] == x){
      c++;
    }
  }
  printf("%i está %i vez/veces en el vector de orden %i", x, c, n);
  return 0;
}