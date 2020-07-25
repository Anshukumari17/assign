
#include<stdio.h>
#include<stdlib.h>
void merge(int arr[],int s1,int e1,int s2,int e2);
void copy(int arr[],int i,int j,int temp[]);
void mergeSortRecursive(int arr[],int i,int j);
void mergeSort(int arr[],int size);
int main()
{
int arr[]={6,1,5,2,8,3,0,9};
int i;
mergeSort(arr,8);
for(i=0;i<8;i++)
printf("%d\n",arr[i]);
return 0;
}
void mergeSortRecursive(int arr[],int i,int j)
{
if(i>=j)
return;
int mid=(i+j)/2;
mergeSortRecursive(arr,i,mid);
mergeSortRecursive(arr,mid,j);
merge(arr,i,mid,mid+1,j);
}
void merge(int arr[],int s1,int e1,int s2,int e2)
{
int i=s1;
int j=s2,k=0;
int *tempArr=(int*)malloc(sizeof(int)*(e2-s1+1));
while(i<=s1 && j<=s2)
{
if(arr[i]<arr[j])
temp[k++]=arr[i++];
else 
temp[k++]=arr[j++];
}
while(i<=e1)
temp[k++]=arr[i++];
while(j<=e2)
temp[k++]=arr[j++];
copy(arr,s1,e,tempArr);
}
void copy(int arr[],int i,int j,int temp[])
{
int k=0;
while(i<=j)
arr[i++]=temp[k++];
}






