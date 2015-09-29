#include <stdio.h>

int main()
{
	int tam;
	printf("Digite a Altura da sua arvore de natal:");
	scanf("%d",&tam);
	tam=tam/2;
	int meio=tam;
	int i=0;
	int k=0;
	int y=0;
	while(i<tam)
	{
		k=0;
		while(k<=tam)
		{
			if(k==meio)
			{
				y=0;
				while(y<=(i*2))
				{
					printf("#");
					y++;
					k++;
				}
			}else
			{
				printf(" ");
				k++;
			}
		}
		printf("\n");
		meio--;
		i++;
	}
	tam=tam*2;
	int temp=tam/2,coluna;
	for(int linha=1;linha<=temp;linha++)
	{
		coluna=0;
		while(coluna<tam)
		{
			while(coluna<linha){
				printf(" ");
				coluna++;
			}
			printf("#");
			coluna++;
		}
		printf("\n");
		tam--;
	}
	return 0;
}
