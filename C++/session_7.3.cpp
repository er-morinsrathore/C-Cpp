#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream file("my_fav_songs.txt", ios::app);
string newSong;

cout << "Enter a new song: ";
getline(cin, newSong);

file << newSong << endl;

file.close();

cout << "Song added." << endl;

return 0;

}