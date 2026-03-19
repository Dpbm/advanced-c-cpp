#include <iostream>
#include <utility>




int main(){
  std::string a = "heheheh";

  auto n = std::exchange(a,"huauhauh");

  std::cout << "a = " << a << std::endl;
  std::cout << "n = " << n << std::endl;
  
  std::cout << "---------\n";

  std::string b = "heheheh";
  std::string c = "hahauauh";

  auto m = std::exchange(b,c);

  std::cout << "b = " << b << std::endl;
  std::cout << "c = " << c << std::endl;
  std::cout << "m = " << m << std::endl;

  return 0;
}
