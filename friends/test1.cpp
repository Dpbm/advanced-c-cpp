#include <iostream>

using namespace std;

class Jorge{
	private:
		void call() const {
			cout << "CALLING PRIVATE" << endl;
		}

	friend class Maycon;
	friend void map(Jorge& obj) ;
};

class Maycon{
	public:
		void say(Jorge& obj) const {
			obj.call();
		}
};

void map(Jorge& obj) {
	cout << "Inside" << endl;
	obj.call();
}

int main(){
	Jorge j;
	Maycon m;
	m.say(j);
	map(j);

	return 0;
}
