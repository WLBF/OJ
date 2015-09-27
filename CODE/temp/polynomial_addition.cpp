#include <iostream>
//#include <fstream>
using namespace std;
//ofstream out("out.txt");
struct Node{
int a;
int b;
Node* next;
Node(const int a,const int b,Node* p=NULL):a(a),b(b),next(p){}
};
class Link{
Node* head;
int len;
public:
Link():head(),len(0){}
~Link(){clear();}
int size()
{
return len;
}
Node*& getptr(const int a)
{
if(head==NULL||a>=head->b)
return head;
Node* p=head;
while(p->next&&p->next->b>a)
p=p->next;
return p->next;
}
void insert(int a,int b)
{
Node*& p=getptr(b);
if(p==NULL||b!=p->b){
Node* q=new Node(a,b,p);
p=q;
len++;
}
else
{
p->a+=a;
}
}
void clear()
{
Node* p;
while(head)
{
p=head;
head=head->next;
delete p;
}
len=0;
}
void travel()
{
Node* p=head;
for(int i=0;i<len-1;i++)
{
cout<<"[ "<<p->a<<' '<<p->b<<" ] ";
p=p->next;
}
cout<<"[ "<<p->a<<' '<<p->b<<" ]"<<endl;
}
void add(Link& a,Link& b)
{
Node* p=a.head;
Node* q=b.head;
while(p&&q)
{
if(p->b==q->b)
{
if((p->a+q->a)!=0)
insert(p->a+q->a,p->b);
p=p->next;
q=q->next;
}
else if(p->b>q->b)
{
if(p->a!=0)
insert(p->a,p->b);
p=p->next;
}
else
{
if(q->a!=0)
insert(q->a,q->b);
q=q->next;


}
}
while(p)
{
if(p->a!=0)
insert(p->a,p->b);
p=p->next;
}
while(q)
{
if(q->a!=0)
insert(q->a,q->b);
q=q->next;
}
}
};
int main()
{
Link a,b,c;
int n,x,y;
//ifstream in("in1.txt");
cin>>n;
while(n--)
{
while(cin>>x>>y)
{
if(y<0)
break;
a.insert(x,y);
}
while(cin>>x>>y)
{
if(y<0)
break;
b.insert(x,y);
}
c.add(a,b);
c.travel();
a.clear();
b.clear();
c.clear();
}
return 0;
}

