#include<iostream>
#include<iomanip>
#include<cstring>
using namespace std;
int cs;
int choice(int cs);
char again(char yesno);
char yesno;
void problem1();
void problem2();
void problem3();

struct studentrecord
{
int id,q1,q2,q3;
int r;
char n[100];	
};

struct students{
	char name[100];
	int id, q1,q2,q3,r;
};

struct info{
	char fname[50],lname[50];
	int cn,d,m,y,r,tp;
		struct {
		int id,price,q;
		char name[50];	
		}Item;
};

void problem1()
{
	studentrecord s;
	cout << "STUDENT RECORD \n";
	cout << "Enter ID: ";
	cin >> s.id;
	cin.ignore();
	cout << "Name: ";
	cin.getline(s.n,100);
	cout << "Quiz 1: ";
	cin >> s.q1;
	cout << "Quiz 2: ";
	cin >> s.q2;
	cout << "Quiz 3: ";
	cin >> s.q3;
	cout << "\n";
	s.r=(s.q1 + s.q2 + s.q3);
	cout << "\n\n";
	cout << "Student Record " << endl;
	cout << "ID:" <<s.id << endl;
	cout << "Name:" << s.n << endl;
	cout << "Grades:" <<  s.r/3 << setprecision(3) << endl;
	if (s.r<70)
	{
		cout << "Remarks: Failed" << endl;
	}
	else
		cout << "Remarks: Passed" << endl;
}

void problem2()
{
	const char* status[10];
	students s[5];
	cout << "Enter 5 student records " << endl;
	for(int m=0; m<5; m++)
	{
		cout << "Student #: " << m+1 << endl;
		cout << "ID: ";
		cin >> s[m].id;
		cout << "Name: ";
		cin.ignore();
		cin.getline(s[m].name,100);
		cout << "Enter 3 quizzes: ";
		cin >> s[m].q1 >> s[m].q2 >> s[m].q3;
		s[m].r=s[m].q1 + s[m].q2 + s[m].q3;
	}
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
		cout << setw(3) << "No. " << setw(13) << "Student No. " << setw(15) << "Grade " << setw(15) << "Remarks" << endl;
		
	for (int m=0; m<5; m++)
	{
		if (s[m].r/3 < 75)
		{
		status[10] = "FAILED";
		}
		else
		status[10] = "PASSED ";
		cout << m+1;
		cout << setw(10) << s[m].id << setw(18) << s[m].r/3 << setw(19) << status[10] << endl;	
	}
}

void problem3()
{
	info a[5];
	cout << "Enter 3 Customers " << endl;
	for(int i=0; i<3; i++)
	{
		cout << "CUSTOMER INFORMATION " << i+1 << endl;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[i].fname,50);
		cout << "Last name: ";
		cin.getline(a[i].lname,50);
		cout << "Contact No.:";
		cin >> a[i].cn;	
		cout << "Oder Date" << endl;
		cout << "Day: "; 
		cin >> a[i].d;
		cout << "Month:";
		cin >> a[i].m;
		cout << "Year:";
		cin >> a[i].y;
		cout << "Enter 3 items " << endl;
		cout << "ID: ";
		cin >> a[i].Item.id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[i].Item.name,50);
		cout << "Price: ";
		cin >> a[i].Item.price;
		cout << "Quantity: ";
		cin >> a[i].Item.q;
		cout << "ID: ";
		cin >> a[i].Item.id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[i].Item.name,50);
		cout << "Price: ";
		cin >> a[i].Item.price;
		cout << "Quantity: ";
		cin >> a[i].Item.q;
		cout << "ID: ";
		cin >> a[i].Item.id;
		cin.ignore();
		cout << "Name: ";
		cin.getline(a[i].Item.name,50);
		cout << "Price: ";
		cin >> a[i].Item.price;
		cout << "Quantity: ";
		cin >> a[i].Item.q;
			a[i].r=a[i].Item.price*a[i].Item.q;
			a[i].tp=a[i].r + a[i].r + a[i].r;	
	}

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	
	system("cls");
	for (int m=0; m<3; m++)
	{
		if(a[m].tp <1)
		{
			cout << "ERROR";
		}
	cout << "#" << m+1<< endl;
	cout << "Customer Name: " << (a[m].lname) << "," << a[m].fname << endl;
	cout << "Order Date: " <<  a[m].m << "/" <<a[m].d << "/" << a[m].y << endl;
	cout << "Items: " << a[m].Item.name << endl;
	cout << "Price: " << a[m].Item.price << endl;
	cout << "Quantity: " << a[m].Item.q << endl;
	cout << "Total Price: " << a[m].tp << endl;
	cout << "\n\n";
	}
}

int choose(int cs) 
{
	cout<<"Choose A Problem To Be Solve:"<< endl << "1 Student Record"<< endl<<"2 Status"<<endl<<"3 Customer Information"<<endl<<"Choice: ";
	cin>>cs;
	switch(cs) 
	{
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
	} 
			return cs; 
}
			
char again(char yesno) 
{
	cout<<"\n\n Try another one? [y/n] ";
	cin>>yesno;
	if (yesno=='y') {
		system("cls");
		choose(cs);
	}
	else if (yesno=='n') {
		cout<<"Signing off.....  \n";
	}
	else {
		again(yesno);
	}
	return yesno;
}
main () {
	choose(cs);
}
