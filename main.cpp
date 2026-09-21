#include <iostream>
#include <pthread.h>

using namespace std;

struct Worker {
  pthread_t tid;
};

int main() {
  int b;
  b = 12;
  std::cout << "Hello World!\n";
}