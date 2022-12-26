#include<stdio.h>
int main ()
{
	int sub1, sub2, sub3, sub4 ,sub5,total;
	float per;
	printf("enter sub1 marks:");
	scanf ("%d",&sub1);
	printf("enter sub2 marks:");
	scanf ("%d",&sub2);
	printf("enter sub3 marks:");
	scanf ("%d",&sub3);
	printf("enter sub4 marks:");
	scanf ("%d",&sub4);
	printf("enter sub5 marks:");
	scanf ("%d",&sub5);
	total= sub1+sub2+sub3+sub4+sub5;
	printf("total:%d\n",total);
	per=(float)total/(float)5;
	printf("percentage:%.2f\n",per);
	
	if (per>=91 && per<=100)
	{
			printf("gread:a1\n");
	}
	else if(per>=81 && per<=90)
	{
		printf("gread:a2\n");
	}
	else if(per>=71 && per<=80)
	{
		printf("gread:b1\n");
	}
else if(per>=61 && per<=70)
	{
		printf("gread:b2\n");
	}
else if(per>=51 && per<=60)
	{
		printf("gread:c1\n");
	}
else if(per>=41 && per<=50)
	{
		printf("gread:c2\n");
	}
	else if (per>=31 && per<=40)
	{
		printf("gread:d1\n");
	}
else if( per>=21 && per<=30)
	{
		printf("gread:d2\n");
	}
else if(per>=0 && per<=20)
	{
		printf("gread:e\n");
	}
else
{
	printf("enter vaild number.......");
	
}
per>33?printf("congratulation.....you are pass"):printf("sorry.you are fail");
return 0;
}

	

