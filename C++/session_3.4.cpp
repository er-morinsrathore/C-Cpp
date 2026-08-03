#include <iostream>
using namespace std;

class Ticket {
public:
~Ticket() {
cout << "Saving your ticket..." << endl;
}
};

int main() {
Ticket *t1 = new Ticket();
delete t1;
return 0;
}