#include<stdio.h>
void linearSearch(int L[],int size,int item);
void main()
{
int a[100];
int i,size,n;
clrscr();
printf("Enter the size of array: ");
scanf("%d",&size);
printf("Element of array\n: ");
for(i=0;i<size;i++)
	scanf("%d",&a[i]);
printf("Enter the item to search: ");
scanf("%d",&n);
linearSearch(a,size,n);
getch();
}
void linearSearch(int L[],int size,int item)
{
int flag=1,i;
for(i=0;i<=size;i++)
if(L[i]==item)
{
flag=0;
printf("SEARCH SUCESSFULLY");
}
if(flag==1)
printf("SEARCH UNSUCESSFULLY");
}


