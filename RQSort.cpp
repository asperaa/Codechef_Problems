#include <bits/stdc++.h>

using namespace std;

void swap(int a[],int i,int j)
{
	int temp;

	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

int ChoosePivot(int a[],int l,int r)
{
	srand(time(NULL));

	int len=r-l+1;
	int p=l+rand()%len;

	return p;
}

int Partition(int a[],int l,int r,int p)
{
	int i,j;

	int el=a[p];

	swap(a,l,p);

	i=l+1;

	for(j=i;j<=r;j++)
	{
		if(a[j]<el)
		{
			swap(a,i,j);
			i++;
		}
	}

	swap(a,l,i-1);

	return (i-1);
}


void RQSort(int a[],int l,int r)
{
	int p,t;
	if(l<r)
	{
		p=ChoosePivot(a,l,r);
		t=Partition(a,l,r,p);

		RQSort(a,l,t-1);
		RQSort(a,t+1,r);
	}
}


int main()
{
	int n,i;
	scanf("%d",&n);

	int a[n];

	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);

	}

	RQSort(a,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);

}