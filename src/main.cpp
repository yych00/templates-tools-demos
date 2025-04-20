#include <iostream>
#include "template/hello.hpp"

using namespace std;

int main() {
    cout << "This is main file." << endl;
    myTemplate::say_hello();
    return 0;
}
