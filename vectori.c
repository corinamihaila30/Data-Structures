#include<stdio.h>
#include<malloc.h>
#include <string.h>

// vector - traversare, inserare, stergere, citire din consola
// + desen lista, logica lista -> flow. Schema logica.. Cum stii tu
// De facut o structura de produs cu atribute normale, cu descriere de tip char  si afisat
// De schimbat atributele normale in pointeri si afisat din nou
// La inceput le pui niste valori standard tu, hardcodate, apoi citesti de la consola valorile pentru produs si faci 3
// produse

typedef struct {
	int* cod;
	char* den;
	float pret;
	float cant;
} produs;


void citireVector(produs* vp, int nr) {
	char buffer[100];
	for (int i = 0; i < nr; i++) {
		printf("Codul este: ");
		vp[i].cod = (int*)malloc(1*sizeof(int));
		scanf("%d", vp[i].cod);
		printf("Denumirea este: ");
		vp[i].den = (char*)malloc((sizeof(buffer) + 1)*sizeof(char));
		strcpy(vp[i].den, buffer);
		printf("Pretul este:");
		scanf("%f", &vp[i].pret);
		printf("Cantitatea este: ");
		scanf("%f", &vp[i].cant);
	
	}
};
void stergere(produs* vp,int nr){
    for (int i =0;i<nr;i++){
        free(vp[i].cod);
        free(vp[i].den);
    }
};

void afisare(produs* vp, int nr){
    for (int i=0;i<nr;i++){
        printf("\n Cod = %d, Denumire= %s, pret=%2.5f, Cantitatea=%2.5f", 
        *vp[i].cod, vp[i].den, vp[i].pret, vp[i].cant);
    };
};

//void inserareVector(produs* vp,int nr){
//    new prod =malloc(sizeof(produs));
//    char buffer[20];
//};


typedef struct{
    int cod;
    char descriere[20];
    float pret;
    float cantitate;
} produs1;

void citireStructura(produs1* p, int nr){
    for (int i=0;i<nr;i++){
    printf("Codul este: %d\n", p[i].cod);
    printf("descriere este: %s\n", p[i].descriere);
    printf("Pretul este: %2.2f\n",p[i].pret);
    printf("cantitate este: %2.2f\n",p[i].cantitate);}
};

typedef struct{
    int cod;
    char descriere[20];
    float pret;
    float cantitate;
} produs2;

void citireStructura2(produs2* p, int nr){
    for (int i=0;i<nr;i++){
        printf("Codul este: ");
        scanf("%d", &p[i].cod);
        printf("descriere este:");
        scanf("%s", p[i].descriere);
        printf("Pretul este: ");
        scanf("%f", &p[i].pret);
        printf("Cantitatea este: ");
		scanf("%f", &p[i].cantitate);
    };
};


void main(){
    produs1 ob1[3] = {
        {1, "Laptop", 2500.0, 10.5},
        {2, "Telefon", 1500.0, 15.0},
        {3, "Tableta", 1000.0, 8.0}
    };
    produs1 ob2[3];
    
    citireStructura(ob1,3);
    citireStructura2(ob2,3);
};
