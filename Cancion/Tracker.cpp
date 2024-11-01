#include "Tracker.h"

void Tracker::addHistorial(TrackerSong ts)
{
	TrackerList.push_back(ts);
}

float Tracker::getBestRating()
{
	//solo el promedio
	if (TrackerList.size() > 0)
	{
		float suma = 0;
		for (int i = 0; i < TrackerList.size(); i++)
		{
			suma += TrackerList[i].raeting;
		}
		return suma / TrackerList.size();
	}

	//if (TrackerList.size() > 0)
	//{
	//	float mejor = 0;
	//	for (int i = 0; i < TrackerList.size(); i++)
	//	{
	//		if (TrackerList[i].getRaetingPorcent(TrackedSong) > mejor)
	//		{
	//			mejor = TrackerList[i].getRaetingPorcent(TrackedSong);
	//		}
	//	}
	//	return mejor;
	//}
	//return 0;
}

float Tracker::getNumberSongPlayed(song cancion)
{
	int count = 0;
	for (int i = 0; i < TrackerList.size(); i++)
	{
		if (TrackerList[i].getRaetingPorcent(cancion) > getBestRating())
		{
			count++;
		}
	}
	return count;
}

void Tracker::setSong(song s)
{
	TrackedSong = s;
}
//metodo de limiar el historial
void Tracker::limpiarHistorial()
{
	TrackerList.clear();
}

//muestra en estrellas del historial del reating de cada reproduccion de una cancion pasada como parametro de entrada comprueba primero que la cancion este en el trackedSong
void Tracker::mostrarEstrellas(song ss)
{
	if (TrackedSong.name == ss.name)
	{
		for (int i = 0; i < TrackerList.size(); i++)
		{
			cout << "Reproduccion " << i + 1 << " : ";
			for (int j = 0; j < TrackerList[i].raeting; j++)
			{
				cout << "*";
			}
			cout << endl;
		}
		//mostrar getBestRating de la cancion en estrellas
		cout << "reating " << ss.name << " : ";
		for (int i = 0; i < getBestRating(); i++)
		{
			cout << "*";
		}
		cout << endl;
	}
	else
	{
		cout << "La cancion no esta en el historial" << endl;
	}
}

//muestra en  porcentage con la figura barra las reproducciones 10 barras es 100%
void Tracker::mostrarBarras(song ss)
{

	if (TrackedSong.name == ss.name)
	{
		for (int i = 0; i < TrackerList.size(); i++)
		{
			cout << "Reproduccion " << i + 1 << " : ";
			for (int j = 0; j < TrackerList[i].getRaetingPorcent(ss) / 10; j++)
			{
				cout << "|";
			}
			cout << endl;
		}
	}
	else
	{
		cout << "La cancion no esta en el historial" << endl;
	}
}