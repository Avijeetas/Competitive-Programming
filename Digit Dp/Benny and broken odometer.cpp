#include<bits/stdc++.h>
using namespace std;
char nm[20];
int dp[20][2][2],len=0;

int solve(int pos,int tight,int st)
{
	if(pos==len)
	{
		if(st)
			return 1;
		else return 0;
	}
	else if(dp[pos][tight][st]!=-1)
		return dp[pos][tight][st];
	else
	{	int rs=0;
		int lm=tight? nm[pos]-'0':9;
		for(int i=0;i<=lm;i++)
		{
			int nw=nm[pos]-'0';
			int nwtig=(nw==i);
			
			rs+=solve(pos+1,nwtig&& tight ,st|(i==3));
	
		}
		dp[pos][tight][st]=rs;
		return rs;
	}
}
int num()
{
	int res=0;
	for(int i=0;i<len;i++)
	{
		res=res*10+(nm[i]-'0');

	}
	return res;
}

int work()
{

	int rs=num();
	return rs-solve(0,1,0);
}

int main()
{


	int n,t,cs=1;
	scanf("%d",&t);
	while(t--)
	{	
			int x,y;
			scanf("%s",nm);
			memset(dp,-1,sizeof dp);
//			nm.clear();
			len=strlen(nm);
			printf("%d\n",work());
	}
}