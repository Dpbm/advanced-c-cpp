#include <iostream>

using namespace std;

class Parent{
	protected:
		int flag_for_all = 10;
		void protected_call(){
			cout << "Protected call" << endl;
		}

	private:
		int private_data = 30;

		void private_call(){
			cout << "Private call" << endl;
		}

	public:
		Parent(){
			cout << "Parent constructor" << endl;
		}

		void public_call(){
			cout << "Parent public call" << endl;
		}
};

class ChildPublic: public Parent{
	public:
		ChildPublic(){
			cout << "Child Public constructor" << endl;
		}

};

class ChildProtected: protected Parent{
	public:
		ChildProtected(){
			cout << "Child Protected constructor" << endl;
		}

		void child_call() {
			cout << "Child protected call" << endl;
			this->public_call();
			this->protected_call();
		}

};

class ProtectedInh: public ChildProtected{
	public:
		void calling(){
			cout << "I CAN CALL PROTECTED" << endl;
			this->protected_call();
			this->public_call();
		}
};


class ChildPrivate: private Parent{
	public:
		ChildPrivate(){
			cout << "Child Private constructor" << endl;
		}

		void child_call() {
			cout << "Child private call" << endl;
			this->public_call();
		}

};

class PrivateInh: public ChildPrivate{
	public: 
		void calling(){
			cout << "I CAN CALL PRIVATE" << endl;
			// can't do neither of these
			//this->protected_call();
			//this->public_call();
		}
};

int main(){
	ChildPublic* c = new ChildPublic{};

	c->public_call();
	// cannot do these 2
	//c->protected_call();
	//c->private_call();
	delete c;


	cout << "-----------------" << endl;
	ChildProtected* c2 = new ChildProtected{};
	c2->child_call(); //nothing can be accessed outside the object
	//c2->public_call();
	//c2->protected_call();
	//c2->private_call();
	delete c2;

	cout << "-----------------" << endl;
	ProtectedInh *pi = new ProtectedInh{};
	pi->calling();
	//pi->public_call(); // cannot do this
	delete pi;
	
	cout << "-----------------" << endl;
	ChildPrivate* c3 = new ChildPrivate{};
	c3->child_call(); //nothing can be accessed outside the object
	//c3->public_call();
	//c3->protected_call();
	//c3->private_call();
	delete c3;
	
	cout << "-----------------" << endl;
	PrivateInh *ppi = new PrivateInh{};
	ppi->calling();
	//ppi->public_call(); // cannot do this
	delete ppi;


	return 0;
}
