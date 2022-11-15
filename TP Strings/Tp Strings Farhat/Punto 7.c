#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main (){
  int i, len;
  char n1[25];
  char n2[25];
  char a[25];
  printf("Ingrese dos nombres y un apellido(todo en minúsculas)\n");
  scanf("%s %s %s", n1, n2, a);
  printf("Ingresaste: %s %s %s\n", n1, n2, a);
  a[0]=toupper(a[0]);
  n1[0]=toupper(n1[0]);
  n2[0]=toupper(n2[0]);
  printf("Tranformado: %s-%s-%s ", a, n1, n2);
  return 0;
}