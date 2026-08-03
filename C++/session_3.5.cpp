#include <iostream>
#include <fstream>
using namespace std;

class Playlist {
public:
string name;

Playlist() {
    name = "My Favourites";
}

~Playlist() {
    ofstream file("autosave.txt");
    file << name;
    file.close();
}

};

int main() {
Playlist p1;
return 0;
}