#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>

using namespace std;
class DNA{
public:
	string data;int code;
	DNA(){};
	DNA(string source){
		data=source;code=0;
		int len=source.size();
		for(int i=0;i<len;i++){
			for(int j=i+1;j<len;j++){
				if(source[i]>source[j])code++;
			}
		}
	}
	DNA& operator=(const DNA& n){
		code=n.code;
		data=n.data;
		return *this;
	}
	friend bool comp(const DNA& a,const DNA& b);
	friend ostream& operator<<(ostream& os,const DNA& n);
};
bool comp(const DNA& a,const DNA& b){
	return a.code<b.code;
}
ostream& operator<<(ostream& os,const DNA& n){
	os<<n.data;
	return os;
}
int main(){
    int n,m;
    cin>>n>>m;
    string str;DNA D[m];
	for (int i=0;i<m;i++){
		cin>>str;
		DNA temp(str);
		D[i]=temp;
	}
	sort(D,D+m,comp);
	for (int i=0;i<m;i++){
		cout<<D[i]<<endl;
	}
    return 0;
}
