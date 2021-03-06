#ifndef _MENU_H
#define _MENU_H

#include "window.h"
#include "Score.h"
#include "Picture.h"
#include "Message.h"
#include <string>

class Menu{
  public:
    /* CONSTRUCTOR */
    Menu();
    Menu(int height, int width, std::string arrowDesign);
    /* DESCTRUCTOR */
    ~Menu();

    //Fonction permettan de lancer le menu avec son affichage
    //Renvois le nombre associé au choix de l'utilisateur
    int start();

  private:
    int heightS;        //Hauteur de la fenetre
    int widthS;         //Largeur de la fenetre
    int positionArrow;  //Position de la selection dans le menu
    int nbElements;     //Nombre elements dans le menu
    std::string arrow;  //Chaîne de caractères associé à la flèche

    std::string* elements;  //Les elements de choix dans le menu
    Window *menuWindow;     //La fenêtre graphique

    //Permet d'ajouter un nouvel element de choix au menu
    void addElement(std::string name);
    //Affiche tous les elements sur le menu
    void showElement(Window *window, int x, int y);
    //Déplacer la flèche d'un cran de taille 'move'
    void moveArrow(Window *window,int move);
};

#endif
