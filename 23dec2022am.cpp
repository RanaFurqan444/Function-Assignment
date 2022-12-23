#include<iostream>
#include<cmath>
using namespace std;
void sum();
void sub();
void divide();
void multiply();
void rem();
void log();
void sqrt();
 
int main()
   {
	cout<<"Sum= '+' ,Subtraction= '-' ,Divide= '/'"<<endl;
	cout<<"Multiply= '*' ,Reminder= '%' ,Log='l'"<<endl;
	cout<<"Square= 's'"<<endl;
	char o;
	cout<<"Enter the Operator=  ";
	cin>>o;
	if(o=='+')
	sum();
	else if(o=='-')
	sub();
	else if(o=='/')
	divide();
	else if(o=='*')
	multiply();
    else if(o=='%')
	rem();
	else if(o=='l')
	log();
	else if(o=='s')
	sqrt();
    }
	void sum()
{
	int a,b;
	cout<<"Enter the First number= ";
	cin>>a;
	cout<<"Enter the Second number= ";
	cin>>b;
	cout<<"Sum =  "<<a+b;
}

void sub()
{
	int c,d;
	cout<<"Enter the First number= ";
	cin>>c;
	cout<<"Enter the Second number= ";
	cin>>d;
	cout<<"Sub= "<<c-d;
}
void multiply()
{
	int g,h;
	cout<<"Enter the First number= ";
	cin>>g;
	cout<<"Enter the Second number= ";
	cin>>h;
	cout<<"Multiply="<<g*h;
}
void divide()
{
	float e,f;
	cout<<"Enter the First number= ";
	cin>>e;
	cout<<"Enter the Second number= ";
	cin>>f;
	cout<<"Divide="<<e/f;
}
void rem()
{
	int i,j;
	cout<<"Enter the First number= ";
	cin>>i;
	cout<<"Enter the Second number= ";
	cin>>j;
	cout<<"rem="<<i%j;
}
void sqrt()
{
	
	float k;
	cout<<"Enter the number= ";
	cin>>k;
	cout<<"Square root of number= "<<sqrt(k);
}
void log()
{
	float l;
	cout<<"Enter the number=  ";
	cin>>l;
    cout<<"log=   "<<log(l);
}

