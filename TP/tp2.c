#include <stdio.h>
#include <stdlib.h>

#include "symboles.h"

char yytext[100];
FILE *yyin;

/**
 * E  -> T E'
 * E' -> +E | e
 * T  -> F T'
 * T' -> *F | e
 * F  -> ( E ) | nombre
 *
 * e : Epsilone
 **/

void E();
void Eprime();
void T();
void Tprime();
void F();

int main( int argc, char **argv )
{
  int uniteCourante;
  char nom[100];
  char valeur[100];

  yyin = fopen( argv[1], "r" );
  if( yyin == NULL )
  {
    fprintf( stderr, "impossaible d'ouvrir le fichier %s\n", argv[1] );
    exit( 1 );
  }


}

void E()
{
  T();
  Eprime();
}

void Eprime()
{
  if( getc( yyin ) == '+' )
  {
    E();
  }
}

void T()
{
  F();
  Tprime();
}

void Tprime()
{
  if( getc( yyin ) == '*' )
  {
    F();
  }
}

void F()
{
  if( getc( yyin ) == '(' )
  {

  }
  else if( tester nombre )
  {

  }
  else
  {
    erreur !
  }
}
