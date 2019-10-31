/* 
This is the example to show how the use of virtual function can change the output of the program
*/

#include<iostream>
using namespace std;
class A
{
	public:
		void f()
		{
			cout<<"Function f class A"<<endl;
		}
		void h()
		{
			cout<<"Function h class A"<<endl;
		}
		virtual void g()
		{
			cout<<"Function g class A"<<endl;
		}
};
class B: public A
{
	public:
		void f()
		{
			cout<<"function f of class B"<<endl;
		}
		virtual void h()
		{
			cout<<"function h of class B"<<endl;
		}
		void g()
		{
			cout<<"function g of class B"<<endl;
		}
};
class C:public B
{
	public:
		void f()
		{
			cout<<"function f of class c"<<endl;
		}
	    void h()
		{
			cout<<"function h of class c"<<endl;
		}
		void g()
		{
			cout<<"function g of class c"<<endl;
		}
};
int main()
{
	B *q=new C;
	A *p=q;
	p->f();
	p->h();
	p->g();
	q->f();
	q->h();
	q->g();
	return 0;	
}
