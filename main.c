#include <stdio.h>

float proffit(int summa_vklada,int srok_vklada);

int main()
{
	int summa,srok;
	printf("enter sum of deposit \n");
	scanf("%i",&summa);
	printf("enter time of deposit \n");
	scanf("%i",&srok);
	if ((summa<10000) || (srok>365) || (srok<=0))
	printf("enter correct data! \n");
    else
	{
	printf("sum at the end of: ");
	printf("%.0f \n",proffit(summa,srok));
	printf("proffit of deposit: ");
	printf("%.0f \n",proffit(summa,srok)-summa);
    }
    return 0;
}

float proffit(int summa_vklada,int srok_vklada){
	float cashback=summa_vklada;
	if(summa_vklada<100000)
	{
	    if ((srok_vklada > 0) && (srok_vklada <= 30)) 
        cashback*=0.9;
        if ((srok_vklada > 30) && (srok_vklada <= 120)) 
        cashback*=1.02;
        if ((srok_vklada > 120) && (srok_vklada <= 240)) 
        cashback*=1.06;
         if ((srok_vklada > 240) && (srok_vklada <= 365)) 
        cashback*=1.12;
    }
	else
	{
		if ((srok_vklada > 0) && (srok_vklada <= 30)) 
        cashback*=0.9;
        if ((srok_vklada > 30) && (srok_vklada <= 120)) 
        cashback*=1.03;
        if ((srok_vklada > 120) && (srok_vklada <= 240)) 
        cashback*=1.08;
         if ((srok_vklada > 240) && (srok_vklada <= 365)) 
        cashback*=1.15;
	}
return cashback;
}
