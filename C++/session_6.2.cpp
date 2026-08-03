#include <iostream>
using namespace std;

class InstaStory {
protected:
int storyViews;

public:
InstaStory() {
storyViews = 100;
}
};

class SponsoredStory : public InstaStory {
public:
void showViews() {
cout << "Story Views: " << storyViews << endl;
}
};

int main() {
SponsoredStory s;
s.showViews();
return 0;
}