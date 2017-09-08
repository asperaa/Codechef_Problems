    #include <iostream>
    #include <algorithm>
    #include <cmath>
     
    using namespace std;
     
  /*  void mover(long long int a[],int n,int d,int i,int sign)
    {
    	if(sign==1)
    	{
    		a[i]+=1;
    		a[i+d]-=1;
    	}
     
    	else if(sign==0)
    	{
    		a[i]-=1;
    		a[i+d]+=1;
    	}
    }
   */  
     
    int main()
    {
    	long long int t=0,i=0,j=0,r=0,q=0,c=0,k=0,sum=0,temp=0;
    	cin>>t;
     
    	long long int n=0,d=0;
     
    	for(i=0;i<t;i++)
    	{
    		r=0;
    		q=0;
    		c=0;
    		sum=0;
    		
     
    		cin>>n>>d;
     
    		long long int a[n];
     
    		for(k=0;k<n;k++)
    		{
    			cin>>a[k];
    			sum+=a[k];
    		}
     
     
    		r=sum%n;
    		q=sum/n;
     
    //		cout<<q<<endl;
            if(r==0)
            {    
    		for(j=0;j<n-d;j++)
    		{
    			if(a[j]<q)
    			{
    			     temp=q-a[j];
                     c+=temp;

                     a[j]+=temp;
                     a[j+d]-=temp;
    			}
     
    			else if(a[j]>q)
    			{
    				temp=a[j]-q;
    				c+=temp;

                    a[j]-=temp;
                    a[j+d]+=temp;
    			}
     
    			//cout<<c<<endl;
     
    		}
     
            }
    		if(r!=0 || count(a,a+n,q)!=n)
    			{
    				cout<<-1<<endl;
                }
    		
    	   	else 
    			{
    				cout<<c<<endl;
    				
    			}		
    			
    	}
     
    	return 0;
    } 