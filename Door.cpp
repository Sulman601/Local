#include <iostream>

using namespace std;

class Door
{
    private:
    bool isOpened;
    bool isLocked;
    
    public:
    
    Door();
    void openDoor();
    void closeDoor();
    void lockDoor();
    void unlockDoor();
    bool isDoorOpen() const ;
    bool isDoorClose() const;
};

int main()
{
    return 0;
}
