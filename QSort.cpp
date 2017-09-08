#include <stdio.h>

void swap(int a[],int i,int j)
{
	int temp;

	temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

int Partition(int a[],int l,int r)
{
	int i,j;

	int p=a[l];

	i=l+1;
	for(j=l+1;j<=r;j++)
	{
		if(a[j]<p)
		{
			swap(a,i,j);
			i++;
		}

	}

	swap(a,i-1,l);

	return (i-1);
}


void QSort(int a[],int l,int r)
{
	int p;
	if(l<r)
	{
		
		p=Partition(a,l,r);
		QSort(a,l,p-1);
		QSort(a,p+1,r);

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

	QSort(a,0,n-1);

	for(i=0;i<n;i++)
		printf("%d ",a[i]);
}