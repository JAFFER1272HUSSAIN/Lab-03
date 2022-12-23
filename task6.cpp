#include<iostream>
using namespace std;
main()
{
string name;
float matric;
float intermediate;
float ecat;
float matric_percentage;
float intermediate_percentage;
float ecat_percentage;
float aggregate;
cout<<"Enter Your Name: ";
cin>>name;
cout << "Enter Your Matric Marks: ";
cin>>matric;
cout<<"Enter Your Intermediate Marks: ";
cin>>intermediate;
cout<<"Enter Your ecat Marks: ";
cin>>ecat;
matric_percentage=(matric/1100)*25;
intermediate_percentage=(intermediate/1100)*45;
ecat_percentage=(ecat/400)*30;
aggregate=matric_percentage+intermediate_percentage+ecat_percentage;
cout<<"------------------------------------------"<<endl;
cout<<"Name: "<<name<<endl;
cout<<"Your Aggregate is: "<<aggregate;


}