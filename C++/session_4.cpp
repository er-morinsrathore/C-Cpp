#include <iostream>
using namespace std;

// 1. Base Class
class SocialMediaUser {
public:
string username;
int followers;

SocialMediaUser(string u, int f) {
    username = u;
    followers = f;
}

void displayProfile() {
    cout << "Username: " << username << endl;
    cout << "Followers: " << followers << endl;
}

};

// 2. YouTuber (Single Inheritance)
class YouTuber : public SocialMediaUser {
public:
string channelName;

YouTuber(string u, int f, string c) : SocialMediaUser(u, f) {
    channelName = c;
}

void uploadVideo(string title) {
    cout << "Video " << title << " uploaded to " << channelName << endl;
}

};

// 3. Podcaster (Hierarchical Inheritance)
class Podcaster : public SocialMediaUser {
public:
string podcastName;

Podcaster(string u, int f, string p) : SocialMediaUser(u, f) {
    podcastName = p;
}

void publishEpisode(string episodeTitle) {
    cout << "Episode " << episodeTitle << " published on " << podcastName << endl;
}

};

// 4. Multilevel Inheritance
class GamingYouTuber : public YouTuber {
public:
GamingYouTuber(string u, int f, string c) : YouTuber(u, f, c) {}

void streamGame(string gameName) {
    cout << username << " is now streaming " << gameName << " on " << channelName << endl;
}

};

// 5. InstagramInfluencer (Hierarchical)
class InstagramInfluencer : public SocialMediaUser {
public:
InstagramInfluencer(string u, int f) : SocialMediaUser(u, f) {}

void postStory(string storyTitle) {
    cout << username << " posted a new story: " << storyTitle << endl;
}

};

int main() {

// Base class
SocialMediaUser user("morin", 1000);
user.displayProfile();

cout << endl;

// YouTuber
YouTuber yt("morinYT", 5000, "Morin Channel");
yt.uploadVideo("My First Vlog");

cout << endl;

// Podcaster
Podcaster pod("morinPod", 2000, "Tech Talks");
pod.publishEpisode("AI Future");

cout << endl;

// Gaming YouTuber
GamingYouTuber gamer("proGamer", 8000, "Gaming Hub");
gamer.streamGame("BGMI");

cout << endl;

// Instagram Influencer
InstagramInfluencer insta("morinInsta", 3000);
insta.postStory("New Day Vibes");

return 0;

}