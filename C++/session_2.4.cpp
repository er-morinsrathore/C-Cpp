#include <iostream>
#include <vector>
using namespace std;

class Playlist {
public:
string name;
string createdOn;
bool isPublic;
vector<string> songs;

Playlist(string n, string c, bool p) {
    name = n;
    createdOn = c;
    isPublic = p;
}

void addSong(string songTitle) {
    songs.push_back(songTitle);
}

void showSongs() {
    cout << "Songs in Playlist:" << endl;
    for(int i = 0; i < songs.size(); i++) {
        cout << i + 1 << ". " << songs[i] << endl;
    }
}

};

int main() {
Playlist p1("My Playlist", "03-08-2026", true);

p1.addSong("Song 1");
p1.addSong("Song 2");
p1.addSong("Song 3");

p1.showSongs();

return 0;

}