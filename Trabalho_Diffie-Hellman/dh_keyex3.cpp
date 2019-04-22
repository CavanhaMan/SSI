#include<conio.h>
#include<iostream.h>
#include<math.h>

int alice(int,int,int);
int bob(int,int,int);

void main()
{
 long int g,x,y,a,b,k1,k2,n;
 clrscr();

 cout<<"\n\t Enter value of n & g";
 cin>>n>>g;

 cout<<"\n\t Enter value of x & y";
 cin>>x>>y;

 a=alice(n,g,x);
 cout<<"\n\t alice end value:"<<a;

 b=bob(n,g,y);
 cout<<"\n\t bob end value:"<<b;

 k1=alice(n,b,x);
 cout<<"\n\t valueof k1 :"<<k1;

 k2=alice(n,a,y);
 cout<<"\n\t valueof k2 :"<<k2;

 getch();
}

int alice(int n,int g,int x)
{
 long int a,a1;
 a1=pow(g,x);
 a=a1%n;
 return(a);
}

int bob(int n,int g,int y)
{
 long int b,b1,k2,t2;
 b1=pow(g,y);
 b=b1%n;
 return(b);
}

