/*

exception handeling is mechanism where the transfer of
control from one 
part of the program to another part of the program 

this makes the error handeling code make separate from 
actual functionality of the program 

three keywords are there for the exception handeling 
try 
catch 
throw 

example - opening a file which does not exist 
giving unsuitable input to the code 

try-->

 a block of code which can cause exception is written inside try 
 it is followed by one or more catch block 
 if an exception occurs it is thrown 

 catch--> 
 this block catches the exception thrown from try block 
 code to handle exception is written inside this block 

 throw-->
 the program throws an exception when problem shows up 
 this is done using throw keyword 

 NOTE--> every try block should have corresponding catch block
 A single try can have multiple multiple catch blocks 


*/

/*
	    --> Exception is any normal behaviour, runtime error
	    --> Using Exception Handling, a programmer can respond and manage RTEs actively


	    try, throw and catch
	        --> Program statements that you want to monitor for exceptions are contained in a try block
	        --> If any exception occurs within the try block, it is thrown using throw
	        --> The exception is caught using catch and then processed

	    IMP Points:
	        1. try and catch will always be together (Both of them have to exist else no one must exist)
	        2. throw can be present independently (It will not cause CE but will cause RTE)
*/

#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int result=0;
    try
    {
      if(b==0) throw b;
      result=(a/b); 
    }
    catch(int e)
    {
        cout<<"cannot be divided by zero\n";

    }
    cout<<result<<endl;

}