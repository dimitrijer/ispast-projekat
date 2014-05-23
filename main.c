#include <stdio.h>
#include "proracun.h"

int main() {
  printf("Sta hoces da radis?\n");
  printf("Unesi 1 da izracunas povrsinu kvadrata.");
  printf("Unesi 2 da izracunas povrsinu kruga.");

  int unos;

  scanf("%d", &unos);
  printf("Uneo si %d.", unos);
  switch(unos) {
  case 1:

    printf("Unesi stranicu kvadrata: ");
    double stranica;
    scanf("%lf", &stranica);
    
    double povrsina = izracunaj_povrsinu_kvadrata(stranica);
    printf("Povrsina je %lf.\n", povrsina);
    break;
  case 2:
    printf("Unesi precnik kruga:: ");
    double precnik;
    scanf("%lf", &precnik);
    double povrsina = izracunaj_povrsinu_kruga(precnik);
    printf("Povrsina je %lf.\n", povrsina);
    break;  
  }
  
  

  return 0;
}
