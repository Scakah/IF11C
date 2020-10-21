#include <iostream>
#include <string>

using namespace std;

void print_menu();
void print_list();
bool schreibe_eintrag();
bool suche_eintrag(string s_name);
bool loesche_eintrag(int i_id);
bool sortiere();
struct T_Telefoneintrag
{
    int i_id = -1;
    string str_name;
    string i_telefonnummer;
};

T_Telefoneintrag telefonbuch[100] = {{1, "Maler", "091112345"},
                                     {2, "Farst", "0176123456"},
                                     {3, "Leard", "091234123"},
                                     {4, "Maler", "0176212441"}};

int lastId = 4;

int main()
{
    char c_eingabe = 'n';

    while (true)
    {
        print_menu();
        cin >> c_eingabe;

        switch (c_eingabe)
        {
        case '1':
            print_list();
            break;
        case '2':
            schreibe_eintrag();
            break;
        case '3':
        {
            string s_eingabe = "";
            cout << "Suche nache Name:\n";
            cin >> s_eingabe;
            cout << "\n";
            suche_eintrag(s_eingabe);
        }
        break;
        case '4':
        {
            int i_eingabe = 0;
            cout << "Lösche Eintrag mit ID: \n";
            cin >> i_eingabe;
            loesche_eintrag(i_eingabe);
        }
        break;
        case '5':
        default:
            return 0;
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
    char c_eingabe = ' ';
    int i_idx = 0;

    while (true)
    {
        system("clear");
        cout << "<-- Telefonbuch -->\n";
        for (int a = i_idx; a < i_idx + 20; a++)
        {
            telefonbuch[i_idx].i_id == -1 ? cout << a << ".:" << "Leerer Eintrag"
                                          : cout << a << ".: " << telefonbuch[a].i_id << " | " << telefonbuch[a].str_name << " | " << telefonbuch[a].i_telefonnummer << "\n";
        }

        // Paging
        cout << "(W)eiter, (Z)urueck, (B)eenden \n";
        cin >> c_eingabe;
        cout << "\n\n";
        switch (c_eingabe)
        {
        case 'W':
        case 'w':
            i_idx < 100 ? i_idx += 20 : i_idx = 80;
            break;
        case 'Z':
        case 'z':
            i_idx > 0 ? i_idx -= 20 : i_idx = 0;
            break;
        default:
            return;
        }
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
                lastId + 1,
                name,
                nummer};

            return true;
        }
    }
    return false;
}

bool suche_eintrag(string s_name)
{
    bool b_found = false;

    for (int a = 0; a < 100; a++)
    {
        if (telefonbuch[a].i_id != -1 && telefonbuch[a].str_name == s_name)
        {
            b_found = true;
            cout << a << ".: " << telefonbuch[a].str_name << endl;
        }
    }
    return b_found;
}

bool loesche_eintrag(int i_id)
{
    if (telefonbuch[i_id].i_id == -1)
    {
        cout << "Fehler! Eintrag leer!";
    }
    else
    {
        telefonbuch[i_id].i_id = -1;
        telefonbuch[i_id].i_telefonnummer = "";
        telefonbuch[i_id].str_name = "";
        cout << "Eintrag geloescht.";
        return true;
    }

    for(int a = i_id; a < 99; a++)
    {
        telefonbuch[a] = telefonbuch[a+1];
    }

    return false;
}

bool sortiere() 
{
    char c_eingabe = '0';
    cout << "Sortieren Nach: (I)d, (N)ame \n";
    cin >> c_eingabe;

    switch(c_eingabe)
    {
        case 'I': case 'i':
        for(int a = 0; a < 100; a++)
        {
            for(int b = 0; b < 100; b++)
            {
                if(telefonbuch[b].i_id > telefonbuch[b+1].i_id)
                {
                    T_Telefoneintrag helf;    
                    helf = telefonbuch[b];
                    telefonbuch[b] = telefonbuch[b+1];
                    telefonbuch[b+1] = helf;
                }
            }
        }
        break;
        case 'N': case 'n':
        for(int a = 0; a < 100; a++)
        {
            for(int b = 0; b< 100; b++)
            {
                T_Telefoneintrag helf;
                if(strcmp(telefonbuch[b].str_name, telefonbuch[b+1].str_name]) < 1 )
            }
        }
    }

}
