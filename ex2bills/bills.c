#include <stdio.h>
#include <stdlib.h>

int main()
{
	int time,sms,mb;
	float cost;
	printf("Monnthly time : \n");
	scanf("%d",&time);
	printf("Amount of sms : \n");
	scanf("%d",&sms);
	printf("Amount of MB : \n");
	scanf("%d",&mb);
	if ((time<=60)&&(sms<=30)&&(mb<=200))
	{
		cost=5.5;
	}
	else if ((time>60)||(sms>30)||(mb>200))
	{
		if (time<=100)
		{
			if (sms>30)
			{
				if (mb>200)
				{ 
					cost=5.5+(time-60)*0.01 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (time-60)*0.01 + sms*0.02;
				}
			}
			else 
			{
				if (mb>200)
				{
					cost=5.5 + (time-60)*0.01 + mb*0.015;
				}
				else
				{
					cost=5.5 + (time-60)*0.01;
				}	
			}
		}
		else if (time<=200)
		{
			if (sms>30)
			{
				if (mb>200)
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + sms*0.02;
				}
			}
			else 
			{
				if (mb>200)
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + mb*0.015;
				}
				else
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03;
				}
			}
		}
		else
		{
			if (sms>30)
			{
				if (mb>200)
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + (time-60-101-201)*0.05 + sms*0.02 + mb*0.015;
				}
				else
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + (time-60-101-201)*0.05 + sms*0.02;
				}
			}
			else
			{
				if(mb>200)
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + (time-60-101-201)*0.05 + mb*0.015;
				}
				else 
				{
					cost=5.5 + (time-60)*0.01 + (time-60-101)*0.03 + (time-60-101-201)*0.05;
				}
			}
		}
	}

	printf("%f",cost);
	
	return 0;
}
