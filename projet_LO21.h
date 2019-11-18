typedef struct Bit Bit;
typedef unsigned char Bit_type;
typedef struct Individu Individu;

#define longIndiv 8 

Individu *creerIndividu();
void insererBit(int bit, Individu *individu);
void afficherIndividu(Individu *individu);

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
	int maxbit = 1;
	srand(time(NULL));


	for (int i=0; i<longIndiv;i++){

		bit = (rand() % (maxbit + 1));
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

