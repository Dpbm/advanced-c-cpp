#include <iostream>

using namespace std;

class Test {
	public:
		Test(){
			cout << "From Test parent constructor" << endl;	
		}

		~Test(){
			cout << "From Test Parent destructor" << endl;
		}

		void call() const {
			cout << "CALLING PARENT" << endl;
		}
};

class Child : public Test {
	public:
		Child(){
			cout << "From Test child constructor" << endl;	
		}

		~Child(){
			cout << "From Test child destructor" << endl;
		}

		void call() const {
			cout << "CALLING CHILD" << endl;
		}
};

class ProperTest {
	public:
		ProperTest(){
			cout << "From Test parent constructor" << endl;	
		}

		virtual ~ProperTest(){
			cout << "From Test Parent destructor" << endl;
		}

		virtual void call() const {
			cout << "CALLING PARENT" << endl;
		}
};

class ProperChild : public ProperTest {
	public:
		ProperChild(){
			cout << "From Test child constructor" << endl;	
		}

		~ProperChild(){
			cout << "From Test child destructor" << endl;
		}

		void call() const {
			cout << "CALLING CHILD" << endl;
		}
};

int main(){
	cout << "---Test parent---" << endl;
	Test* p = new Test{};
	p->call();
	delete p;

	cout << "---Test child---" << endl;
	Child* c = new Child{};
	c->call();
	delete c;
	
	cout << "---Test child parent conversion---" << endl;
	Test* cp = new Child{};
	cp->call(); // calls parent
	delete cp;

	cout << "-----------------------------" << endl;
	
	cout << "---Test parent---" << endl;
	ProperTest* np = new ProperTest{};
	np->call();
	delete np;

	cout << "---Test child---" << endl;
	ProperChild* nc = new ProperChild{};
	nc->call();
	delete nc;
	
	cout << "---Test child parent conversion---" << endl;
	ProperTest* ncp = new ProperChild{};
	ncp->call(); // calls the correct one
	delete ncp;

	return 0;
}
