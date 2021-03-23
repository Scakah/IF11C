
# 020 Übungsbeispiel

| | |Initialisierung| | Endwert|
|:-|:-|:-|:-|:-|
|Variable| Adresse| Inhalt| | Inhalt|
|i|0x2000 |5| | |
|pi|0x200C |/| |0 |
|pj|0x0 |/| | |
|pc|/|/ || |
|pd|0x30 |/ | | |
|a|0x200C |0 | | |

a) pi = i => pi -> 0x0005 //Segmentation Violation!
b) pi = *i => pi -> 0x2000, v = 0 //Segmentation Violation!
c) *pi = i => pi -> 0x200C, v = 5!
d) *pi = &i => pi -> 0x200C, v = 0x2000
e) pi = pj => pi -> 0x0, //Segmentation Violation!
f) pc = &pd => pc -> 0x0x2010, v = 0x30
g) pi = pc => pi -> 0x2010
h) pd = *pi => pd -> 0x0 //Segmentation Violation! 

# Pointer

## Aufgabe:

Das Kundenverzeichnis des Autohauses Nettman soll **Dynamisch** 
angelegt sein, um einen wachsenden Kundenstamm zu ermöglichen - 
Und die Verwaltungsarbeit zu Reduzieren.

## Pointer in C++
mittels des ```new```-operators können in c++ dynamische Speicherbereiche angeleft werden. Sollte die allozierung nicht funktionieren (z.B. Aufgrund mangelnden Speichers) wird hier eine Exception geworfen!

Der zurückgegebene 'Wert' ist keine variable im herkömmlichen, sondern ein Zeiger (Eine Adresse, ähnlich wie z.B. die Postadresse). Das 'Array' 'liegt' an der Addresse - und kann wie ein Array verwendet werden.

Wenn nun das Betriebssystem daten über die Eigentliche Größe des Speicherplatzes hinaus speichern - muss es neuen Speicherplatz 'hinzufügen'. Unter der Haube muss das System aber das Array an einen neuen Größeren Platz kopieren - und die Startadresse anpassen.

Um Dynamischen Speicher wieder freizugeben, nutz man den delete (bzw bei arrays delete[]) befehl auf dem speicher: ``` delete bereich``` bzw. ```delete[] bereichsArray```.
