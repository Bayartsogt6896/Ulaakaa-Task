#include<iostream>

using namespace std;

main(){
	int a,b,c,max;
	cin>>a>>b>>c;
	max=a;
	max=max>=b ? max:b;
	max=max>=c ? max:c;	
	cout<<max;
}
