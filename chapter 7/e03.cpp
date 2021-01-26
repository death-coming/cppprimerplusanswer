// exercise 03

#include <iostream>
#include <cstring>

using namespace std;

struct Box
{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void show(Box box);
void calculate_volume(Box * box);

int main()
{
    Box box;
    strcpy(box.maker, "Toyota");
    box.height = 2;
    box.length = 4;
    box.width = 3;
    calculate_volume(&box);
    show(box);

    return 0;
}

void show(Box box)
{
    cout << "Maker:  " << box.maker << endl;
    cout << "Height: " << box.height << endl;
    cout << "Width:  " << box.width << endl;
    cout << "Length: " << box.length << endl;
    cout << "Volume: " << box.volume << endl;
}

void calculate_volume(Box * box)
{
    box->volume = box->height * box->length * box->width;
}