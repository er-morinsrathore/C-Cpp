#include <iostream>
using namespace std;

class Playlist {
public:
string name;
string createdOn;
bool isPublic;

Playlist(string n, string c, bool p) {
    name = n;
    createdOn = c;
    isPublic = p;
}

void togglePublic() {
    isPublic = !isPublic;
}

void display() {
    cout << "Public: " << (isPublic ? "Yes" : "No") << endl;
}

};

int main() {
Playlist p1("My Playlist", "03-08-2026", true);

p1.display();
p1.togglePublic();
p1.display();
p1.togglePublic();
p1.display();

return 0;

}