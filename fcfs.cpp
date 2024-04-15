#include<stdio.h>
#include<stdlib.h>

int main()
{
	int RQ[100],i,n,TotalHeadMoment=0,inital;
	printf("Ener the number of request :- ");
	scanf("%d",&n);
	printf("Enter the request sequence\n");
	for(i=0;i<n;i++)
	scanf("%d",&RQ[i]);
	printf("Enter inital head postion\n");
	scanf("%d",&inital);
	for(i=0;i<n;i++)
	{
		TotalHeadMoment=TotalHeadMoment+abs(RQ[i]-inital);
		inital=RQ[i];
	}
	printf("total head moment is %d",TotalHeadMoment);
	return 0;
}