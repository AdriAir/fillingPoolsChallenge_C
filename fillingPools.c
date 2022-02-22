#include <stdio.h>
#include <math.h>

int c1, c2;
float p1, b1, l1, p2, b2, l2;
double v1, v2;

main()
	{
	do
	{
		fflush (stdin);
		scanf("%f %f %f %f %f %f", &p1, &b1, &l1, &p2, &b2, &l2);
		v1=p1/(b1-l1);
		v2=p2/(b2-l2);
		if (p1==0,b1==0,l1==0,p2==0,b2==0,l2==0)
		{
			return 0;
		}
	} while (p1<1||p1>1000000000||b1<1||b1>1000000000||p2<1||p2>1000000000||b2<1||b2>1000000000);
		c1=ceil(v1);
		c2=ceil(v2);
		
		if (c1<c2)
		{
			printf ("\nYO %d", c1);
		}
		else if (c2<c1)
		{
			printf ("\nVECINO %d", c2);
		}
		else
		{
			printf ("\nEMPATE %d", c1);
		}
	}
	
	
