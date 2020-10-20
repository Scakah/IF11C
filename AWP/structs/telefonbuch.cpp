#include <iostream>
#include <string>

using namespace std;

void print_menu();
void print_list();
bool schreibe_eintrag();

struct T_Telefoneintrag
{
    int i_id = -1;
    string str_name;
    string i_telefonnummer;
};

T_Telefoneintrag telefonbuch[100] = {{0, "Maler", "091112345"},
                                     {1, "Farst", "0176123456"},
                                     {2, "Leard", "091234123"},
                                     {3, "Maler", "0176212441"}};

int main()
{
    char c_eingabe = 'n';
    print_menu();
    while (true)
    {
        cin >> c_eingabe;

        switch (c_eingabe)
        {
        case '1':
            print_list();
            break;
        case '2':
            schreibe_eintrag();
            break;
        }
    }
    return 0;
}

void print_menu()
{
    cout << "\nMein Telefonbuch:\n\n";
    cout << "1. Telefonbuch anzeigen\n";
    cout << "2. Neuen Eintrag anlegen\n";
    cout << "3. Suche Eintraege anhand des Namens\n";
    cout << "4. Loesche Eintraege anhand der Identifikatiosnummer\n";
    cout << "5. Beenden\n";
    cout << "\n Ihre Auswahl:";
}

void print_list()
{
    cout << "<-- Telefonbuch -->\n";
    for (int a = 0; a < 100; a++)
    {
        cout << telefonbuch[a].i_id << " | " << telefonbuch[a].str_name << " | " << telefonbuch[a].i_telefonnummer << "\n";
    }
}

bool schreibe_eintrag()
{

    string name;
    string nummer;

    cout << "\nName: \n";
    cin >> name;
    cout << "\nNummer: \n";
    cin >> nummer;

    for (int a = 0; a < 100; a++)
    {
        if (telefonbuch[a].i_id == -1)
        {
            telefonbuch[a] = {
                a,
                name,
                nummer};

            return true;
        }
    }
    return false;
}