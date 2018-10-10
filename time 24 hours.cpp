#include <iostream>
#include<string>
using namespace std;
int getHour();
int getMin();
void convert();
void displaytime(int hours,int mins);
string getAMorPm();
void finaldisplay(int hours , int mins , string AmorPm);
int main()
{
    convert();
    return 0;
}
//----------------------------------------
void convert()
{
int hours , mins;
string AmorPm;
cout<<"ahllan ya user ya habibi "<<endl;
cout<<"...................."<<endl;
 cout<<"please enter Hours : ";
  hours = getHour();
 cout<<"please enter min   :  ";
 mins = getMin();
cout<<"am || pm  " <<endl;
AmorPm = getAMorPm();
finaldisplay(hours,mins,AmorPm);
if(AmorPm == "PM" || AmorPm== "pm" || AmorPm== "Pm" || AmorPm=="pM" )
    hours+=12;
displaytime(hours, mins);
}
//-----------------------------------------
int getHour()
{
int hr ;
while (true){
cin>>hr;
if (hr<13 && hr>=0)
    break;
}
return hr;
}
//-----------------------------------------
int getMin()
{
int mn;
while(true){
      cin>>mn;
if(mn<61 && mn>=0)
    break;
}
return mn;
}
//-----------------------------------------
string getAMorPm()
{
    string ampm;
while (true){
    cin>>ampm;
    if((ampm=="AM")||(ampm=="Am")||(ampm=="am")||(ampm=="aM")||(ampm=="PM")||(ampm=="pM")||(ampm=="Pm")||(ampm=="pm"))
        break;
    }
    return ampm;
}
//-----------------------------------------
void displaytime(int hours, int mins)
{
    char hzero= ' ';
    char mzero= ' ';
if (hours <10)
    hzero = '0';
if (mins <10){
    mzero = '0';
cout<<"The time is now : "<<hzero<<hours<<mzero<<" : "<<mins<<"  hours"<<endl<<endl;}
cout<<"The time is now : "<<hzero<<hours<<" : "<<mins<<"  hours"<<endl<<endl;
}
//-----------------------------------------
void finaldisplay(int hours, int mins, string AmorPm)
{

}
