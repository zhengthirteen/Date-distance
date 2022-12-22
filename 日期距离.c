#include<stdio.h>
long month(long a)
{
	switch(a)
	{
		case 1:
			return 31;
		case 2:
			return 28;
		case 3:
			return 31;
		case 4:
			return 30;
		case 5:
			return 31;
		case 6:
			return 30;
		case 7:
			return 31;
		case 8:
			return 31;
		case 9:
			return 30;
		case 10:
			return 31;
		case 11:
			return 30;
		case 12:
			return 31;
	}
}
void month_s(long a)
{
	switch(a)
	{
		case 1:
			printf("January");
			return;
		case 2:
			printf("February");
			return;
		case 3:
			printf("March");
			return;
		case 4:
			printf("April");
			return;
		case 5:
			printf("May");
			return;
		case 6:
			printf("June");
			return;
		case 7:
			printf("July");
			return;
		case 8:
			printf("August");
			return;
		case 9:
			printf("September");
			return;
		case 10:
			printf("October");
			return;
		case 11:
			printf("November");
			return;
		case 12:
			printf("December");
			return;
	}
}
int runnian(long a)
{
	if(a%400==0)
	return 1;
	else if(a%4==0&&a%100!=0)
	return 1;
	else
	return 0;
}
int main(void)
{
	long a=0,b=0,c=0;
	scanf("%ld/%ld/%ld",&a,&b,&c);
	if(a==0||a>12)
	{
		month_s(b);
		printf(" %ld, %ld\n",c,a+2000);
	}
	else if(c==0||b>12||c>31)
	{
		month_s(a);
		printf(" %ld, %ld\n",b,c+2000);
	}
	else if((b==4||b==6||b==9||b==11)&&c>=31) 
	{
		month_s(a);
		printf(" %ld, %ld\n",b,c+2000);
	}
	else if(b==2&&c>29)
	{
		month_s(a);
		printf(" %ld, %ld\n",b,c+2000);
	}
	else if((runnian(a+2000))!=1&&b==2&&c==29)
	{
		month_s(a);
		printf(" %ld, %ld\n",b,c+2000);
	}
	else
	{
		long y=0,m=0,d=0;
		if(a>c)
		{
			for(int i=1;i<a-c;i++)
			{
				if(runnian(c+i+2000))
				y=y+366;
				else
				y=y+365;
			}
			for(int i=a;i<=12;i++)
			{
				if(runnian(c+2000)==1&&i==2)
				m=m+month(i)+1;
				else
				m=m+month(i);
			}
			for(int i=1;i<b;i++)
			{
				if(runnian(a+2000)==1&&i==2)
				m=m+month(i)+1;
				else
				m=m+month(i);
			}
			d=y+m+c-b;
		}
		else if(a<c)
		{
			for(int i=1;i<c-a;i++)
			{
				if(runnian(a+i+2000)==1)
				y=y+366;
				else
				y=y+365;
			}
			for(int i=b;i<=12;i++)
			{
				if(runnian(a+2000)==1&&i==2)
				m=m+month(i)+1;
				else
				m=m+month(i);
			}
			for(int i=1;i<a;i++)
			{
				if(runnian(c+2000)==1&&i==2)
				m=m+month(i)+1;
				else
				m=m+month(i);
			}
			d=y+m+b-c;
		}
		else
		{
			if(a>b)
			{
				for(int i=b;i<a;i++)
				{
					if(runnian(a+2000)==1&&i==2)
					m=m+month(i)+1;
					else
					m=m+month(i);
				}
				d=m+b-c;
			}
			else if(a<b)
			{
				for(int i=a;i<b;i++)
				{
					if(runnian(a+2000)==1&&i==2)
					m=m+month(i)+1;
					else
					m=m+month(i);
				}
				d=m+c-b;
			}
			else
			{
				if(b>=c)
				d=b-c;
				else
				d=c-b;
			}
		}
		printf("%ld\n",d);
	}
	return 0;
}
