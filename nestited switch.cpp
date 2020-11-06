#include<iostream>
using namespace std;
int main(void)
{
first:	
system("COLOR red");
float num1,num2,result;
char ch;
cout<<"Enter a first number:";
cin>>num1;	
cout<<"Enter a character:";
cin>>ch;
cout<<"Enter a second number:";
cin>>num2;
switch(ch)
{
case '+':
result=num1+num2;
cout<<"The sum of two number is = "<<result;
int num3,num4,result;
char y,m;
cout<<"\nDo you want to take modulus (y/n):";
cin>>y;
if(y=='y' || y=='Y')
{
cout<<"Enter a first number for modulus:";
cin>>num3;
cout<<"Enter a character for modulus:";
cin>>m;
cout<<"Enter the second number for modulus:";
cin>>num4;
switch(m)
{
case '%':
result=num3%num4;
cout<<"The reaminder is = "<<result;
break;
}
}
else
{
char x;
cout<<"Do you want to close this program (y/n):";
cin>>x;
while(true)
{
if(x=='y' || x=='y')
{
break;
}
else
{
goto first;
}
}
}
break;
case '-':
result=num1-num2;
cout<<"The minus of two number is = "<<result;
int num5,num6,result1;
char s,w;
cout<<"\nDo you want to take modulus (y/n):";
cin>>s;
if(y=='y' || y=='Y')
{
cout<<"Enter a first number for modulus:";
cin>>num5;
cout<<"Enter a character for modulus:";
cin>>w;
cout<<"Enter the second number for modulus:";
cin>>num6;
switch(w)
{
case '%':
result1=num5%num6;
cout<<"The reaminder is = "<<result1;
break;
}
}
else
{
char x;
cout<<"Do you want to close this program (y/n):";
cin>>x;
while(true)
{
if(x=='y' || x=='y')
{
break;
}
else
{
goto first;
}
}
}
break;
case '*':
result=num1*num2;
cout<<"The multiply of two number is = "<<result;
int num7,num8,result2;
char t,o;
cout<<"\nDo you want to take modulus (y/n):";
cin>>t;
if(t=='y' || t=='Y')
{
cout<<"Enter a first number for modulus:";
cin>>num7;
cout<<"Enter a character for modulus:";
cin>>o;
cout<<"Enter the second number for modulus:";
cin>>num8;
switch(o)
{
case '%':
result2=num3%num4;
cout<<"The reaminder is = "<<result2;
break;
}
}
else
{
char x;
cout<<"Do you want to close this program (y/n):";
cin>>x;
while(true)
{
if(x=='y' || x=='y')
{
break;
}
else
{
goto first;
}
}
}
break;
case '/':
result=num1/num2;
cout<<"The division of two number is = "<<result;
int num9,num10,result3;
char g,h;
cout<<"\nDo you want to take modulus (y/n):";
cin>>g;
if(g=='y' || g=='Y')
{
cout<<"Enter a first number for modulus:";
cin>>num3;
cout<<"Enter a character for modulus:";
cin>>h;
cout<<"Enter the second number for modulus:";
cin>>num4;
switch(h)
{
case '%':
result3=num3%num4;
cout<<"The reaminder is = "<<result3;
break;
}
}
else
{
char x;
cout<<"Do you want to close this program (y/n):";
cin>>x;
while(true)
{
if(x=='y' || x=='y')
{
break;
}
else
{
goto first;
}
}
}
break;	
}	
return 0;
}
