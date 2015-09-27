#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main()
{
	int a[401];
	string x,y;
	cin>>x>>y;
	memset(a,0,sizeof(a));
	for(int i=0;i<x.length();i++)
		for(int j=0;j<y.length();j++)
			a[i+j+1]+=(x[i]-'0')*(y[j]-'0');
	for(int i=x.length()+y.length()-1;i>0;i--)
	{
		a[i-1]+=a[i]/10;
		a[i]=a[i]%10;
	}
	int i=0;
	while(a[i]==0)
		i++;
	for(;i<x.length()+y.length();i++)
		cout<<a[i];
	cout<<endl;
	return 0;
}
