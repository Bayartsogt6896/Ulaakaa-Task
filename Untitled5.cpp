#include<iostream>

using namespace std;

main()
{
	int A[100],n,i;
	int k=0;
    cin>>n;         
	for(i=0;i<n;i++)
	cin>>A[i];
	cout<<"ehnii 10n ahnhnii toonuud:";
	for(i=0;i<n;i++)
	{
		if(A[i]>1)
		{
		int y=0;
		for(int j=2;j<A[i];j++)
		{
			if(A[i]%j==0)
			{
				y++;
				break;
			}
		}
		if(y==0)
		{
		    cout<<" "<<A[i];
			k++;
			if(k==10)
			break;
		}
	    }	
	}
}
