#include <iostream>
#include <thread>

using namespace std;

struct Worker {
    std::thread tid;

};

int main()
{
    std::cout << "Hello World!\n";
}