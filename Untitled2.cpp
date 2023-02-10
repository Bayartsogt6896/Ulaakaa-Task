#include<iostream>

using namespace std;
//tailbarla
main()
{
	int A[100],i,k=1,n;
	cout<<"n iig oruul: ";
	cin>>n;
	for(i=0;i<n;i++)
	cin>>A[i];
	for(i=1;i<n;i++)
	{
		int y=0;
		for(int j=0;j<k;j++)
		{
			if(A[i]==A[j])
			{
				y=y+1;
				break;
			}
		}
		if(y==0){
		A[k]=A[i];
		k++;
		}
	}
	cout<<k;
}
