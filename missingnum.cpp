# include<stdio.h>
int main()
{
	int n,i,reqsum,sum=0,num;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	reqsum=((n+1)*(n+2))/2;
	num=reqsum-sum;
	printf("%d ",num);
}
