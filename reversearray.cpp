# include<stdio.h>
int main()
{
	int n,i,t;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int num=n;
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		t=arr[i];
		arr[i]=arr[n-1];   
		arr[n-1]=t;
		n--;
		
	}
	printf("Now the elements of array in sorted form is ");
	for(i=0;i<num;i++)
	{
		printf("%d ",arr[i]);
	}
}
	
