typedef struct Bit Bit;
typedef unsigned char Bit_type;
typedef struct Individu Individu;

#define longIndiv 8 

Individu *creerIndividu();
void insererBit(int bit, Individu *individu);
void afficherIndividu(Individu *individu);
int decoderListe(Individu *individu);
void croiserListe(Individu *i1, Individu *i2);
