#include <memory>

struct abc{
    char a[1024];
    char b[2048];
};

int main(){
	// doing this first one, a huge amount of memory will be allocated on stack
	// since it needs 1024+2048 bytes for abc()
    auto ptr = std::make_unique<abc>(abc());

    // but this one, won't do that
    //auto ptr = std::make_unique<abc>();

    return 0;
}
