#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream file("wishlist.txt");

string name;
float price;

for(int i = 1; i <= 3; i++) {
    cout << "Enter product name: ";
    cin >> name;

    cout << "Enter price: ";
    cin >> price;

    file << name << " " << price << endl;
}

file.close();

ifstream readFile("wishlist.txt");

cout << "\nWishlist:\n";

while(readFile >> name >> price) {
    cout << name << " - " << price << endl;
}

readFile.close();

return 0;

}