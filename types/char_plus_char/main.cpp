#include <iostream>
#include <typeinfo>

int main(){
  char a = 1;
  char b = 2;

  auto c = a+b;
  
  if(std::is_same<decltype(c), int>::value){
    std::cout << "IS INT\n";
  }else if(std::is_same<decltype(c), char>::value){
    std::cout << "IS CHAR\n";
  }else if(std::is_same<decltype(c), std::string>::value){
    std::cout << "IS String\n";
  }else{
    std::cout << "IS NOTHING\n";
  }

  std::cout << typeid(c).name() << std::endl;

	return 0;
}
