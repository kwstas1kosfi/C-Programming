#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main()
{
	int seconds,sms,mb;
	float cost;
	printf("Monnthly seconds : \n");
	scanf("%d",&seconds);
	printf("Amount of sms : \n");
	scanf("%d",&sms);
	printf("Amount of MB : \n");
	scanf("%d",&mb);
	if ((seconds<=60)&&(sms<=30)&&(mb<=200))
	{
		cost=5.5;
	}
	else if ((seconds>60)||(sms>30)||(mb>200))
	{
		if (seconds<=100)
		{
			if (sms>30)
			{
				if (mb>200)
				{ 
					cost=5.5+(seconds-60)*0.01 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (seconds-60)*0.01 + sms*0.02;
				}
			}
			else 
			{
				if (mb>200)
				{
					cost=5.5 + (seconds-60)*0.01 + mb*0.015;
				}
				else
				{
					cost=5.5 + (seconds-60)*0.01;
				}	
			}
		}
		else if (seconds<=200)
		{
			if (sms>30)
			{
				if (mb>200)
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + sms*0.02;
				}
			}
			else 
			{
				if (mb>200)
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + mb*0.015;
				}
				else
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03;
				}
			}
		}
		else
		{
			if (sms>30)
			{
				if (mb>200)
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + (seconds-60-101-201)*0.05 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + (seconds-60-101-201)*0.05 + sms*0.02;
				}
			}
			else
			{
				if(mb>200)
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + (seconds-60-101-201)*0.05 + mb*0.015;
				}
				else 
				{
					cost=5.5 + (seconds-60)*0.01 + (seconds-60-101)*0.03 + (seconds-60-101-201)*0.05;
				}
			}
		}
	}
	char impo;
	printf("If he is an important customer type y if he is not press n\n");
	do{
		scanf("%c",&impo);
		
	}
	while ((impo!='y')&&(impo!='n'));
	if (impo=='y')
	{
		printf("He will have 5 precent discount\n");
		//cost=cost*(0.95);
	}
	printf("When the bill did publich?\n");
	/*int mday,mon,year;
	do{
		scanf("%d",&year);
		if((year!=2023)&&(year!=2022))
		{
			printf("wrong year\n");
		}
	}while((year!=2022)&&(year!=2023));
	do{
		scanf("%d",&mon);
		if((mon<1)||(mon>12))
		{
			printf("wrong month\n");
		}
	}while((mon<1)||(mon>12));
	do{
		scanf("%d",&mday);
		if((mday<1)||(mon>30))
		{
			printf("wrong day\n");
		}
	}while((mday<1)||(mday>30));
	printf("The bill did publish on %d/%d/%d\n",mday,mon,year);*/
	// i wanted to create an input of a given date and 
	// current time -given time<= 10 he will get a discount and he will get some pros 
	//Fuction which shows us the current time
	time_t curtime;
	time(&curtime);
	printf("Published  %s\n", ctime(&curtime));
	printf("You want to pay now? Press y if you dont press n\n");
	char pay;
	do
	{
		scanf("%c",&pay);
	} while ((pay!='y')&&(pay!='n'));
	if((pay=='y')&&(impo=='y'))
	{
		cost=cost*(0.90);
	}
	else if((pay=='n')&&(impo=='y'))
	{
		cost=cost*(0.95);
	}
	else if ((pay=='y')&&(impo=='n'))
	{
		cost=cost*(0.97);
	}	
	
	printf("The cost is %0.2f Euros",cost);
	
	return 0;
}
