#include <iostream>
#include "IRJournalLumineux.h"
#include "IRServeurUDP.h"

using namespace std;

void dechiffrement(string messageChiffre, string & message)
{
   string cle = "CyberSecurite";
   for(int i = 0 ; i<messageChiffre.length() ; i++)
   {
      message[i] = messageChiffre[i] ^ cle [i%cle.length()];
   }
}


int main()
{  
   string msg;
   IRServeurUDP serveur;
   serveur.OuvrirLaSocketDEcoute(4004);
   while(true)
{
   serveur.RecevoirUnMessage(msg);

   string trameDeChiffree = msg;
   dechiffrement(msg, trameDeChiffree);

   IRJournalLumineux journal;
   journal.OuvrirPortSerie("/dev/ttyUSB0");
   journal.EnvoyerTrame(trameDeChiffree);
   journal.FermerPortSerie();
}
   serveur.FermerLaSocket();


}
/*



*/