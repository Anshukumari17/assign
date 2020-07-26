#include<stdio.h>
void binarySearch(int L[],int N,int item);

void main()
{
	int A[]={10,20,30,40,50,60};
	int item=40;
	binarySearch(A,6,item);
	getch();
	
}
void binarySearch(int L[],int N,int item)
{
int l=0,u=N-1,m;
while(l<=u)
{
m=l+u/2;
if(item==L[m])
{
	printf("SEARCH SUCCESFULL at index %d,ITEM FOUND",m);
	return;
}
else if(item>L[m])
	l=m+1;
else
	u=m-1;
}
printf("SEARCH UNSUCCESFULL");
}
