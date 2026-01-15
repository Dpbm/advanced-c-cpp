#include <functional>
#include <iostream>
#include <memory>
 
class Foo
{
public:
    int getter(int x, int y){
        return array[x][y];
    }
    Foo(){
        for(int i = 0; i < 2; i++)
            for(int j = 0; j < 3; j++)
                array[i][j] = i + 10 * j;
    }
private:
    int array[2][3];
};
 
void display(std::function<int(int, int)> &fn, int xmax, int ymax){
    for(int i = 0; i < xmax; i++)
            for(int j = 0; j < ymax; j++)
                printf("%d\n", fn(xmax, ymax));
}

int main()
{
    Foo f{};

    // thats correct, but can't be assigned to std::function<int(int, int)>&
    auto memfn = std::mem_fn(&Foo::getter);
    // display won't work here 
    //display(memfn, 1,2);
    
    int a = memfn(f, 1,2);
    std::cout << "value : " << a << std::endl;

    // to work with display
    std::function<int(int,int)> wrapped = [&f, &memfn](int x, int y) -> int { return memfn(f,x,y); };
    //std::cout << "value : " << wrapped(1,2) << std::endl;
    display(wrapped, 1, 2);
}
