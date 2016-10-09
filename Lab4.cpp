#include<iostream>
#include<cstring>
using namespace std;
int flag=0, len=0, x=0, cs;
char str1[50], str2[50], str[50], *s1, *s2, yesno;
void strcpy();
void strcmp();
void strcat();
int strlen(char*);
int choose(int cs);
char again(char yesno);
char reb(char*str);

void strcpy() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	*s1=*s2;
    	cout<<str1[i];
	}  
}

void strcmp() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<50;i++){
    	s1=&str1[i];
    	s2=&str2[i];
    	(int) str1[i];
    	(int) str2[i];
    	if (*s1==*s2) flag+=0;
		else if (*s2<*s1) flag+=1;
		else if (*s2>*s1) flag-=1;
	}
	if (flag==0) cout<<"Equal";
	else if (flag>0) cout<<"Positive";
	else if (flag<0) cout<<"Negative";
}

void strcat() {
	cout<<"\nEnter first string:  ";
	cin.ignore();
    gets(str1);
    cout<<"Enter second string: ";
    gets(str2);
	for(int i=0;i<strlen(str1);i++){
    	s1=&str1[i];
    	cout<<*s1;
	}
	for(int i=0;i<strlen(str2);i++){
    	s2=&str2[i];
    	cout<<*s2;
	}
}

int strlen(char*s1){
	cout<<"\nEnter a string:  ";
	cin.ignore();
    gets(str1);
	while(*s1!='\0') {
		x++;
		s1++;
	}
	cout<<"The length of the string is: "<<x;
	return x;
}

char rev(char*str) {
	cout<<"\nEnter a string: ";
	cin.ignore();
    gets(str);
    cout<<"The reverse is: ";
	len=strlen(str);
	for(int i=len-1;i>=0;i--) {
		cout<<str[i];
	}
}

int choose(int cs) {
	cout<<"Choose A Problem To Be Solve"<<endl<<"1 String Copy"<<endl<<"2 String Compare"<<endl<<"3 String Concatenation"<<endl<<"4 String Length"<<endl<<"5 String Reversing"<<endl;
	cout<<"Choice: ";
	cin>>cs;
	switch(cs) {
		case 1:
			strcpy();
			again(yesno);
			break;
		case 2:
			strcmp();
			again(yesno);
			break;
		case 3:
			strcat();
			again(yesno);
			break;
		case 4:
			strlen(str1);
			again(yesno);
			break;
		case 5:
			rev(str1);
			again(yesno);
			break;
		default:
			break;
	}
	return cs;
}

char again(char yesno) {
	cout<<"\n\nSolve another problem??? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(cs);
	}
	else if (yesno=='n') {
		cout<<"Thanks for using this program :)\n";
	}
	else {
		again(yesno);
	}
	return yesno;
}

main() {
	choose(cs);
}
