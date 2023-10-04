#include <iostream>
#include "IRJournalLumineux.h"

int main()
{
    IRJournalLumineux journal;
    journal.OuvrirPortSerie("/dev/ttyUSB0");
    journal.EnvoyerTrame("<ID00><L1><PA><FE><MA><WC><FE>BTS SN0C<E>");
    journal.FermerPortSerie();
}
