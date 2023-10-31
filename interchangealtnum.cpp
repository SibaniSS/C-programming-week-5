# include<stdio.h>
int main()
{
	int n,i,t;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if (i%2==0)
		{
			t=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=t;
		}
	}
	printf("Now the elements of array in sorted form is ");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}
	
