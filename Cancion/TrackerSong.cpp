#include "TrackerSong.h"

TrackerSong::TrackerSong()
{
	playmin = 0;
	playsec = 0;
	raeting = 0;
}

TrackerSong::TrackerSong(int _playmin, int _playsec, int _raeting)
{
	playmin = _playmin;
	playsec = _playsec;
	raeting = _raeting;
}

int TrackerSong::getRaetingPorcent(song s)
{
	int tDT = s.Tosec();
	int trackTimes = playmin * 60 + playsec;
	return trackTimes * 100 / tDT;
}