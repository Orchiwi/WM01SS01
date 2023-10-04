#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP"

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
}
