/** 
 * Mise en oeuvre de Joueur.h
 *
 * @file Joueur.cxx
 */

// A besoin de la declaration de la classe
#include <iostream>
#include "Joueur.h"

using namespace std;

Joueur::Joueur(bool white) {
  cout << "Nouveau Joueur" << white << endl;
  
  int y = white ? 1 : 8;
  int p = 0;

  for (int x=1; x <= 8; x++)
    m_pieces[p++].init(x, y, white);

  y = white ? 2 : 7;

  for (int x = 1;x <= 8; x++)
    m_pieces[p++].init(x, y, white);  

}

Joueur::~Joueur() {
  cout << "Suppression joueur" << endl;
}

void
Joueur::affiche() {
  string couleur = (Joueur::isWhite()) ? "blanc" : "noir";

  cout << "Joueur " << couleur << endl;

  for(int i = 0; i<16;i++)
    m_pieces[i].affiche();
}

bool
Joueur::isWhite() {
  return m_pieces[0].isWhite();
}