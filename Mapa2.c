//Algoritmo 2 - MAPA Algoritmos e Lógica de Programação II
//Professores: Rafael Florindo e João Messias
//Descrição: Cria uma matriz referente a um mês de vendas de uma empresa de automóveis, 
//também preenche e exibe esta matriz.
//Autor: Rafael Rodrigues de Souza
//Data: 29/06/2019

#include<stdio.h>
#include<string.h>

#define semana 4
#define dia 6
//const int semana = 4;
//const int dia = 6;
float Data[semana][dia];
int i, j;
float valor, valorTotal = 0;
int totalVendas = 0;


int PreencheMatriz(){
	int x, y;
	system("cls");
	printf("INSERINDO UM VALOR EM UM DIA DO MES\n\n");
	printf("Digite a semana: ");
	scanf("%d", &x);
	while(x > semana){
		printf("\nValor incorreto, digite novamente a semana: ");
		scanf("%d",&x);	
	}
	
	printf("\nAgora digite o dia desta semana: ");
	scanf("%d", &y);
	while(y > dia){
		printf("\nValor incorreto, digite novamente o dia: ");
		scanf("%d",&y);	
	}
	
	printf("\nDigite o valor das vendas deste dia: ");
	scanf("%f",&valor);
	
	totalVendas = 1 + totalVendas;
	valorTotal = valor + valorTotal;
	Data[x][y] = valor;
	
	printf("\nValor inserido com sucesso!\nDia %d da semana %d: R$ %.2f\n", y, x, Data[x][y]);
	//main();
}

void ExibeMes(){
	system("cls");
	printf("\tEXIBINDO O MES\n\n");
	for(i=1; i<5; i++){
		printf("%da semana",i);
		for(j=1; j<7; j++){
			printf("\t%.2f ", Data[i][j]);
		}
		printf("\n\n");
	}
}

int ExibeMedia(){
	float media = 0;
	
	media = valorTotal / totalVendas;
	printf("\nA media de vendas deste mes ate agora eh: R$ %.2f\n", media);
	system("pause");
	system("cls");
}

int main(){
	int opcao = 1;
	for(i=0; i<5; i++){
		for(j=0; j<7; j++){
			Data[i][j] = 0;
		}
	}
	
	do{
		printf("\n\nEscolha uma opcao e digite seu respectivo numero: \n\n1 - Para inserir valor de vendas em um dia;\n2 - Para exibir os valores de vendas no mes;\n3 - Para exibir a media de vendas;\n4 - Para sair:\n\n");
		scanf("%d",&opcao);
		if (opcao > 4 || opcao < 1){
			printf("\nNumero incorreto!\nPor favor tente novamente:\n\n");
			system("pause");
			system("cls");
		}
		switch (opcao){
			case 1: PreencheMatriz();
			break;
			case 2: ExibeMes();
			break;
			case 3: ExibeMedia();
			break;
		}
		
		
	}while(opcao != 4);
	
	return 0;
}

