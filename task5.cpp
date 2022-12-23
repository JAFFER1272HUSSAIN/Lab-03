#include<iostream>
using namespace std;
main ()
{
int time;
float charge,current;
cout<<"Enter time: "<<endl;
cin>>time;
cout<<"Enter charge: "<<endl;
cin>>charge;
current = charge / time;
cout<<"Current is: "<<current;
}