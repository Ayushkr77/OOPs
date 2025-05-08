#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Room class
class Room {
private:
    string name;

public:
    Room(const string& name) : name(name) {}

    void display() const {
        cout << "- " << name << endl;
    }
};

// House class (composed of Rooms)
class House {
private:
    vector<Room> rooms;

public:
    House() {
        rooms.emplace_back("Living Room");
        rooms.emplace_back("Bedroom");
    }

    void showRooms() const {
        cout << "Rooms in the house:" << endl;
        for (const Room& room : rooms) {
            room.display();
        }
    }
};

int main() {
    House h;
    h.showRooms();

    return 0;
}
