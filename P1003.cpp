#include<stdio.h> 
int main()
{
	long long n;
	scanf("%lld",&n);
	long long i[n][4],x,y;
	for(long long a=0;a<n;a++)
	{
		scanf("%lld %lld %lld %lld",&i[a][0],&i[a][1],&i[a][2],&i[a][3]);
	}
	scanf("%lld %lld",&x,&y);
	long long x_max=0,y_max=0;
	for(long long j=0;j<n;j++)
	{
		if((i[j][0]+i[j][2])>x_max)
		{
			x_max=i[j][0]+i[j][2];
		}
		if((i[j][1]+i[j][3])>y_max)
		{
			y_max=i[j][1]+i[j][3];
		}
	}
	
	long long p[x_max+1][y_max+1];
	for(long long a=0;a<=x_max;a++)
	{
		for(long long b=0;b<=y_max;b++)
		{
			p[a][b]=-1;
		}
	}
	
	for(long long j=0;j<n;j++)
	{
		long long a_=i[j][0],b_=i[j][1];
		for(long long x_=0;x_<i[j][2];x_++)
		{
			for(long long y_=0;y_<i[j][3];y_++)
			{
				p[a_+x_][b_+y_]=j+1;
			}
		}
	}
	if(x<0||y<0||(x>x_max)||(y>y_max))printf("-1");
	else printf("%lld",p[x][y]);
	return 0;
 } 
