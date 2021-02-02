// exercise 07

class Plorg
{
private:
    char name_[19];
    int ci_;
public:
    Plorg(const char * name = "Plorg", int ci = 50);
    void ChangeCI(const int new_ci);
    void ShowPlorg() const;
};