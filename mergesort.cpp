#include <iostream>
#include <stdio.h>

using namespace std;

long long int merge(int x[],int low,int mid,int high)
{
	int t[100002]={};
	int i;
	int k=0;
	int j=mid;
	i=low;
	while(i<mid&&j<=high)
	{
		if(x[i]<=x[j])
		{
			t[k++]=x[i++];
		}
		else
		{
			t[k++]=x[j++];
		}
	}
	while(i<mid)
	{
		t[k++]=x[i++];
	}
	while(j<=high)
	{
		t[k++]=x[j++];
	}
	for(int i=low;i<=high;i++)
	{
		x[i]=t[i-low];
	}
}
void mergesort(int x[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(x,low,mid);
		mergesort(x,mid+1,high);
		merge(x,low,mid+1,high);
	}
}

int main() 
{
	int x[100002]={};
	int n;
	scanf("%d",&n);

	for(int i=0;i<n;i++)
	{
		scanf("%d",x[i]);
	}
	mergesort(x,0,n-1);
	for(int i=0;i<n;i++)
	{
		printf("%d ",x[i]);
	}
	return 0;
}