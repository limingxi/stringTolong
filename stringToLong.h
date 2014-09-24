#include<iostream>
#include<string>
#include<climits>
using namespace std;


class StoL{
	//trim() is used for erasing all spaces from input
	string trim(string s){
		string res;
		for(unsigned int i=0;i<s.length();i++){
			if(s[i]!=' ')
				res+=s[i];
		}
		return res;
	}
	//return LONG_MIN as a string
	//since LONG_MIN maybe different based on compiler
	//the getMin function should be safe enough to
	//get LONG_MIN
	string getMin(){
		long max=LONG_MAX;
		string res;
		while(max>0){
			int tmp=max%10;
			char p='0'+tmp;
			res=p+res;
			max/=10;
		}
		res="-"+res;
		res[res.length()-1]++;
		return res;
	}
public:
	long stringToLong(string s){
		string val=trim(s);
		//if the user input LONG_MIN, the program can
		//not work well, so check it beforehead.
		if(val==getMin()) return LONG_MIN;
		long res=0;
		bool sign=1;
		if(val[0]=='+'||val[0]=='-'||(val[0]>='0'&&val[0]<='9')){
			unsigned int iter=0;
			if(val[0]=='+'){		
				sign=1;
				iter++;
			}else if(val[0]=='-'){
				sign=0;
				iter++;
			}else{
				iter=iter;
			}
			for(;iter<val.size();iter++){
				if(val[iter]>'9'||val[iter]<'0'){	
					//check for valid
					cout<<"invalid input: "<<s<<endl;
					return 0;
				}
				res*=10;
				res+=val[iter]-'0';
				if(res<0){				
					//out of range if res become less than 0
					cout<<"out of range"<<endl;
					return 0;
				}
			}
		}else{			
			//start with other character will be invalid input
			cout<<"invalid input: "<<s<<endl;
			return 0;
		}
		if(!sign)
			res=-res;
		return res;
	}
};
