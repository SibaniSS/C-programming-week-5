# include<stdio.h>
int main()
{
	int n,i,ele,count=0;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to find");
	scanf("%d",&ele);
	for(i=0;i<n;i++)
	{
		if (ele==arr[i])
		{
			count=count+1;
		}
	}
	printf("The number %d occurs %d times",ele,count);
}
