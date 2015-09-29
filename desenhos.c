#include <stdio.h>

int main(){
	printf("Digite o Tamanho;");
	int tam;
	scanf("%d",&tam);
	for(int i=0;i<tam;i++)
	{
		for(int k=tam;k>i;k--){
			printf("#");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
