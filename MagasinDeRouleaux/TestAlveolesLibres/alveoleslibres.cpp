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
AlveolesLibres::AlveolesLibres(const int _nbRangees, const int _nbColonnes) :
nbAlveoles(_nbRangees * _nbColonnes),
nbColonnes(_nbColonnes)
{

    for(int indice = 1 ; indice <= nbAlveoles ; indice++ )
        push_back(indice);
}

/**
  *@file alveolesLibres::Liberer
  *@param _rangee n° de la rangée ou se trouvait le rouleau
  *@param _colonne n° de la colonne ou se trouvait le rouleau
  *@details Ajoute l'alvéole dont les coordonnées sont passées en paramètre à l'ensemble des alvéoles libres
  */
void AlveolesLibres::Liberer(const int _rangee, const int _colonne)
{
    int alveole =  nbColonnes * (_rangee -1) + _colonne;
    push_back(alveole);
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
    bool retour = false;
        if(!empty())
        {
            int alveole = back();
            pop_back();
            _rangee = ((alveole - 1) / nbColonnes )+ 1;
            _colonne = ((alveole - 1) % nbColonnes )+ 1 ;
            retour = true;
        }

        return retour;
}
