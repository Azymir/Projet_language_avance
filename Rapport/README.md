https://github.com/Azymir/Projet_language_avance.git
=============================================
Attention !!!!

j'ai volontairement mis des commentaires partout pour conserver la trace de nos anciens codes. C'est à dire avant que je reprenne le code à ma manière.
========================================

- Classe TableauBord qui contiendra l'ensemble des objets du projet
	Cette classe contiendra toutes les méthodes qui manipuleront les objets du projets. Et donc toutes les fonctions de vérification etc. C'est donc la classe qui gère notre projet d'une certaine manière. 
	
- Classe Element qui sera la classe mère pour tout les objets manipulable du projet. Entre autre, on retrouvra donc des méthodes communes à ces objets qui sont:
	getEtat(): qui retourne l'état de l'objet actuel
	description(): qui affiche sur la console son etat actuel
	setEtat(): qui modifie l'état de l'objet.
	
	Comme la plupart des objets ont un etat, on utilise la classe Element pour factoriser le constructeur, et les méthodes en communs. 

on fait une fonction qui à chaque tour, qui appelle toutes les fonctions qui vérifie l'téat du systeme. 
Sous classe joueur

classe: Vanne
		Pompe
		Moteur
		Element
		Reserversoir
		TableauBord
		
