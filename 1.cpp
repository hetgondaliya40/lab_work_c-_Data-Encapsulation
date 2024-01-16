/*
WAP to get and display 5 Students information using
encapsulation by including below mentioned
attributes:
- stu_id
- stu_name
- stu_age
- stu_course
- stu_email
- stu_city
- stu_college
*/




#include<iostream>
using namespace std;

class Std{
	private :
		
		int id;
		char name[100];
		int age;
		char course[100];
		char email[100];
		char city[100];
		char college[100];
		
		public :
		void setdata(){
		cout<<"ENTER ID :"<<endl;
		cin>>id;
		cout<<"ENTER NAME :"<<endl;
		cin>>name;
		cout<<"ENTER AGE :"<<endl;
		cin>>age;
		cout<<"ENTER COURSE :"<<endl;
		cin>>course;
		cout<<"ENTER EMAIL :"<<endl;
		cin>>email;
		cout<<"ENTER CITY :"<<endl;
		cin>>city;
		cout<<"ENTER COLLEGE :"<<endl;
		cin>>college;
		}
		
		
		void getdata(){
			cout<<"ID is = "<<id<<endl;
			cout<<"NAME is = "<<name<<endl;
			cout<<"AGE is = "<<age<<endl;
			cout<<"COURSE is = "<<course<<endl;
			cout<<"EMAIL is = "<<email<<endl;
			cout<<"CITY is = "<<city<<endl;
			cout<<"COLLEGE is = "<<college<<endl;
		}
		
};

int main(){
	
	Std s1,s2,s3,s4,s5;
	
	s1.setdata();
	s1.getdata();
	s2.setdata();
	s2.getdata();
	s3.setdata();
	s3.getdata();
	s4.setdata();
	s4.getdata();
	s5.setdata();
	s5.getdata();
	
}
