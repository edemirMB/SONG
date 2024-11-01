#include "song.h"

song::song() {
    name = " ";
    Tmin = 0;
    Tsec = 0;
}
song::song(string _name, int _tmin, int _tsec) {
    name = _name;
    Tmin = _tmin;
    Tsec = _tsec;
}
int song::Tosec() {
    return Tmin * 60 + Tsec;
}

bool song::HechsamTime(song s) {
    return Tosec() == s.Tosec();
}