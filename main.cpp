#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP.h"
#include "IRClientUDP.h"
#include <string>

int main()
 {  

    IRServeurUDP serveur;
    serveur.OuvrirLaSocketDEcoute(4014);
    string msg;
    serveur.RecevoirUnMessage(msg);
    serveur.FermerLaSocket();


    IRJournalLumineux journal;
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame(msg);
    journal.FermerPortSerie();
 

    
 }
/*
    IRClientUDP client;
    client.OuvrirLaSocketDeCommunication("172.20.21.157",40);
    client.EnvoyerUnMessage(msg);
    client.FermerLaSocket();
    }

*/