#include<iostream>
#include<string.h>
using namespace std;
char str1[100], str2[200], word[100], yesno;
int n, flag, cs;
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
int choose(int cs);
char again(char yesno);

void problem1() {
	cout<<"STRING COMPARE"<<endl;
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	if(strcmp(str1,str2)==0) cout<<"equal =)\n";
	else if(strcmp(str1,str2)>0) cout<<"positive +_+\n";
	else if(strcmp(str1,str2)<0) cout<<"negative -.-\n";
}

void problem2() {
	cout<<"STRING COPY"<<endl;
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcpy(str1, str2);
}

void problem3() {
	cout<<"STRING CONCATENATION"<<endl;
	cin.ignore();
	cout<<"Enter a first word (str1): ";
	gets(str1);
	cout<<"Enter second word  (str2): ";
	gets(str2);
	cout<<"New string value for str1: "<<strcat(str1, str2);
}

void problem4() {
	cout<<"PALINDROME"<<endl;
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	n=strlen(word);
	for(int i=0;i<n;i++) {
		if(word[i]!=word[n-(i+1)]) flag=0;
		else flag=1;
    }
    if (flag==1) cout<<"The word "<<word<<" is a palindrome.";
    else if (flag==0) cout<<"The word "<<word<<" is NOT a palindrome.";
}

void problem5() {
	cout<<"CAPITALIZATION"<<endl;
	cin.ignore();
	cout<<"Enter a word: ";
	gets(word);
	strlwr(word);
	word[0]-=32;
	for(int i=0;i<strlen(word);i++) {
		if(word[i]==32) word[i+1]-=32;
	}
	cout<<word<<endl;
}

void problem6() {
	cout<<"REVERSE VERTICAL ORDER"<<endl;
	cin.ignore();
	cout<<"Enter a phrase: ";
	gets(word);
	n=strlen(word);
	for(int i=n;i>=0;i--) {
		if (word[i]==32) {
			int j=i+1;
			while(word[j]!=32&&j<n) {
				cout<<word[j];
				j++;
			}
			cout<<endl;
		}
	}
	int k=0;
	while(word[k]!=32) {
		cout<<word[k];
		k++;
	}
}

int choose(int cs) {
	cout<<"Choose A Problem To Be Solve: 1-6"<<endl;
	cin>>cs;
	switch(cs) {
		case 1:
			problem1();
			again(yesno);
			break;
		case 2:
			problem2();
			again(yesno);
			break;
		case 3:
			problem3();
			again(yesno);
			break;
		case 4:
			problem4();
			again(yesno);
			break;
		case 5:
			problem5();
			again(yesno);
			break;
		case 6:
			problem6();
			again(yesno);
			break;
		default:
			break;
	}
	return cs;
}

char again(char yesno) {
	cout<<"Solve another problem? [y/n] ";
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
