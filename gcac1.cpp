#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>

using namespace std;

int main()
{
	 int t,n,m;
	
	cin>>t;

	for(int i=0;i<t;i++)
	{
		cin>>n>>m;

	int minS[n],offS[m],maxJ[m],maxJd[m],comIndex=0,gotJ=0,l=0,r=0,e=0,disapp=0;
	long long totS=0,curS=0;

		set<int>c;

		for(int j=0;j<n;j++)
			cin>>minS[j];

		for(int k=0;k<m;k++)
		{
			cin>>offS[k];
			cin>>maxJ[k];

			maxJd[k]=maxJ[k];

		}

		string qual[n];
		for(int q=0;q<n;q++)
			cin>>qual[q];
	
		
			
        

	/*	for(int q=0;q<n;q++)
			{
				for(int p=0;p<m;p++)
					cout<<qual[q][p]<<" ";
				cout<<endl;
			}
	
	*/
			//cout<<n<<m;
		for(int u=0;u<n;u++)
		{
			curS=0;
			comIndex=0;
			for(int v=0;v<m;v++)
			{
				if(qual[u][v]=='1' && offS[v]>=minS[u] && offS[v]>curS && maxJ[v]>0)
				{
					curS=offS[v];
					comIndex=v;
				}
			}

			if(curS>0)
				{
					maxJ[comIndex]--;
					c.insert(comIndex);
					gotJ++;
					totS+=curS;
				}

		}

		

		cout<<gotJ<<" "<<totS<<" "<<m-c.size()<<endl;

	}

	return 0;
}