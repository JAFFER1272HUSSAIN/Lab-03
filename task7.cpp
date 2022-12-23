#include<iostream>
using namespace std;
main()
{
float MB;
float Bits;
float Bytes;
float KB;
cout<< "Enter Bits: ";
cin>> Bits;
Bytes = Bits / 8;
cout<<Bits<<" Bits is equal to: "<<Bytes<<"Bytes"<<endl;
KB = Bytes / 1024;
cout<<Bits<<" Bits is equal to: "<<KB<<"KB"<<endl;
MB = KB / 1024;
cout<<Bits<<" Bits is equal to: "<<MB<<"MB";




}