#include <iostream>
using namespace std;

class Search {
public:
void searchProduct(string name) {
cout << "Searching for product: " << name << endl;
}

void searchProduct(string name, string category) {
    cout << "Searching for " << name << " in category: " << category << endl;
}

};

int main() {
Search s;

s.searchProduct("Laptop");
s.searchProduct("Laptop", "Electronics");

return 0;

}