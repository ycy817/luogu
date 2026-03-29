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
	
	for(long long j=n-1;j>=0;j--)
	{
		long long a=i[j][0];
		long long b=i[j][1];
		long long g=i[j][2];
		long long k=i[j][3];
		if(x>=a&&x<=a+g&&y>=b&&y<=b+k)
		{
			printf("%lld",j+1);
			return 0;
		}
	 } 
	 printf("-1");
	return 0;
 } 
