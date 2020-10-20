#include <iostream>
#include <string>

using namespace std;

struct T_angestellte
{
    string strNachname;
    string Wohnort;
    int i_gehalt = 0;
    int i_id = -1;
};

void printList();
void addAngestellter(T_angestellte neuerAngestellter);
int letzerFreierIndex = 0;


T_angestellte angestelltenListe[100];

int main()
{
	char cAuswahl = ' ';
	
	do {
		// Men� einbinden
		system("cls");
		cout << "Mitarbeiterverwaltung: " << endl;
		cout << "#####################" << endl;
		cout << "1.\tMitarbeiter anzeigen" << endl;
		cout << "2.\tMitarbeiter anlegen" << endl;
		cout << "Ihre Auswahl: ";

		cin >> cAuswahl;
		system("cls");

		//Abfrage der Auswahl und Durchf�hrung der Aktion
		switch (cAuswahl) {
		case '1': { //TODO: Mitarbeiterliste anzeigen
			printList();
			break;
		}
		case '2': { //TODO: Mitarbeiter anlegen
            T_angestellte neuerAngestellter;

            cout << "Nachname: ";
            cin >> neuerAngestellter.strNachname;
            cout << "\nWohnort: ";
            cin >> neuerAngestellter.Wohnort;
            cout << "\nGehalt: ";
            cin >> neuerAngestellter.i_gehalt;

			addAngestellter(neuerAngestellter);
			break;
		}
		default: {
			cout << "Taste nicht vergeben. Bitte eine Nummer aus dem Men�ausw�hlen" << endl;
		}
		}
		getchar();
		getchar();
	} while (cAuswahl != '5');
	
	return 0;
}

void printList() 
{
    for(int a = 0; a < 100; a++)
    {
        cout << angestelltenListe[a].strNachname << ", " << angestelltenListe[a].Wohnort << ", " << angestelltenListe[a].i_gehalt << ", " << angestelltenListe[a].i_id << endl;
    }
}

void addAngestellter( T_angestellte neuerAngestellter)
{
    if( ! letzerFreierIndex == 100)
    {
        neuerAngestellter.i_id = letzerFreierIndex;
        angestelltenListe[letzerFreierIndex] = neuerAngestellter;
        letzerFreierIndex++;
    }
}