#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP.h"


int main()
{  
   string msg;
   IRServeurUDP serveur;
   serveur.OuvrirLaSocketDEcoute(4014);
   while(true)
{

   serveur.RecevoirUnMessage(msg);



   IRJournalLumineux journal;
   journal.OuvrirPortSerie("/dev/ttyUSB0");
   journal.EnvoyerTrame(msg);
   journal.FermerPortSerie();
}
   serveur.FermerLaSocket();


}
/*



*/