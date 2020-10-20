# Strukturen

## Problem

    - Im Array lassen sich keine Unterschiedlichen daten speichern
    - Pflegeaufwändiger

## Lösung

    - Wir erstellen einen eigene struktur (Datentyp) aus unterschiedlichen Datentypen

### Syntax

```
struct <name>
{
        <datentyp> <feldname>;
    .
    .
    .
}
```

### Beispiel

```
struct <T_angestellte>
{
    string strNachname;
    string Wohnort;
    int i_gehalt; //Gehalt in Cent
}
 ```

### Definition

```
<structname><variablenname>;
T_angestelte angestellter1
 ```

### Nutzen

```
<variablenname>.<feldname>; 
angestellter1.strNachname;
cout << angestellter1.strNachname;
angestellter1.gehalt += 100.0;
 ```

### Struct & Array

```
<Strukturname> <variablenname>[<Anzahl>];
T_Angestellte Angestellte[10];
Angestellte[9].strNachname = "Müller"
 ```
