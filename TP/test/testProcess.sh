#!/bin/sh

# Teste si les fichiers générés sont justes
DIRECTORYTRUE="./ressources/*" #Dossier dans lequel il y a les corrections
DIRECTORYTOTEST="./" #Dossier dans lequel il y a les fichiers générés

for f in $DIRECTORYTRUE
do
	FILENAME=`basename $f`
	FILENAME="$DIRECTORYTOTEST""$FILENAME"
	if [ -e "$FILENAME" ]; then

		RESULTDIFF=0
		diff -q -s $f $FILENAME #2>&RESULTDIFF

		if [[ $? -gt 0 ]]; then
			exit 1;
		fi
	fi 
done




