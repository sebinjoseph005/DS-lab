#include<stdio.h>
void main(){
	int i=0,n,j,small,temp;
	printf("enter the limit");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	i=0;
	while(i<n-1)
	{
		small=i;
		j=i+1;
		while(j<n)
		{
	
			if(a[small]>a[j])
			{
				small=j;
			}
			j++;
		}
		if(i!=small)
		{
			temp=a[i];
			a[i]=a[small];
			a[small]=temp;
		}
		i++;
	}
	printf("the sorted array is\n");
	i=0;
	for(i=0; i<n; i++)
	{
		printf("%d\t",a[i]);
	}
}
		
