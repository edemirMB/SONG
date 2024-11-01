#pragma once
#pragma once
#include <iostream>
#include "song.h"
#include "TrackerSong.h"
#include <vector>
using namespace std;
class Tracker
{
protected:
	song TrackedSong;
	vector<TrackerSong> TrackerList;
public:
	void addHistorial(TrackerSong ts);//me agrega una cancion a la lista
	float getBestRating();//me obtiene la calificacion mas alta
	float getNumberSongPlayed(song cancion);//me obtiene la cantidad de canciones que se han reproducido mas de un porcentaje
	void setSong(song s);//me asigna una cancion a la variable TrackedSong
	void limpiarHistorial();
	void mostrarEstrellas(song ss);
	void mostrarBarras(song ss);

};
