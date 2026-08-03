#include <iostream>
using namespace std;

class PaymentProcessor {
public:
void processPayment(float amount) {
cout << "Processing payment without coupon" << endl;
cout << "Final Amount: " << amount << endl;
}

void processPayment(float amount, string coupon) {
    float discount = 100;
    cout << "Processing payment with coupon: " << coupon << endl;
    cout << "Final Amount: " << amount - discount << endl;
}

};

int main() {
PaymentProcessor p;

p.processPayment(1000);
p.processPayment(1000, "SAVE100");

return 0;

}