AMateria :
 - <Variable> protecetd String 'type'
 - <Constructor> qui prend en parametre une String 'type'
 - <Fonction> 'use' qui print un message selon le type (Ice/Cure)
 - <Fonction> 'clone' renvoie une nouvelle instance du meme type l'instance actuelle (Ice/Cure)

ICharacter :
 - <Interface> pour Character

Character :
 - <Class> concrete de 'ICharacter'
 - <Constcutor> void init tout vide
 - <Constcutor> avec name en param
 - <Constcutor> de recopie et <operator> '=' doivent delete les Materials du Character avant de les remplacer
 - Possede 4 Materias (tab de 4 AMateria?)
 - init les Materia de 0 a 3
 - <Fonction> 'equip' init un des materia avec un l'addresse d'un AMateria passe en param
 - <Fonction> 'unequip' ne peut plus use le materia index passe en param mais ne le delete pas
 - <Fonction> 'use' use AMateria::use de l'index et de la ref du ICharactere passe en param;
 - si equip inventaire plein ou use ou unequip Materia existe pas => rien faire  

IMateriaSource :
 - <Interface> pour MateriaSource

MateriaSource :
 - <Class> concrete de 'IMateriaSource'
 - <Fonction> 'learnMateria' Copie la Materia passée en paramètre et la stocke en mémoire afin de la cloner plus tard. Tout comme le Character, la MateriaSource peut contenir 4 Materias maximum. Ces dernières ne sont pas forcément uniques.
 - <Fonction> 'createMateria' Retourne une nouvelle Materia. Celle-ci est une copie de celle apprise précédemment par la MateriaSource et dont le type est le même que celui passé en paramètre. Retourne 0 si le type est inconnu

***************

Ice :
 - <Class> concrete de AMateria?
 - <String> type dans AMateria

Cure : 
 - <Class> concrete de AMateria?
 - <String> type dans AMateria