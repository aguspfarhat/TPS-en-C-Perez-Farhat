#include <stdio.h>
int main() {
  int n, i, z, x, c;
  printf("Introduzca el tamaño del arreglo\n");
  scanf("%i", &n);
  int v[n];
  for(i=0;i<n;i++){
    v[i]=0;
  }
  c=0;
  while(c!=n){//Repetir hasta cargar n valores
        x=-1;//Ingreso X
        if(x<0 || x>n-1){
            printf("Introduzca el numero X, debe cumplir la siguiente condicion: Estar entre 0 y N-1 y su valor dentro del arreglo debe aún ser cero \n");
            scanf("%i", &x);
          }
      if(x>=0 && x<=n-1 && v[x]==0){//Ingreso Z
        printf("Ingrese un valor Z\n");
        scanf("%i", &z);
        v[x]=z;
        c++;//Agrego al contador, cargue un nuevo valor
      }
      for(i=0;i<n;i++){//Recorro el arreglo y muestro que elementos aún son 0
        if(v[i]==0){
        printf("El elemento %i del arreglo vale 0, introduzca un numero distinto en esa posición\n", i);
        }
      }
  }
  //Mostrar por pantalla el vector
  printf("El vector está cargado por completo. Sus valores son:\n");
  for(i=0;i<n;i++){
    printf("%i\t", v[i]);
  }
  return 0;
}