#include<stdio.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,val;
		scanf("%d",&n);
		int arr[n],count[1001]={0},temp,res;
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		for(int i=0;i<n;i++)
		{
			if(i!=n-1)
			{
				temp=arr[i+1];
				if(arr[i]==temp)
				{
					count[arr[i]]++;
					i++;
				}
				else
				{
					count[arr[i]]++;
				}
			}
			else
			count[arr[i]]++;
		}
		temp=0;
		for(int i=0;i<1001;i++)
		{
			if(temp<count[i])
			temp=count[i],res=i;
		}
		printf("%d\n",res);
	}
	return 0;
}