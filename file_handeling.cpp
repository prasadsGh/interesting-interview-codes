/*

files are used to store data permenentaly 
and 

stream is an abstraction that represents the device 
on which input and output is performed 

data types-->
ofstream 
ifstream
fstream
(basically this are classed whose objects are the one 
which we are gonna use)

ofstream-->
output files stream, this are used to 
create files and write on it 

ifstream-->
input files stream
used to read information from files 

fstream-->
capability of both ifstream and ofstream 


*/

#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string a; 
    getline(cin,a);

    //if file is present then text is written in it,
    //otherwise it will create one file for it 

    ofstream myfile("one.txt");
    /*
        to append each new line one after another 
        ofstream myfile("one.txt",ios::app);
    */
    
    myfile<<a;
    myfile.close();

    // now how to read from the file 

    ifstream obj("one.txt");
    string ans="";
    getline(obj,ans);
    cout<<ans<<endl;
}