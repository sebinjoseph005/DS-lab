#include<stdio.h>
void main()
{
	int n,i,x,count=0,a[100],t=0;
	t+2;
	printf("enter the number of array: ");
	scanf("%d",&n);
	t++;
	printf("enter the elements: ");
	t++;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		t++;
	}
	printf("enter the search element: ");
	t++;
	scanf("%d",&x);
	t++;
	for(i=0;i<n;i++)
	{
		if(a[i]==x)
		{
		        count++;
		} 
	}	
		if(count>0){
                       printf("item is found at %d ",count);
                       t++;}
		else{
			printf("item is not found");
			t++;}
			printf("\nspace complexity=%d",(4*4)+(4*n));
			printf("\ntime complexity=%d",t);
}		

		
