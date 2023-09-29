//22070123107
#include<iostream>
using namespace std;
int main()
{
    //Taking input of integer,float,character,string,boolean
    int myintvar;
   float myfloatvar;
   char mycharvar;
   string mystrvar;
   bool myboolvar;
   cin>>myintvar;
   cin>>myfloatvar;
   cin>>mycharvar;
   cin>>mystrvar;
   cin>>myboolvar;
    //printing the given variables
    cout<<"Given integer:- "<<myintvar<<"\n";
    cout<<"Given float:- "<<myfloatvar<<"\n";
    cout<<"Given character:- "<<mycharvar<<"\n";
    cout<<"Given string:- "<<mystrvar<<"\n";
    cout<<"Given boolean:- "<<myboolvar<<"\n";   
    //printing size of the given variables
    cout<<"size of integer:- "<<sizeof(myintvar)<<"bytes\n";
    cout<<"size of float:- "<<sizeof(myfloatvar)<<"bytes\n";
    cout<<"size of character:- "<<sizeof(mycharvar)<<"bytes\n";
    cout<<"size of string:- "<<sizeof(mystrvar)<<"bytes\n";
    cout<<"sizez of boolean:- "<<sizeof(myboolvar)<<"bytes\n"; 
}
