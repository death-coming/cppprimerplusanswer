// exercise 01

#include <iostream>
#include <cstring>
#include "cd.h"

using namespace std;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
    strcpy(performers, s1);
    strcpy(label, s2);
    selections = n;
    playtime = x;
}

Cd::Cd(const Cd & d)
{
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    strcpy(performers, "None");
    strcpy(label, "None");
    selections = 0;
    playtime = 0;
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
    strcpy(performers, d.performers);
    strcpy(label, d.label);
    selections = d.selections;
    playtime = d.playtime;
    return *this;
}

Classic::Classic(const char * mw, const char * s1, const char * s2, int n, double x): Cd(s1, s2, n, x)
{
    strcpy(mainworks, mw);
}

Classic::Classic(): Cd()
{
    strcpy(mainworks, "None");
}

void Classic::Report() const
{
    Cd::Report();
    cout << "Main: " << mainworks << endl;
}

Classic & Classic::operator=(const Classic & d)
{
    Cd::operator=(d);
    strcpy(mainworks, d.mainworks);
    return *this;
}