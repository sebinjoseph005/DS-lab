#include<stdio.h>
void main(){
	int n,x,i,j,a[50],temp;
	printf("enter the size of the array:\n");
	scanf("%d",&n);
	printf("enter the element: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		temp=a[i];
		j=i-1;
		while(j>=0&& temp<a[j])
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("enter the sorted element:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
	
