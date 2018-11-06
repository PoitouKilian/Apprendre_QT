/**
  @file alveolesLibres.cpp
  @brief Implémentation de la classe alveolesLibre
  @version 1.0
  @author Poitou Kilian
  @date 16/10/2018
  */
#include "alveoleslibres.h"

/**
  @file alveolesLibres::Liberer
  @param _rangee n° de la rangée ou se trouvait le rouleau
  @param _colonne n° de la colonne ou se trouvait le rouleau
  */
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonne)
{
    for(int i=1;i<=_nbRangees*_nbColonne;i++)
    {
        push_back(i);
    }
    rangee = _nbRangees;
    colonne = _nbColonne;
}

/**
  *@file alveolesLibres::Liberer
  *@param _rangee n° de la rangée ou se trouvait le rouleau
  *@param _colonne n° de la colonne ou se trouvait le rouleau
  *@details Ajoute l'alvéole dont les coordonnées sont passées en paramètre à l'ensemble des alvéoles libres
  */
void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{

}

/**
 * @brief AlveolesLibres::Reserver
 * @param _rangee n° de la rangée ou l'on vas mettre le rouleau si libre
 * @param _colonne  n° de la colonne ou l'on vas metttre le rouleau si libre
 * @return un boolean :Retourne vrai si une alvéole libre, dans ce cas,  la méthode fournit également la localisation (sa rangée et sa colonne). Elle la supprime également des alvéoles libres.
           Si aucune alvéole n’est disponible, la méthode retourne faux
 */
bool AlveolesLibres::Reserver(int &_rangee, int &_colonne)
{

}
