#include<iostream>

using namespace std;

main()
{
	int A[100],n,i,y=0;
	float k=0;
	cin>>n;   
	for(i=0;i<n;i++)
	scanf("%d",&A[i]);
	for(i=0;i<n;i++){
		if(A[i]%2!=0)
		{
			k=k+A[i];
			y++;
		}
	}
	k=k/float(y);
	cout<<k;
}
