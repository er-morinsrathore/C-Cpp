#include <iostream>
using namespace std;

class Song {
private:
string title;
string artist;

public:
void setTitle(string t) {
title = t;
}

string getTitle() {
    return title;
}

void setArtist(string a) {
    artist = a;
}

string getArtist() {
    return artist;
}

};

int main() {
Song s;

s.setTitle("Old Title");
s.setArtist("Artist 1");

cout << "Title: " << s.getTitle() << endl;

s.setTitle("New Title");

cout << "Updated Title: " << s.getTitle() << endl;

return 0;

}