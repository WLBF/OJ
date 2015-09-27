#include <iostream>
#include <cstring>
using namespace std;
struct P{
	int a;
	int b;
	int c;
	void operator =(P& x)
	{
		a=x.a;
		b=x.b;
		c=x.c;
	}
	bool operator <(P& x)
	{
		return a<x.a;
	}
	bool operator >(P& x)
	{
		return a>x.a;
	}
	
};
template <typename T>
void Swap(T& a,T& b)
{
	T x=a;
	a=b;
	b=x;
}
template <typename T>
void quicksort(T a[],int left,int right)
{
	if(left<right){
	int i=left;
	int j=right;
	T x=a[(i+j)/2];
	Swap(a[(i+j)/2],a[j]);
	while(i<j)
	{
		while(i<j&&a[i]>x)
			i++;
		if(i<j)
			a[j--]=a[i];
		while(i<j&&a[j]<x)
			j--;
		if(i<j)
			a[i++]=a[j];
	}
	a[i]=x;
	quicksort(a,left,i-1);
	quicksort(a,i+1,right);
	}
}
int main()
{
	int n,k;
 	P a[50001];
	cin>>n>>k;
	for(int i=0;i<n;i++)
	{
		cin>>a[i].a>>a[i].b;
		a[i].c=i;
	}
	quicksort(a,0,n);
	int max=0;
	int j=-1;
	for(int i=0;i<k;i++)
		if(max<a[i].b)
		{
			max=a[i].b;
			j=a[i].c;
		}
	cout<<j+1<<endl;
	return 0;
}