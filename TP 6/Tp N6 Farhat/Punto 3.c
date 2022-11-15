#include <stdio.h>
int main(){
  int n, pos, i, val;
  pos=0;
  val=0;
  printf("Ingrese el orden del vector\n");
  scanf("%i",&n);
  int v[n];
  for(i=0;i<n;i++){
    printf("Ingrese un valor dentro del vector\n");
    scanf("%i",&v[i]);
  }
  for(i=0;i<n;i++){
    if(v[i]>val){
      val=v[i];
      pos=i+1;
    }
  }
  printf("El elemento mayor es %i y está en la posición %i", val, pos);
  return 0;
}