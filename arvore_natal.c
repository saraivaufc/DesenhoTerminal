#include <stdio.h>

int main()
{

	int tam;
	printf("Digite a Altura da sua arvore de natal:");
	scanf("%d",&tam);
	int meio=tam;
	int i=0;
	int k=0;
	int y=0;
	int x1=0,d1=0,z1=0;
	
	while(x1<tam/8)
	{
		d1=0;
		while(d1<tam*2)
		{
			if(d1==tam-(tam/8)){
				z1=0;
				while(z1<tam/4)
				{
					printf("#");
					z1++;
					d1++;
				}
			}else
			{
				printf(" ");
				d1++;
			}
		}
		printf("\n");
		x1++;
	}
	
	//termina a estrela

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
// Aqui é onde termina a parte da arvore...
// Agora vamos fazer as pernas da arvore...

	int x=0,d=0,z=0;
	
	while(x<tam/4)
	{
		d=0;
		while(d<tam*2)
		{
			if(d==tam-(tam/4)){
				z=0;
				while(z<tam/2)
				{
					printf("#");
					z++;
					d++;
				}
			}else
			{
				printf(" ");
				d++;
			}
		}
		printf("\n");
		x++;
	}
	system("pause");
return 0;
}
