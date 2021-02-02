// exercise 01

const int Len = 50;

class Golf
{
private:
    char fullname[Len];
    int handicap;
public:
    Golf();
    Golf(const char * name, int hc);
    Golf & SetGolf();
    void Handicap(int hc);
    void ShowGolf() const;
};