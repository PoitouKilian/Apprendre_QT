/**
  @file alveolesLibres.h
  @brief Implémentation de la classe alveolesLibre
  @version 1.0
  @author Poitou Kilian
  @date 16/10/2018
  */

#ifndef ALVEOLESLIBRES_H
#define ALVEOLESLIBRES_H

#include <vector>

using namespace std;

typedef vector<int> PileEntier;

class AlveolesLibres : public PileEntier
{
public:
    AlveolesLibres(const int _nbRangees=10, const int _nbColonne=20);
    void Liberer(const int _rangee,const int _colonne);
    bool Reserver(int &_rangee,  int &_colonne);

private:
    int rangee;
    int colonne;

};

#endif // ALVEOLESLIBRES_H
