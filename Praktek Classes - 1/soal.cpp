#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

// declaration
class Alien {
private:
	string color;
	int legs;
	int eyes;
	int age;

public:
	string getColor();
	void setColor(string);
	int getLegs();
	void setLegs(int);
	int getEyes();
	void setEyes(int);
	int getAge();
	void setAge(int);
	void DisplayAlien();
};

// implementation
string Alien::getColor(){
	return color;
}

void Alien::setColor(string new_color){
	color = new_color;
}

int Alien::getLegs(){
	return legs;
}

void Alien::setLegs(int new_legs){
	legs = rand() % new_legs;

}

int Alien::getEyes(){
	return eyes;
}

void Alien::setEyes(int new_eyes){
	eyes = rand() % new_eyes;
}

int Alien::getAge(){
	return age;
}

void Alien::setAge(int new_age){
	age = rand() % new_age;
}

void Alien::DisplayAlien(){
	cout << "Age: " << getAge() << endl;
	cout << "Legs: " << getLegs() << endl;
	cout << "Eyes: " << getEyes() << endl;
	cout << "Color: " << getColor() << endl;

}

// main
int main(){
	srand((unsigned) time(NULL));
	// first Alien
	cout << "Creating a new Alien 'first'" << endl;
	Alien first;
	cout << "Setting first Alien color." << endl;
	first.setColor("Green");
	cout << "Setting first Alien age." << endl;
	first.setAge(100);
	cout << "Setting first Alien legs." << endl;
	first.setLegs(12);
	cout << "Setting first Alien eyes." << endl;
	first.setEyes(10);

	// spacing
	cout << endl;

	// second Alien
	cout << "Creating a new Alien 'second'" << endl;
	Alien second;
	cout << "Setting second Alien color." << endl;
	second.setColor("Brown");
	cout << "Setting second Alien age." << endl;
	second.setAge(100);
	cout << "Setting second Alien legs." << endl;
	second.setLegs(12);
	cout << "Setting second Alien eyes." << endl;
	second.setEyes(10);


	// spacing
	cout << endl;

	//printing information
	cout << " First Alien information:" << endl;
	first.DisplayAlien();
	// spacing
	cout << endl;

	//printing information
	cout << " Second Alien information:" << endl;
	second.DisplayAlien();

}