#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main()
{
	string a;
	int n;
	cin>>n;
	getchar();
	while(n--)
	{
		getline(cin,a);
		for(int i=0;i<a.length();i++)
		{
			if(a[i]>='a'&&a[i]<='y')
				a[i]++;
			else if(a[i]>='A'&&a[i]<='Y')
				a[i]++;
			else if(a[i]=='z')
				a[i]='a';
			else if(a[i]=='Z')
				a[i]='A';
		}
		for(int i=0;i<a.length();i++)
			cout<<a[i];
		cout<<endl;
	}
	
	return 0;
}