#include <iostream>
#include "time.h"

using namespace std;

int main() {

    std::cout << "Hello, World!" << std::endl;



    class time tempo;
    class time t2(9,427,45);
    class time t3( 44,17,60);
    t2.print();
    t3.print();
    tempo.sum(t2,t3);
    tempo.print();


    return 0;
}
