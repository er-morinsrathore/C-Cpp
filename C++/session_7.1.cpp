#include <iostream>
#include <fstream>
using namespace std;

int main() {
ofstream file("my_fav_songs.txt");

file << "Song 1" << endl;
file << "Song 2" << endl;
file << "Song 3" << endl;
file << "Song 4" << endl;
file << "Song 5" << endl;

file.close();

cout << "Songs written to file." << endl;

return 0;

}