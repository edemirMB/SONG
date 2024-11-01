#pragma once
#include <iostream>
using namespace std;

class song
{
private:
    int Tmin;
    int Tsec;
public:
    string name;

    song();
    song(string _name, int _tmin, int _tsec);
    int Tosec();
    bool HechsamTime(song s);
};