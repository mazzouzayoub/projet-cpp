

#include <iostream>
#include <string>
using namespace std;


class Animal
{
	protected:
	 string name;
	 int age;
	public:
	 void set_value (int a, string n)
	 {
		age = a;
		name = n;
	 }


};


class Zebra:public Animal{
public:
void displayZebraMessage()
{
cout<< "The zebra name is "<<name<<". The zebra is "<< age << " years old \n";}
};


class Dolphin: public Animal
{
public:


void displayDolphinMessage()
{
cout<< "The dolphin name is:  "<< name<< ". The dolphin is "<<age << "years old\n";}
};




int main ()
{


	
	Zebra zebra;
	Dolphin dolphin;
	string n1="jack";
	string n2="anna";


	zebra.set_value (5,n1);
	dolphin.set_value (2,n2);


	zebra.displayZebraMessage() ;
	dolphin.displayDolphinMessage() ;


	return 0;
}