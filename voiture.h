//
// Created by PFI BERTO COMPUTER on 13/10/2024.
//

#ifndef VOITURE_H
#define VOITURE_H

class Voiture {
private:
    int Id;
    double Vitesse;

public:
    static int nbVoitures;
    Voiture();
    static int getNombreObjets();
};

int Voiture::nbVoitures = 0;

inline int Voiture::getNombreObjets()
{
    return nbVoitures;
}

inline Voiture::Voiture()
{
    Id = 1;
    Vitesse = 240;
    nbVoitures += 1;
}

#endif //VOITURE_H
