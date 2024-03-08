#include<stdio.h>
#include<malloc.h>

typedef struct
{
	int *anFabricatie;
	char* marca;
	float consumMediu;
} masina;

typedef struct
{
	masina inf; 
	struct nodLS* next;
} nodLS;

nodLS* inserareNod(nodLS* cap, masina m)
{
	nodLS* nou = (nodLS*)malloc(sizeof(nodLS));
	nou->inf.anFabricatie = (int*)malloc(sizeof(int));
	*(nou->inf.anFabricatie) = *(m.anFabricatie);
	nou->inf.marca = (char*)malloc((strlen(m.marca) + 1) *
		sizeof(char));
	strcpy(nou->inf.marca, m.marca);
	nou->inf.consumMediu = m.consumMediu;
	nou->next = NULL;

	if (cap == NULL)
		cap = nou;
	else
	{
		nodLS* temp = cap;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = nou;
	}
	return cap;
}

void traversareLista(nodLS* cap)
{
	nodLS* temp = cap;
	while (temp != NULL)
	{

		printf("\nAn fabricatie = %d, Marca = %s, Consum mediu = %5.2f",
			*(temp->inf.anFabricatie), temp->inf.marca, temp->inf.consumMediu);
		temp = temp->next; 
	}
}

void dezalocareLS(nodLS* cap)
{
	nodLS* temp = cap;
	while (temp != NULL)
	{
		nodLS* aux = temp->next;
		free(temp->inf.marca);
		free(temp->inf.anFabricatie);
		free(temp);
		temp = aux;
	}
}


			vect[*nrElem] = temp->inf;
			(*nrElem)++;
		}
		temp = temp->next;
	}
}

void main()
{

}
