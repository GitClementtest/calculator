#include<stdio.h> //Contient les fctns printf et scanf

//Déclaration des variables + initialisation
int choix=5;
int op1=0;
int op2=0; //par défaut les opérandes sont égales à 0

int main(){


#include <stdio.h>

while(1){


	printf("Quelle opération souhaitez-vous faire? Addition taper 1, multiplication taper 2\n");		
	scanf("%d",&choix);


	if(choix==1){

	printf("Entrez la première opérande\n");
	scanf("%d",&op1);

	printf("Entrez la seconde opérande\n");
	scanf("%d",&op2);


	printf("%d \n",op1+op2);


	}
	else if(choix==2){


	printf("\n");

	printf("Entrez la première opérande\n");
	scanf("%d",&op1);

	printf("Entrez la seconde opérande\n");
	scanf("%d",&op2);


	printf("%d \n",op1*op2);

	}

	else {

	printf("Recommencer\n");

	}

}

return 0;
}
