#include <iostream>
using namespace std;

struct OrderData {
int orderId;
string restaurantName;
bool isDelivered;
};

class FoodOrder {
public:
int orderId;
string restaurantName;
bool isDelivered;

FoodOrder(OrderData data) {
    orderId = data.orderId;
    restaurantName = data.restaurantName;
    isDelivered = data.isDelivered;
}

void markDelivered() {
    isDelivered = true;
    cout << "Order " << orderId << " delivered." << endl;
}

};

int main() {
OrderData data = {102, "Ishaara", false};

FoodOrder f1(data);
f1.markDelivered();

return 0;

}