#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct ESTUDANTE {
	int le_valida_nota;
	int le_valida_matricula;
	char nome[200];
	float media;
	float notas[4];
};

int menu();
void matricula(char mat);
void nota(float nota);

int main(){

setlocale(LC_ALL, "Portuguese");
struct ESTUDANTE dados[50];
int i, j;
float mediaGeral = 0;

int le_valida_matricula(){
   int mat;
   fflush(stdin);
for(i = 0; i < 50; i++){
	printf("Digite a matr�cula: \n");
    scanf("%d", &dados[i].le_valida_matricula);
    
    printf("Digite o nome: \n");
    fflush(stdin);
    fgets(dados[i].nome, sizeof(dados[i].nome), stdin);
    return mat;
    
    int le_valida_nota(){
    	float nota;
    	fflush(stdin);
	
    for(j = 1; j <= 4; j++){
    	printf("Digite a %d nota: \n", j);
    	scanf("%f", &dados[i].notas[j]);
	}
}
	dados[i].media = (dados[i].notas[1] + dados[i].notas[2] + dados[i].notas[3] + dados[i].notas[4])/4;
	
	printf("____________________________________\n");
	system("pause");
	system("cls");
}	

for(i = 0; i < 10; i++){
	printf("Matr�cula do aluno: %d \n", dados[i].le_valida_matricula);
	printf("Nome do aluno: %s \n", dados[i].nome);

for(j = 1; j <= 4; j++){
	printf("%d nota do aluno: %f \n", j, dados[i].notas[j]);
}
    
    printf("M�dia do aluno: %f \n", dados[i].media);
    printf("_____________________________________\n");
    system("pause");
    
    mediaGeral = mediaGeral + dados[i].media; 
}

mediaGeral = mediaGeral/10;
    printf("A m�dia das m�dias dos alunos: %f", mediaGeral);
	return 0;
}
}
