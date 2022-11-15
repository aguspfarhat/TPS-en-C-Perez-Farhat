#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(){
int n, i, j, len;
  printf("Ingrese la cantidad de cadenas que va a utilizar\n");
  scanf("%i", &n);
  char string[n][30];
    printf("Ingrese %i palabra/s en minúsculas\n", n);
  for(i=0;i<n;i++){
    scanf("%s", string[i]);
  }
  printf("Orden original:\t");
  for(i=0;i<n;i++){
    printf("%s ", string[i]);
  }
  //Metodo de la burbuja para ordenar
  char aux[30];
  for(i=0;i<n;i++){
    for(j=0;j<n-1-i;j++){
      if(strcmp(string[j], string[j+1]) > 0){//Comparo los strings
        //Los triangulo para cambiarlos de lugar
        strcpy(aux, string[j]);
        strcpy(string[j], string[j+1]);
        strcpy(string[j+1], aux);
      }
    }
  }
  for(i=0;i<n;i++){//Pasar a mayúsculas
    len= strlen(string[i]);
    for(j=0;j<len;j++){
      string[i][j]= toupper(string[i][j]);
    }
  }
  printf("\nStrings ordenados alfabeticamente y en mayúsuclas:\t");
   for(i=0;i<n;i++){
    printf("%s ", string[i]);
  }
  return 0;
}