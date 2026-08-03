#include <iostream>
using namespace std;

class Product {
public:
string productName;
float price;
float rating;

Product(string name, float p, float r) {
    productName = name;
    price = p;
    rating = r;
}

void displayInfo() {
    cout << "Product: " << productName << endl;
    cout << "Price: " << price << endl;
    cout << "Rating: " << rating << endl;
}

};

int main() {
Product p1("Headphones", 1999, 4.5);
p1.displayInfo();
return 0;
}