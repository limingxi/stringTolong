#include"stringToLong.h"

using namespace std;

//main program for test


int main(int argc, char* argv[]){
	StoL solver;
	cout<<"*****************************************************"<<endl;
	cout<<"This is a program for testing"<<endl;
	cout<<"The program can delete all the spaces from the input,"<<endl;
	cout<<" and you can use '+' or '-' at the beginning of input"<<endl;
	cout<<"Any other characters will be treated as invalid input"<<endl;
	cout<<"please input the string within the range:"<<endl;
	cout<<"["<<LONG_MIN<<","<<LONG_MAX<<"]"<<endl;
	cout<<"input length should not be larger than 30"<<endl;
	cout<<"input q for termination."<<endl;
	cout<<"*****************************************************"<<endl;
	while(1){
		string s;
		cout<<"please input: ";
		getline(cin,s);
		if(s=="q")
			return 0;
		if(s.length()>30){
			cout<<"input length should not be larger than 30"<<endl;
			continue;
		}
		long res=solver.stringToLong(s);
		cout<<"The result is: "<<res<<endl;
	}
	return 0;
}

