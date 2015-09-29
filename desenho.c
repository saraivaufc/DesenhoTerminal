#include <stdio.h>

int main()
{
	int tam;
	int i=0,k=0;
	printf("Digite o tamanho do seu Triangulo:");
	scanf("%d",&tam);
	
	while(i<tam)
	{
		k=0;
		while(k<=i)
		{
			printf("#");
			k++;
		}
		printf("\n");
		i++;
	}
return 0;
}

