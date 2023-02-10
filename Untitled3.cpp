#include<iostream>

using namespace std;

main()
{
	int A[100],n,i,k=0;
	cin>>n;  
	for(i=0;i<n;i++)
	cin>>A[i];
	for(i=0;i<n;i++){
		if(A[i]%2==0)
		k++;
	}
	cout<<k;
}
