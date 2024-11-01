#pragma once
#include <iostream>
#include "song.h"
using namespace std;
class TrackerSong
{
public:
	int playmin;
	int playsec;
	int raeting;
	TrackerSong();
	TrackerSong(int _playmin, int _playsec, int _raeting);
	int getRaetingPorcent(song s);

};
