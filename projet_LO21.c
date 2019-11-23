#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include "projet_LO21.h"


int main(int argc, char *argv[])
{

srand(time(NULL));

Individu *individu_1 = creerIndividu();
printf("Individu 1 cree\n");
afficherIndividu(individu_1);
printf("\n");
printf("La valeur de la liste est : %d ", decoderListe(individu_1));
printf("\n\n");



Individu *individu_2 = creerIndividu();
printf("Individu 2 cree\n");
afficherIndividu(individu_2);
printf("\n");
printf("La valeur de la liste est : %d ", decoderListe(individu_2));
printf("\n\n");


croiserListe(individu_1, individu_2);
printf("\nIndividu 1 \n");
afficherIndividu(individu_1);
printf("\nIndividu 2 \n");
afficherIndividu(individu_2);


}


struct Bit{

	Bit_type valeur;
	Bit *suivant; 
};

struct Individu{

	Bit *premier;

};



Individu *creerIndividu(){

	Individu *new = malloc(sizeof(*new));

	new->premier=NULL;

	int bit;


	for (int i=0; i<longIndiv;i++){

		bit = rand() % 2;
		insererBit(bit, new);

	}

	return new;
}

void insererBit(int bit, Individu *individu){

	Bit *new = malloc(sizeof(*new));

	if (individu->premier==NULL){
		individu->premier = new;
		new->valeur=bit;
		new->suivant=NULL;
	}else{
		new->valeur = bit;
		new->suivant = individu->premier;
		individu->premier = new;
	}
	

}

void afficherIndividu(Individu *individu){

	Bit *p = individu->premier;

	while (p != NULL){
		printf("%d - ", p->valeur);
		p = p->suivant;
	}

}

int decoderListe(Individu *individu){
	Bit *p = individu->premier;
	int puissance=longIndiv, valeurListe=0;

	while (p != NULL){
		
		if(p->valeur == 1){
			valeurListe = valeurListe + pow(2, puissance);

		}
		puissance -= 1;
		p = p->suivant;
	}

return valeurListe;

}

void croiserListe(Individu *i1, Individu *i2){
int pCroise;
printf("Entrez la valeur de pCroise ->[1-100]: ");
scanf("%d", &pCroise);

Bit *p1 = i1->premier;
Bit *p2 = i2->premier;
Bit *p3;
while (p1 != NULL){
int n = ((rand() % 100) + 1);

if (n<=pCroise){
	p3->valeur = p1->valeur;
	p1->valeur = p2->valeur;
	p2->valeur = p3->valeur;
}

p1 = p1->suivant;
p2 = p2->suivant;

}

}