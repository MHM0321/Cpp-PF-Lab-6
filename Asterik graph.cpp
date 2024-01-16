#include<iostream>
using namespace std;
int main()
{int s1, s2, s3, s4, s5;
cout<<"Enter today's sales for store 1 : "<<endl;
cin>>s1;
cout<<"Enter today's sales for store 2 : "<<endl;
cin>>s2;
cout<<"Enter today's sales for store 3 : "<<endl;
cin>>s3;
cout<<"Enter today's sales for store 4 : "<<endl;
cin>>s4;
cout<<"Enter today's sales for store 5 : "<<endl;
cin>>s5;
cout<<"store 1 :";
for(s1 ;s1>0;s1=s1-100)
{cout<<"*";}
cout<<endl;
cout<<"store 2 :";
for(s2 ;s2>0;s2=s2-100)
{cout<<"*";}
cout<<endl;
cout<<"store 3 :";
for(s3 ;s3>0;s3=s3-100)
{cout<<"*";}
cout<<endl;
cout<<"store 4 :";
for(s4 ;s4>0;s4=s4-100)
{cout<<"*";}
cout<<endl;
cout<<"store 5 :";
for(s5 ;s5>0;s5=s5-100)
{cout<<"*";}
cout<<endl;
system("pause");
return 0;
}