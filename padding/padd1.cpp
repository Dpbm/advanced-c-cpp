#include <iostream>
#include <print>

struct User{
    int id; // 4 bytes
    float value; // 4 bytes
    char a; // 1 byte
	    // it has 9 bytes, but it needs to have the next 4 multiple, which is 12
	    // so it pads it till 12bytes
};


struct User2{
    float value; // 4 bytes
    int id; // 4  bytes
    char a; // 1 byte
	    // the same as before
};

struct User3{
    char a; // 1 byte + 3 bytes padding
    float value; // 4 bytes
    int id; // 4 bytes
	    // total of 12 bytes as well
};

struct Test{
	int vec[3]; // 3*4 bytes
	char a; // 1 + 3 bytes
	long b; // 8 bytes
		// total of 24 bytes
};

struct Test2{
	long b; // 8 bytes
	char a; // 1 + 3 bytes
	int vec[3]; // 3*4 bytes
		    // total of 24 bytes
};

struct Test3{
	int vec[3]; // 3*4 bytes
	long b; // 8 bytes but it needs 4 bytes of padding before, because it starts at position
		// 12 which is not a 8 multiple, so we add 4 bytes and it now starts at 16
		// so in total we have 12 bytes here too
	char a; // 1 byte + 7 bytes of padding
		// in total we have 12+12+8 = 32 bytes
};


int main(){
    User a = User{
        .id = 1,
        .value = 3.4f,
        .a = 'a'
    };

    User2 b = User2{
        .value = 3.4f,
        .id = 1,
        .a = 'a'
    };
    
    User3 c = User3{
        .value = 3.4f,
        .id = 1,
        .a = 'a'
    };

    Test d = Test{
	    .vec = {1,2,3},
	    .a = 'a',
	    .b = 10l
    };

    Test2 e = Test2{
	    .vec = {1,2,3},
	    .a = 'a',
	    .b = 10l
    };
    
    Test3 f = Test3{
	    .vec = {1,2,3},
	    .a = 'a',
	    .b = 10l
    };

    std::printf("size A: %lu\n", sizeof(a));
    std::printf("size B: %lu\n", sizeof(b));
    std::printf("size C: %lu\n", sizeof(c));
    std::printf("size D: %lu\n", sizeof(d));
    std::printf("size E: %lu\n", sizeof(e));
    std::printf("size F: %lu\n", sizeof(f));

    return 0;
}
