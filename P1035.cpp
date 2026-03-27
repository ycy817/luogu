#include<stdio.h>
int main()
{
	double f,S=0.0;
	scanf("%lf",&f);
	int n;
	for(n=1;;n++)
	{
		S=S+1.0/n;
		if(S>f)
		{
			break;	
		}
	}
	printf("%d",n);
	return 0;
 } 
