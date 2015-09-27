#include <iostream>
#include <map>
#include <cmath>
#include <sstream>
#include <iomanip>
using namespace std;

struct three{
	int first;
	int second;
	int third;
};
double dis(three& a,three& b)
{
	return sqrt((a.first-b.first)*(a.first-b.first)+(a.second-b.second)*(a.second-b.second)+(a.third-b.third)*(a.third-b.third));
}
class myless
{
public:
	bool operator()(double a,double b)
	{
		return a>b;
	}

};
int main()
{
	multimap<double,string,myless> a;
	int n;
	three s[10];
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>s[i].first>>s[i].second>>s[i].third;
	for(int i=0;i<n;i++)
		for(int j=i+1;j<n;j++)
		{
			string d;
			ostringstream oss(d);
			oss<<'('<<s[i].first<<','<<s[i].second<<','<<s[i].third<<")-("<<s[j].first<<','<<s[j].second<<','<<s[j].third<<")=";
			a.insert(multimap<double,string>::value_type(dis(s[i],s[j]),oss.str()));
		}
	multimap<double,string>::iterator it,ie;
	it=a.begin();
	ie=a.end();
	while(it!=ie)
	{
		cout<<it->second<<fixed<<setprecision(2)<<it->first<<endl;
		it++;
	}
}
