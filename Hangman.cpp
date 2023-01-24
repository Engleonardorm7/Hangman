#include <iostream>
#include <windows.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	


cout<<"   _    _                                         "<<endl;
cout<<"  | |  | |                                        "<<endl;
cout<<"  | |__| | __ _ _ __   __ _ _ __ ___   __ _ _ __  "<<endl;
cout<<"  |  __  |/ _` | '_ \ / _` | '_ ` _ \ / _` | '_ \ "<<endl;
cout<<"  | |  | | (_| | | | | (_| | | | | | | (_| | | | |"<<endl;
cout<<"  |_|  |_|\__,_|_| |_|\__, |_| |_| |_|\__,_|_| |_|"<<endl;
cout<<"                       __/ |                      "<<endl;
cout<<"                      |___/                       "<<endl;

Sleep(1000);

//cin>> a;
system("cls");


string guess[5]={"h","e","l","l","o"};//is the word to guess
string a = "_";
string b = "_";
string c = "_";
string d = "_";
string e = "_";
string userTry="";
int lives=6;
int score=0;
int w=0;

while(w==0){

cout<<"type a letter"<<endl;
cin>>userTry;

if(userTry==guess[0]||userTry==guess[1]||userTry==guess[2]||userTry==guess[3]||userTry==guess[4]){
	system("cls");
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Correct"<<endl;

		if(userTry==guess[0]){
			a=guess[0];
			score=score+1;
			guess[0]="0";	
		}
			if(userTry==guess[1]){
			b=guess[1];
			score=score+1;
			guess[1]="0";	
		}
			if(userTry==guess[2]){
			c=guess[2];
			score=score+1;
			guess[2]="0";	
		}
			if(userTry==guess[3]){
			d=guess[3];
			score=score+1;
			guess[3]="0";	
		}
			if(userTry==guess[4]){
			e=guess[4];
			score=score+1;
			guess[4]="0";	
		}
		
	
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<lives<<"  lives left"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;	
}else{
	system("cls");
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<"Incorrect"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
		cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<endl;
		cout<<" "<<endl;
		cout<<" "<<endl;
	lives=lives-1;
	cout<<lives<<"  lives left"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
}
if(lives<=0){
	system("cls");
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" 					Y O U   L O S T"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;


  w=1;                                                                 
}
if(score==5){
		system("cls");
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" 					Y O U   WIN"<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;
	cout<<" "<<endl;


  w=1;  
	
}

}
	return 0;
}
