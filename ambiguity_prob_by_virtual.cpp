//Sloving the ambiguity problem or diamond problem using scope resolution operator...
#include<iostream>
using namespace std;
class one{
protected:
  int a;
  int b;
public:
  void getdata(){
    cout<<"enter two integers."<<endl;
    cin>>a>>b;
  }
  void display(){
    cout<<"Integers are: "<<a<<" and "<<b<<endl;
  }
};
class two : virtual public one
{
protected:
  char c;
  char d;
public:
  void getdata(){
  //  one :: getdata();
    cout<<"enter two characters."<<endl;
    cin>>c>>d;
  }
  void display(){
  //  one :: display();
    cout<<"Characters are: "<<c<<" and "<<d<<endl;
  }
};
class three : virtual public one
{
protected:
  float e;
  float f;
public:
  void getdata(){
    cout<<"enter two values."<<endl;
    cin>>e>>f;
  }
  void display(){
    cout<<"Values are: "<<e<<" and "<<f<<endl;
  }
};

// scope resolution operator is used to access the particular members of the specific class.
class fourth : public two, public three
{
protected:
  int g;
  int h;
public:
  void getdata(){
    one :: getdata();
   two :: getdata();
   three :: getdata();
    cout<<"enter two integers."<<endl;
    cin>>g>>h;
  }
  void display(){
    one :: display();
    two :: display();
   three :: display();
    cout<<"Integers are: "<<g<<" and "<<h<<endl;
  }
};
int main()
{
  fourth f;
  f.getdata();
  f.display();
  return 0;
}
