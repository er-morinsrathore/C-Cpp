#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

class Content {
public:
string title, platform, status;
int views;

void display() {
    cout << "Title: " << title << ", Platform: " << platform 
         << ", Views: " << views << ", Status: " << status << endl;
}

};

void addContent() {
ofstream file("content_list.txt", ios::app);

Content c;

cout << "Enter title: ";
cin >> c.title;

cout << "Enter platform: ";
cin >> c.platform;

cout << "Enter views: ";
cin >> c.views;

cout << "Enter status: ";
cin >> c.status;

file << c.title << " " << c.platform << " " << c.views << " " << c.status << endl;

file.close();

}

vector<Content> readContent() {
ifstream file("content_list.txt");
vector<Content> list;
Content c;

while(file >> c.title >> c.platform >> c.views >> c.status) {
    list.push_back(c);
}

file.close();
return list;

}

void showContent() {
vector<Content> list = readContent();

for(int i = 0; i < list.size(); i++) {
    cout << i + 1 << ". " << list[i].title << " (" << list[i].platform << ")" << endl;
}

}

void updateStatus() {
vector<Content> list = readContent();
int index;

showContent();
cout << "Enter number to update: ";
cin >> index;

cout << "Enter new status: ";
cin >> list[index - 1].status;

ofstream file("content_list.txt");

for(int i = 0; i < list.size(); i++) {
    file << list[i].title << " " << list[i].platform << " "
         << list[i].views << " " << list[i].status << endl;
}

file.close();

}

void deleteContent() {
vector<Content> list = readContent();
int index;

showContent();
cout << "Enter number to delete: ";
cin >> index;

list.erase(list.begin() + (index - 1));

ofstream file("content_list.txt");

for(int i = 0; i < list.size(); i++) {
    file << list[i].title << " " << list[i].platform << " "
         << list[i].views << " " << list[i].status << endl;
}

file.close();

cout << "Updated List:\n";
showContent();

}

int main() {
int choice;

do {
    cout << "\n1. Add Content\n2. Show Content\n3. Update Status\n4. Delete Content\n5. Exit\n";
    cout << "Enter choice: ";
    cin >> choice;

    if(choice == 1) addContent();
    else if(choice == 2) showContent();
    else if(choice == 3) updateStatus();
    else if(choice == 4) deleteContent();

} while(choice != 5);

return 0;

}