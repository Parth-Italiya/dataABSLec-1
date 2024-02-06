/*1. WAP to abstract some attributes of class Admin to
prevent them to be inherited by its child classes.

*/

#include<iostream>

using namespace std;

class Employ{
	public : 
			int salary;
			char company[100];
			void print1(){
			
			cout<<"Salary is = "<<endl;
			cin>>salary;
			cout<<"Company Name is = "<<endl;
			cin>>company;
			
			cout<<endl<<salary<<endl;
			cout<<endl<<company<<endl;
		}
};

class Manager
{
	public :
			int salary_manager;
			int staff;
			char companyname_m[100];
				void print2(){
			cout<<"Salary_M is = "<<endl;
			cin>>salary_manager;
			cout<<"STAFF = "<<endl;
			cin>>staff;
			cout<<"Company Name is = " <<endl;
			cin>>companyname_m;
			
			cout<<endl<<salary_manager<<endl;
			cout<<endl<<staff<<endl;
			cout<<endl<<companyname_m<<endl;
		}
			
};
class Admin : public Manager,public Employ
{
	public :
			char can_terminate[100];
				void print3(){
			cout<<"TERMINATE = "<<endl;
			cin>>can_terminate;
			
			cout<<endl<<can_terminate<<endl;
		}
};

int main(){
	Admin a1;
			
		a1.company;
		a1.salary;
		a1.print1();
		a1.companyname_m;	
		a1.salary_manager;
		a1.staff;
		a1.print2();
		a1.can_terminate;
		a1.print3();
	return 0;
	
	
}
