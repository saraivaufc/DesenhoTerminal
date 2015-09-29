#include <stdio.h>

int main(){
	printf("Digite o tamanho:");
	int tam;
	scanf("%d",&tam);
	for(int i=0;i<tam;i++)
	{
		for(int k=tam;k>i;k--){
			printf("#");
		}
		printf("\n");
	}
	for(int x=0;x<tam;x++)
	{
		for(int z=0;z<=x;z++)
		{
			printf("#");
		}
		printf("\n");
	}
	
	system("pause");
	return 0;
}
