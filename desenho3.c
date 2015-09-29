#include <stdio.h>

int main()
{
	printf("Digite o tamanho da figura:");
	int tam;
	scanf("%d",&tam);
	int meio=tam/2;
	int gambi=0;
	for(int i=0;i<(tam-4)/2;i++)
	{
		for(int k=1;k<=tam;k++)
		{
			if(k==meio)
			{
				for(int x=0;x<=gambi;x++)//<=gambi
				{
					printf(" ");
					k++;
				}
			}else printf("#");
		}
		gambi=gambi+2;
		meio--;
		if(i!=tam-2){
			printf("\n");
		}
	}
	//aqui é onde termina a parte de cima
	int gambi2=tam;
	int gambi3=tam;
	for(int z=1;z<tam-1;z++)
	{
		for(int q=0;q<tam;q++)
		{
			if(q==z)
			{
				while(q<tam-2)
				{
					printf(" ");
					q++;
				}
				gambi2=gambi3;
				while(gambi2>tam)
				{
					printf("#");
					gambi2--;
				}
			}else
			printf("#");
		}
		printf("\n");
		tam--;
	}
	
	return 0;
}
