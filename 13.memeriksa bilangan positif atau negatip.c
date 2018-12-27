#include <stdio.h>

int main(int argc, char const *argv[]) {
  int x;
  printf("program mengetahui bilangan positif atau negatif\n");
  printf("masukan bilangan :");
  scanf("%d",&x );

  if (x>=0) {
    /* code */printf("%d adalah bilangan positif\n\n",x );
  } else {
    /* code */printf("%d adalah bilangan negatif\n\n",x );
  }
  return 0;
}
