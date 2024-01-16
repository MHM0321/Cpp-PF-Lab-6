#include<iostream>
using namespace std;
int main()
{double totalcal,totalfat,calinfat, cal_perc;
cout<<"Enter total calories in food"<<endl;
cin>>totalcal;
if(totalcal<0)
{cout<<"Invalid input";
return 0;}
else
{cout<<"Total calories in food are : "<<totalcal<<endl;}
cout<<"Enter total fat in food"<<endl;
cin>>totalfat;
if(totalfat<0)
{cout<<"Invalid input";
return 0;}
else
{cout<<"Total fat in food are : "<<totalfat<<endl;}

calinfat = totalfat*9;
if(calinfat>totalcal)
{cout<<"Error, try again"<<endl;}

cal_perc = (calinfat/totalcal) * 100;
cout<<"Percentage : "<<cal_perc<<"%"<<endl;

if(cal_perc<30)
{cout<<"the food is low in fat"<<endl;}

system("pause");
return 0;
}