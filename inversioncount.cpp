#include <iostream>
#include <stdio.h>

using namespace std;

long long int merge(int x[],int low,int mid,int high)
{
	int t[100002]={};
	long long int inv=0,i;
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
			inv+=mid-i;
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
	return inv;
}
long long int mergesort(int x[],int low,int high)
{
	long long int inv=0;
	if(low<high)
	{
		int mid=(low+high)/2;
		inv=mergesort(x,low,mid);
		inv+=mergesort(x,mid+1,high);
		inv+=merge(x,low,mid+1,high);
	}
	return in;
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

	printf("Inversion Count: %lld",mergesort(x,0,n-1));

	return 0;
}