#inc#include <iostream>
using namespace std;

enum engender { male, female };
enum enstatus { single, married };
enum encolor { red, blue, black };

struct stadress
{
	string trees;
	int house;
	string city;
	string country;
};

struct stcontact
{
	int phone;
	string email;
	string instegram;
	string linkedin;
	stadress adress;
};


struct stperson
{
	string name;
	int age;
	stcontact contact;

	engender gender;
	enstatus status;
	encolor favourite_color;
};

int main()
{
	stperson my_info;
	my_info.name = "Aissam Djidjelli ";

	my_info.contact.adress.city = " jijel ";
	my_info.contact.adress.country = "algeria ";
	my_info.contact.adress.house = 1;
	my_info.contact.adress.trees = "jemaa beni hbibi";
	my_info.contact.phone = 555120509;
	my_info.contact.email = "aissamfreelance94@gmail.com";
	my_info.contact.instegram = "Aissam_dji_";
	my_info.contact.linkedin = "Aissam Dji";
	my_info.gender = engender::male;
	my_info.status = enstatus::single;
	my_info.favourite_color = encolor::black;

	cout << "*******************************************" << endl;
	cout << "name :" << my_info.name << endl << "city :" << my_info.contact.adress.city << endl << "country:" << my_info.contact.adress.country << endl << "my status:" << my_info.status << endl << "my gender:" << my_info.gender << endl << "my favourite color:" << my_info.favourite_color << endl << "trees:" << my_info.contact.adress.trees << endl << "house :" << my_info.contact.adress.house << endl << "phone :" << my_info.contact.phone << endl << "email :" << my_info.contact.email << endl << "instegram:" << my_info.contact.instegram << endl << "linkedin:" << my_info.contact.linkedin << endl;
	cout << "*******************************************" << endl;

	return 0;
}


