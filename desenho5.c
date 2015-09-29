#include <stdio.h>
#include <math.h>

int main(){
	printf("Digite o tamanho da figura:");
	int tam;
	scanf("%d",&tam);
	if(tam%2==0)
	{
       tam++;
	}
	int tam2=tam;
	int metade=(tam/2);
	int meio=metade;
	int meio2=meio;
	int teste=1;
	int teste2=1; 
	int gambi=1;
	int gambi2=1;
	int tamanho=tam;
	int tamanho2=tam;
	int temp2;
	
	for(int i=0;i<tam;i++)
	{
		if(teste==0)
		{
			if(i<=((int)tamanho/4))
			{
				gambi=gambi+2;
			}else
				gambi=gambi-2;
		}
		
		teste=0;
		
		for(int k=0;k<=tam*2;k++)
		{
			if(k==i)
				printf("\\");
			else
			if(k==tam+2)
				printf("/");
			
			if(k==metade+1)
			 
			{
				for(temp2=0;temp2<gambi;temp2++)
				{
					printf("#");
					k++;
				}
			}
				printf(" ");
		}
		if(i<((int)(tamanho)/4))
		{
			metade--;
		}else
		{
			metade++;
			
		}
		
		tam--;
		printf("\n");
	}




//Aqui termina a parte de cima
	int c=0;
	int temp3;
	for(int a=1;a<=tam2/2;a++)
	{
		if(teste2==0)
		{
			if(a<=((int)tamanho2/4))
			{
				gambi2=gambi2+2;
			}else
				gambi2=gambi2-2;
		}
		teste2=0;
		for(int b=0;b<tam2;b++)
		{
			
			if(b==meio2+1)
			{
				printf("/");
				b++;
			}

			if(b==meio+2)
			{
				for(temp3=0;temp3<gambi2;temp3++)
				{
					printf("#");
					b++;
				}
				if(c==0)
				{
					printf("\\");
					b++;
				}else
				{
					for(int j=0;j<=(a-meio2);j++){
						printf(" ");
					}
					printf("\\");
				}
			}else
				printf(" ");
		}
		meio2--;
		if(a<((int)tamanho2/4))
		{
			meio--;
		}else
		{
			c=1;
			meio++;
			
		}
		printf("\n");
	}
	
	return 0;
}
