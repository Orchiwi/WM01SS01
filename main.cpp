#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP"
#include "IRClientUDP"

int main()
{
    IRJournalLumineux journal;
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame(resultat);
    journal.FermerPortSerie();

    IRServeurUDP serveur;
    OuvrirLaSocketDEcoute(4000)
    RecevoirUnMessage(msg)
    FermerLaSocket()
    
    IRClientUDP client
    OuvrirLaSocketDeCommunication("172.20.21.157",40)
    EnvoyerUnMessage(msg)
    FermerLaSocket()
    }
