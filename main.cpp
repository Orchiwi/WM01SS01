#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP.h"
#include "IRClientUDP.h"

int main()
 {
    IRJournalLumineux journal;
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame("<ID00><L1><PA><FE><MA><WC><FE>BTS CN0C<E>");
    journal.FermerPortSerie();
 }
/*
    IRServeurUDP serveur;
    OuvrirLaSocketDEcoute(4014);
    RecevoirUnMessage(msg);
    FermerLaSocket();
    
    IRClientUDP client;
    OuvrirLaSocketDeCommunication("172.20.21.157",40);
    EnvoyerUnMessage(msg);
    FermerLaSocket();
    }

*/