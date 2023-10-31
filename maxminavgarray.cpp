# include<stdio.h>
int main()
{
	int n,i;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	int max=arr[0],min=arr[0],sum;
	float avg;
	for(i=0;i<n;i++)
	{
		if (arr[i]>max)
		max=arr[i];}
	for(i=0;i<n;i++)
	{
		if (arr[i]<min)
		min=arr[i];}
	for(i=0;i<n;i++)
	{
		sum=sum+arr[i];
	}
	
	printf("The maximum element is %d\n",max);
	printf("The minimum element is %d\n",min);
	avg=sum/n;
	printf("The average is %d\n",avg);
}
