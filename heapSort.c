
#include<stdio.h>
void heapify(int arr[],int size,int index);
void swap(int arr[],int i,int j);
void heapSort(int arr[],int size);
int main()
{
int a[]
int n=6,i;
for(i=(n/2)-1;i>=0;i--)
heapify(arr,n,i);
for(i=0;i<n;i++)
printf("%d\n",arr[i]);
}
void heapify(int arr[],int size,int index)
{
int left=2*index+1;
int right=left+1;
int max_index=index;
if(arr[max_index]<arr[left])
max_index=left;
if(arr[max_index]<arr[right])
max_index=right;
if(max_index!=index)
{
swap(arr,index,max_index);
heapify(arr,size,max_index);
}
}
void heapSort(int arr[],int size)
{
int i;
for(i=(size/2)-1;i>=0;i--)
heapify(arr,size,i);
for(i=n-1;i>0;i--)
{
swap(arr,0,i);
heapify(arr,i,0);
}
}
void swap(int arr[],int i,int j)
{
	int temp;
	temp=arr[i];
	arr[i]=arr[j];
	arr[j]=temp;
}
	

