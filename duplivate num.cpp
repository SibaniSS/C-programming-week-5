# include<stdio.h>
int main()
{
	int n,i,z,j,c,t;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n],a[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if (arr[i]==arr[j])
			{ 
			  printf("%d ",arr[j]);
			  break;
			}
		}
	}
}
