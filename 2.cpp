/*
2. WAP to get and display 5 Customers
information using encapsulation by including
below mentioned attributes:
- cust_id
- cust_name
- cust_age
- cust_telecome_brand_name (like Jio, Airtel, Vi, etc.)
- cust_mobile_number
- cust_city
- cust_simcard_validity (in years)
*/
#include<iostream>
using namespace std;

class Std{
	private :
		
		int id;
		char name[100];
		int age;
		char telecome_brand_name[100];
		int mobile_number;
		char city[100];
		int simcard_validity;
		
		public :
		void setdata(){
		cout<<"ENTER ID :"<<endl;
		cin>>id;
		cout<<"ENTER NAME :"<<endl;
		cin>>name;
		cout<<"ENTER AGE :"<<endl;
		cin>>age;
		cout<<"ENTER TELECOME BRAND NAME :"<<endl;
		cin>>telecome_brand_name;
		cout<<"ENTER MOBILE NAME :"<<endl;
		cin>>mobile_number;
		cout<<"ENTER CITY :"<<endl;
		cin>>city;
		cout<<"ENTER SIMCARD VALIDITY :"<<endl;
		cin>>simcard_validity;
		}
		
		
		void getdata(){
			cout<<"ID is = "<<id<<endl;
			cout<<"NAME is = "<<name<<endl;
			cout<<"AGE is = "<<age<<endl;
			cout<<"TELECOME BRAND NAME is = "<<telecome_brand_name<<endl;
			cout<<"MOBILE NAME is = "<<mobile_number<<endl;
			cout<<"CITY is = "<<city<<endl;
			cout<<"SIMCARD VALIDITY is = "<<simcard_validity<<endl;
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
