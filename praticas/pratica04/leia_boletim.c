#include <stdio.h>

int main() {
  int matricula;
  float a1;
  float a2;
  float media;

  scanf("%i %lf %lf %lf", &matricula, &a1, &a2, &media);
  printf("Matricula A1 A2 MEDIA \t %i %lf %lf %lf", matricula, a1, a2, media);
  return 0;
}