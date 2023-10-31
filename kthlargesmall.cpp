# include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("How many elements u want in array?");
	scanf("%d",&n);
	int arr[n];
	for( i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(arr[j+1]<arr[j])
			{
				t=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=t;
			}
		}
	}
	int k;
	printf("Enter value of k");
	scanf("%d",&k);
	printf("kth smallest number is %d and the kth largest number is %d ",arr[k-1],arr[n-k]);
		
	
	
	

}
