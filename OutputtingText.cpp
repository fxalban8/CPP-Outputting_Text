#include<iostream> //iostream stands for input-output stream
using namespace std; //std stands for standard

int main(){
	cout<<"Starting the program"<<flush; //flush only flushes the buffer
	cout<<"Printing text"<<endl;	 /*ENDL adds and endline in the printing before 
					 flushing the buffer*/
	cout<<"Adding more text"<<endl;
	cout<<"Fruits "<<"Vegetables \n"<<"Rice"<<" "<<"Potatoes"<<flush;
	/*  It's possible to 
	 print several pieces
	 of text in a single
	 line by using
	multiple chevrons
	 */

	//waiting for the user to press ENTER
        cin.get();


	return 0;
}



