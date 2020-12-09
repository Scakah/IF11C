#include <iostream>
#include <string.h>

using namespace std;

int i_get_value_range(int i_werteArray[], int i_size);
int i_get_values(int i_werteArray[], int i_size);
int i_increase_array(int i_werteArray[], int i_size);
int i_clean_array(int i_werteArray[]);
int i_get_average(int i_werteArray[], int i_size);
int i_print_values(int i_werteArray[], int i_size);


int main()  {

    char c_eingabe = '\0';

    do{
        cout << "(W)erte eingeben, (A)lle löschen, (D)urchschnitt berechnen, (E)nde :";
        cin >> c_eingabe;
        cout << '\n';

        int* i_werteArray = new int[0];

        int i_size = 0;

        switch(c_eingabe) {
            case 'W' : case 'w':
                i_size = i_get_values(i_werteArray, i_size);
                i_size = i_print_values(i_werteArray, i_size);
                break;
            case 'A' : case 'a':
                i_size = i_clean_array(i_werteArray);
                i_size = i_print_values(i_werteArray, i_size);
                break;
            case 'D' : case 'd':
                i_size = i_get_average(i_werteArray, i_size);
                break;
        }

    } while (c_eingabe != 'E' || c_eingabe != 'e') ;
}

int i_get_values(int i_werteArray[], int i_size)
{
    int i_newSize = i_size;
    char c_eingabe = '\0';
    do
    {
        cout << "Wert Eingeben: ";
        i_newSize = i_increase_array(i_werteArray, i_newSize);
        cin  >> i_werteArray[i_newSize - 1];
        cout << '\n';
        cout << "Naechster (W)ert, (E)nde: ";
        cin >> c_eingabe;
    } while(c_eingabe != 'E' && c_eingabe != 'e');

    return i_newSize;
}

int i_increase_array(int i_werteArray[], int i_size)
{
    int* idx = i_werteArray;
    int i_count;

    i_size += 1;

    int* newArray = new int[i_size];

    for(int a = 0; a < i_size; a++)
    {
        newArray[i_count] = i_werteArray[i_count];
    }

    delete[] i_werteArray;
    i_werteArray = newArray;
    
    return i_size;
}

int i_clean_array(int i_werteArray[])
{
    delete(i_werteArray);
}

int i_get_average(int i_werteArray[], int i_size)
{ 
    int i_sum = 0;
    for(int a = 0; a < i_size; a++)
    {
        i_sum += i_werteArray[a];
    }
    
    int i_average = i_sum/i_size;
    cout << "Der Mittelwert ist : " << i_average << '\n'; 

    return i_size;
}

int i_print_values(int i_werteArray[], int i_size)
{
    int* idx = i_werteArray;
    for(int a = 0; a< i_size; a++)
    {
        cout << a << " : " << *idx << '\n';
    }

    return i_size;
}