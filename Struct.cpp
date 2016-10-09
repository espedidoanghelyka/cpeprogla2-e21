#include <iostream>
#include <iomanip>
using namespace std;

char ans, p;
float grade;
void problem1();
void problem2();
void problem3();
int choice(int d);


void problem1(){
struct Name{
       char fullName[100];
};

struct Student{
       int id;
       Name name;
       double quiz[3]; 
       double sum;
	   double average;      
};

void newLine();

    Student stud;
    cout << "Enter Student Record: \n";
    cout << "ID: ";
    cin >> stud.id;
    newLine();
    cout << "Name: ";
    cin.getline(stud.name.fullName, 99);
    for(int i=0; i<3; i++){
            cout << "Quiz "<< i+1 << ": ";
            cin >> stud.quiz[i];        
    }
    
    cout << "\n\n";
    cout << "Student Record\n";
    cout << "ID: " << stud.id << endl;
    cout << "Name: " << stud.name.fullName << endl;
    for(int i=0; i<3; i++){       
            stud.sum+=stud.quiz[i];
    }
    stud.average=stud.sum/3;
    
    if (stud.average>=75)
    {
    	cout << "Grades: " << stud.average << endl;
		cout << "Remarks: Passed";
	}
	else
	{
		cout << "Grades: " << stud.average << endl;
		cout << " \nRemarks: Failed";
	}

}
struct students{
	char name[100];
	int id, q1,q2,q3,r;
};


void problem2();
int main()
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
	
		cout << setw(3) << "No. " << setw(13) << "Student no. " << setw(15) << "Grade " << setw(15) << "Remarks" << endl;
		
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
		
	
	
	return 0;
}





void problem3(){ 
	struct Customer{
	struct Name{
		char firstName[20];
		char lastName[20];
	}name;
	
	struct Order{
		int day;
		int month;
		int year;
		int quan;
		struct Item{
			int ID;
			char itemName[20];
			int Price;
		};
	Item item[3];
	}order;
	
	double contNo;
};

void newLine();

	Customer c[3];
	for (i=0;i<3;i++){
		cout << "CUSTOMER INFORMATION " << i+1 << endl;
		cin.ignore();
		cout << "First Name: ";
		cin.getline(c[i].name.firstName,29);
		cout << "Last Name: ";
		cin.getline(c[i].name.lastName,29);
		cout << "ORDER DATE: "<<endl;
		cout << "Day: ";
		cin >> c[i].order.day;
		cout << "Month: ";
		cin >> c[i].order.month;
		cout << "Year: ";
		cin >> c[i].order.year;
		cout << "\nENTER 3 ITEMS: " <<endl;
		for (s=0;s<3;s++){
		    cout << "ID: ";
		    cin >> c[i].order.item[s].ID;
		    newLine();
    	    cout << "Name: ";
    		cin.getline(c[i].order.item[s].itemName,29);
    		cout << "Price: ";
    		cin >> c[i].order.item[s].Price;
    		cout << "Quantity: ";
    		cin >> c[i].order.quan;
    		cout << endl;
		}
		newLine();
}
	s=0;
	cout << "SUMMARY REPORT" << endl;
	cout << " #" << setw(30) << "Customer Name"
	<< setw(20) << "Order Date"
	<< setw(15) << "Items"
	<< setw(15) << "Price"
	<< setw(15) << "Quantity" <<endl;
	
	for (i=0;i<3;i++){
		TP=0;
		cout << " " << i+1
		<< setw(23) << c[i].name.lastName << ","
		<< setw(6) << c[i].name.firstName
		<< setw(11) << c[i].order.day << "/" << c[i].order.month << "/" << c[i].order.year << endl;
		
    	for (s=0;s<3;s++){
    		cout<<setw(67) << c[i].order.item[s].itemName
			<< setw(15) << c[i].order.item[s].Price
			<< setw(15) << c[i].order.quan << endl;
    		TP += c[i].order.item[s].Price;
		}
		TP=TP*c[i].order.quan;
		cout << setw(96) << "TOTAL PRICE: " << TP << endl;
	}
}

void newLine(){
     char s;
     do{cin.get(s);}while(s!='\n');     
}

int choice(int d) {
cout << "Choose a problem number to solve [1-3]: ";
cin >> d;
switch(d) {
case 1:
problem1();
break;
case 2:
problem2();
break;
case 3:
problem3();
break;
break;
default: cout << endl<< "Error!" << endl;
break;
}
return d;
}
main()
{
	choice(d);
}

