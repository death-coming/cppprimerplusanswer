
#include <iostream>
#include "dma.h"
 
int main()
{
    using std::cout;
    using std::endl;
    using std::cin;
 
    baseDMA shirt("Portabelly", 8);
    lacksDMA balloon("red", "Blimpo", 4);
    hasDMA map("Mercator", "Buffalo Keys", 5);
    cout << "Displaying baseDMA object:\n";
    cout << shirt << endl;
    cout << "Displaying lacksDMA object:\n";
    cout << balloon << endl;
    cout << "Displaying hasDMA object:\n";
    cout << map << endl;
    lacksDMA balloon2(balloon);
    cout << "Result of lacksDMA copy:\n";
    cout << balloon2 << endl;
    hasDMA map2;
    map2 = map;
    cout << "Result of hasDMA assignment:\n";
    cout << map2 << endl;
    cout << endl << "Shirt:\n";
    shirt.View();
    cout << endl << "Balloon:\n";
    balloon.View();
    cout << endl << "Map:\n";
    map.View();
    cout << endl << "Balloon2:\n ";
    balloon2.View();
    cout << endl << "Map2:\n";
    map2.View();
 
    cout << "\nHow many inputs: ";
    int number;
    cin >> number;
    cin.ignore();
    ABC * abc[number];
    for (int i = 0; i < number; i++)
    {
        cout << "\nEnter 1 for baseDMA class, 2 for lacksDMA class, or 3 for hasDMA class: ";
        char flag;
        while (cin >> flag && (flag != '1' && flag != '2' && flag != '3'))
        {
            cin.ignore();
            cout << "Enter 1, 2, or 3 please: ";
        }
        cin.ignore();
        if (flag == '1')
        {
            char label[20];
            int rating;
            cout << "Enter the label: ";
            cin.getline(label, 20);
            cout << "Enter the rating: ";
            cin >> rating;
            abc[i] = new baseDMA(label, rating);
            // cout << endl << "Your input baseDMA is:\n";
            // abc[i]->View();
        }
        else if (flag == '2')
        {
            char label[20];
            int rating;
            char color[40];
            cout << "Enter the label: ";
            cin.getline(label, 20);
            cout << "Enter the rating: ";
            cin >> rating;
            cin.ignore();
            cout << "Enter the color: ";
            cin.getline(color, 40);
            abc[i] = new lacksDMA(color, label, rating);
            // cout << endl << "Your input lacksDMA is:\n";
            // abc[i]->View();
        }
        else if (flag == '3')
        {
            char label[20];
            int rating;
            char style[40];
            cout << "Enter the label: ";
            cin.getline(label, 20);
            cout << "Enter the rating: ";
            cin >> rating;
            cin.ignore();
            cout << "Enter the style: ";
            cin.getline(style, 40);
            abc[i] = new hasDMA(style, label, rating);
            // cout << endl << "Your input hasDMA is:\n";
            // abc[i]->View();
		}
	}
    cout << endl;
    for(int i = 0; i < number; i++)
    {    
        abc[i]->View();
        cout << endl;
    }
    for(int i = 0; i < number; i++)
        delete abc[i];
    
    cout << "Done!\n";
    return 0;
}