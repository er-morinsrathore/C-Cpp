#include <iostream>
using namespace std;

class Movie {
public:
string title;
float rating;

Movie(string t, float r) {
    title = t;
    rating = r;
}

Movie(const Movie &m) {
    title = m.title;
    rating = m.rating;
}

void display() {
    cout << "Title: " << title << ", Rating: " << rating << endl;
}

};

int main() {
Movie m1("Inception", 4.8);
Movie m2 = m1;

cout << "Original Movie:" << endl;
m1.display();

cout << "Copied Movie:" << endl;
m2.display();

return 0;

}