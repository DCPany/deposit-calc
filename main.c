#include <stdio.h>

int proffit(int summa_vklada,int srok_vklada);

int main()
{
	int summa,srok;
	printf("enter sum of deposit \n");
	scanf("%i",summa);
	printf("enter time of deposit \n");
	scanf("%i",srok);
	if ((summa<10000) || (srok>365) || (srok<=0))
	printf("enter correct data! \n");
    else
	{
		printf("sum at the end of: ");
        printf("%i",proffit(summa,srok));
    }
    return 0;
}
