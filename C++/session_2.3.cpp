#include <iostream>
using namespace std;

class FoodOrder {
public:
int orderId;
string restaurantName;
bool isDelivered;

FoodOrder(int id, string name, bool status) {
    orderId = id;
    restaurantName = name;
    isDelivered = status;
}

void markDelivered() {
    isDelivered = true;
    cout << "Order " << orderId << " from " << restaurantName << " is delivered." << endl;
}

};

int main() {
FoodOrder f1(101, "Tinello", false);
f1.markDelivered();
return 0;
}