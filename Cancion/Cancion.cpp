#include <iostream>
#include "song.h"
#include "Tracker.h"
#include "TrackerSong.h"
using namespace std;
int main()
{
	song s1("cancion1", 3, 30);
	song s2("cancion2", 3, 30);
	Tracker t1;
	t1.setSong(s1);
	t1.addHistorial(TrackerSong(1, 30, 3));
	t1.addHistorial(TrackerSong(3, 30, 5));
	t1.addHistorial(TrackerSong(3, 0, 1));
	t1.addHistorial(TrackerSong(3, 30, 4));
	cout << "La cancion " << s1.name << " se ha reproducido " << t1.getNumberSongPlayed(s1) << " veces" << endl;
	cout << "La mejor calificacion de la cancion " << s2.name << " es " << t1.getBestRating() << endl;
	//funciones mostrar en estrellas y en barra
	t1.mostrarEstrellas(s1);
	t1.mostrarBarras(s1);

	//borrado del historial
	t1.limpiarHistorial();

	t1.setSong(s2);
	t1.addHistorial(TrackerSong(1, 30, 10));
	t1.addHistorial(TrackerSong(3, 30, 10));
	t1.addHistorial(TrackerSong(3, 0, 1));
	t1.addHistorial(TrackerSong(3, 30, 10));
	cout << "La cancion " << s2.name << " se ha reproducido " << t1.getNumberSongPlayed(s2) << " veces" << endl;

	cout << "La mejor calificacion de la cancion " << s2.name << " es " << t1.getBestRating() << endl;
	//funciones mostrar en estrellas y en barra
	t1.mostrarEstrellas(s2);
	t1.mostrarBarras(s2);
}