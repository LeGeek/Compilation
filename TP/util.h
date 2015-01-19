#ifndef __UTIL__
#define __UTIL__

char *duplique_chaine(char *s);
void erreur(char *message);
void affiche_balise_ouvrante(char *fct_, int trace_xml);
void affiche_balise_fermante(char *fct_, int trace_xml);
void affiche_element(char *fct_, char *texte_, int trace_xml);
void affiche_texte(char *texte_, int trace_xml);

#endif
