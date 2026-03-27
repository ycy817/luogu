#include<stdio.h>
int judge(int x_,int y_,int x,int y,int n,int m)
{
	if (x_ < 0 || x_ > n || y_ < 0 || y_ > m)
        return 1;
	if((x_==x)&&(y_==y)) return 0;
	if((x_==x-2)&&(y_==y+1)) return 0;
	if((x_==x-2)&&(y_==y-1)) return 0;
	if((x_==x+2)&&(y_==y+1)) return 0;	
	if((x_==x+2)&&(y_==y-1)) return 0;
	if((x_==x-1)&&(y_==y+2)) return 0;
	if((x_==x-1)&&(y_==y-2)) return 0;
	if((x_==x+1)&&(y_==y+2)) return 0;
	if((x_==x+1)&&(y_==y-2)) return 0;
	return 1;
}
int main()
{
	int n,m,x,y,x_=0,y_=0;
	scanf("%d %d %d %d",&n,&m,&x,&y); 
	long long p[30][30]={0};
	if(judge(0,0,x,y,n,m)) p[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		if(judge(i,0,x,y,n,m))
		{
	    	p[i][0]=p[i-1][0];
    	}
    }
    for(int j=1;j<=m;j++)
    {
    	if(judge(0,j,x,y,n,m))
    	{
    		p[0][j]=p[0][j-1];
		}
	}
	for(int i=1;i<=n;i++)
	{
		 for(int j=1;j<=m;j++)
		 {
		 	if(judge(i,j,x,y,n,m))
		 	{
		 		p[i][j]=p[i-1][j]+p[i][j-1];
			 }
		 }
	}
	printf("%lld",p[n][m]);
	return 0;
}
