// exercise 02

#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    performers = new char[strlen(s1) + 1];
    strcpy(performers, s1);
    label = new char[strlen(s2) + 1];
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = new char[5];
    strcpy(performers, "None");
    label = new char[5];
    strcpy(label, "None");
    selections = 0;
    playtime = 0;
}
Cd::~Cd()
{
    delete [] performers, label;
}

void Cd::Report() const
{
    cout << "Performers: " << performers << endl;
    cout << "Label: " << label << endl;
    cout << "Num. of selections: " << selections << endl;
    cout << "Playing time (min.): " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
    delete [] performers, label;
    performers = new char[strlen(d.performers) + 1];
    strcpy(performers, d.performers);
    label = new char[strlen(d.label) + 1];
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * mw, const char * s1, const char * s2, int n, double x): Cd(s1, s2, n, x)
{
    mainworks = new char[strlen(mw) + 1];
    strcpy(mainworks, mw);
}

Classic::Classic(): Cd()
{
    mainworks = new char[5];
    strcpy(mainworks, "None");
}

Classic::~Classic()
{
    delete [] mainworks;
}

void Classic::Report() const
{
    Cd::Report();
    cout << "Main: " << mainworks << endl;
}

Classic & Classic::operator=(const Classic & d)
{
    Cd::operator=(d);
    delete [] mainworks;
    mainworks = new char[strlen(d.mainworks) + 1];
    strcpy(mainworks, d.mainworks);
    return *this;
}