#include <iostream>
#include <cstdint>

using ui16 = uint16_t;
using ui8 = uint8_t;

//constexpr ui8 AGE_REP = 2;
//constexpr ui16 STEP = 0;

#define AGE_REP 2
#define STEP 0

using namespace std;

class Reptile {
	protected:
		ui8 its_age;
		ui16 count_step;
	public:
		Reptile() : its_age(AGE_REP), count_step(STEP){
			cout << "Reptile constructor" << endl;
		}

		virtual ~Reptile(){
			cout << "Reptile Destructor" << endl;
		}
};

class Frog: public Reptile {
	public:
		Frog(){
			cout << "Frog constructor" << endl;
		}

		virtual ~Frog(){
			cout << "Frog Destructor" << endl;
		}
};

class Test: public Reptile {
	public: 
		Test(){
			cout << "Test constructor" << endl;
		}
		~Test(){
			cout << "Test Destructor" << endl;
		}
};

class Parent {
	public:
		Parent(){
			cout << "Parent constructor" << endl;
		}

		~Parent(){
			cout << "Parent Destructor" << endl;
		}
	};

class Child : public Parent {
	public:
		Child(){
			cout << "Child constructor" << endl;
		}

		~Child(){
			cout << "Child Destructor" << endl;
		}
	};

int main(){
	Reptile* r = new Reptile{};
	delete r;

	cout << "--------------------" << endl;

	// calls repitile's constructor, then frog's
	// calls frog's destructor, then reptile's
	Frog* f = new Frog{};
	delete f;
	
	cout << "--------------------" << endl;
	cout << "----Test1 object-----" << endl;
	
	// calls the same way as frog, even our child has no virtual destructor
	Test* t = new Test{};
	delete t;

	cout << "--------------------" << endl;
	cout << "----Test2-----------" << endl;
	
	Parent* p = new Parent{};
	delete p;

	cout << "--------------------" << endl;
	cout << "----Test3-----------" << endl;
	
	// do the same as before, it calls in order and remove everything
	Child* c = new Child{};
	delete c;
	
	cout << "--------------------" << endl;
	cout << "----Test4-----------" << endl;
	
	// it doesnt call the child destructor
	Parent* pc = new Child{};
	delete pc;


	cout << "--------------------" << endl;
	cout << "----Test5----------" << endl;
	
	// but it calls both destructors
	Reptile* n = new Test{};
	delete n;

	return 0;
}
