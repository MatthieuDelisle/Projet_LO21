#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "projet_LO21.h"


int main(int argc, char *argv[])
{



Individu *individu_1 = creerIndividu();
//Individu *individu_2 = creerIndividu(); ne change pas les valeurs à chaque appel, intervalle de temps trop court
//Individu *individu_3 = creerIndividu();


afficherIndividu(individu_1);
printf("\n");

/* 
afficherIndividu(individu_2);
printf("\n");
afficherIndividu(individu_3);
*/

}

