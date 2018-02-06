*********************************************************************************************************************************
                  BARE METAL IMPLEMENTATION README
*********************************************************************************************************************************

Ce fichier a pour but de donner un mode d'emploi pour l'utilisation du projet contenu dans le dossier ALTERA_CNN_BARE_METAL_FINAL.

1) Sourcer "setting_quartus17_0.sh" dans le répertoire principal.
2) Lancer ARM DS-5 avec la commande "DS5 &"

/!\ Le seul ordinateur disposant d'une licence pour ARM DS5 est ocaepc42, il est donc nécessaire de se connecter sur lui pour 
exécuter le projet.

3) Une fois ARM DS-5 ouvert, afficher les fichiers contenus dans le projet avec le menu déroulant à gauche. Le projet contient deux
codes de test différents nommés "test_cnn1.c" et "test_cnn2.c". 
4) Pour tester l'un de ces deux programme, il faut faire un clic droit sur l'autre fichier, "Build Ressources" et décocher les deux 
cases pour empêcher le compilateur de build ce programme.

  - "test_cnn1.c" effectue une convolution sur une image de 32x32 pixels avec des poids simples et un canal de sortie.
  - "test_cnn2.c" effectue une convolution sur une image de 24x24 pixels avec les poids fournis par les enseignants et 2 canaux de 
   sortie.
   
5) Pour choisir les options d'optimisation à appliquer au programme, suivre les instructions suivantes :
  - Clic droit sur le projet dans la liste à gauche
  - Aller dans "Properties"
  - Dans la liste à gauche, dérouler "C/C++ Build"
  - Cliquer sur "Settings"
  - Dans la liste qui s'affiche, aller dans ARM C Compiler puis "Target"
  - S'assurer que le CPU selectionné est bien le Cortex A9
  - Pour utiliser le NEON, regarder en dessous du CPU si une FPU est activée. Si VFPv3_FP16 est sélectionné, alors NEON est activé.
    Regarder dans les 3 parties "Target" si VFPv3_FP16 est bien présent pour activer le NEON.
  - Pour les autres optimisations, elles sont trouvables en allant dans "ARM C Compiler" puis "Optimizations".
  
6) Une fois les optimisations voulues choisies, revenir sur l'écran principal de DS5 et cliquer sur "Run" dans la barre d'outil en 
haut de l'écran, puis "Debug COnfiguration".
7) Dans la liste de gauche aller dans DS5 Debugger et sélectionner la configuration nommée "Standard_test_configuration". 
8) Le nombre de coeurs utilisés peut être précisé dans la fenêtre centrale.
9) Cliquer sur Debug pour lancer le test.
10) Une fois la connection avec la carte établie aller dans "AppConsole" et taper F8 pour exécuter le programme. Celui-ci doit 
normalement afficher son temps d'exécution.

  
