#include <stdio.h>
#include "proracun.h"

int main() {
  printf("Sta hoces da radis?\n");
  printf("Unesi 1 da izracunas povrsinu kvadrata.");

  int unos;

  scanf("%d", &unos);
  printf("Uneo si %d.", unos);
  if (unos == 1) {
    printf("Unesi stranicu kvadrata: ");
    double stranica;
    scanf("%lf", &stranica);
    
    double povrsina = izracunaj_povrsinu_kvadrata(stranica);
    printf("Povrsina je %lf.\n", povrsina);
  }
  

  return 0;
}
