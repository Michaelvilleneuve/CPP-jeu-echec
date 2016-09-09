/** 
 * Programme test de Piece
 *
 * @file testPiece.cxx
 */

// Utile pour l'affichage
#include <iostream>
#include "Piece.h"
#include "Joueur.h"


// Pour utiliser les flux de iostream sans mettre "std::" tout le temps.
using namespace std;


/**
 * Programme principal
 */
int main( int argc, char** argv )
{
  // instancie un objet p1 de type Piece
  Piece p1;
  Piece p2( 3, 3, false);
  // p1 est une piece blanche de coordonnees (3,3)
  p1.init( 3, 3, true );

  p1.affiche();
  p2.affiche();

  Joueur jb(true);
  Joueur jn(false);

  jb.affiche();
  jn.affiche();
}
