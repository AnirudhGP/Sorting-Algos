#include <iostream>
#include <stdio.h>
using namespace std;

void inssort(int a[],int n)
{
	for(int i=1;i<n;i++)
	{
		int temp=a[i];
		int j;
		for(j=i-1;j>=0;j--)
		{
			if(a[j]>temp)	
			{
				a[j+1]=a[j];
			}
			else	
			{
				break;
			}
		}		
		arr[j+1]=temp;
	}

}

int main()
{
	int a[100002]={};
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	inssort(a,n);
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}