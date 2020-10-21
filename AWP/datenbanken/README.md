# 'Warum Datenbanken?'

- Zentrale Verwaltung von Information
- Einfaches sortieren, filtern und abfragen von Informationen
- Schnelle Zugriffe
- Sicherstellung der Informationsintegrität/
- Redundanzfreiheit
- Einfachere Wartung
- Einbindung in die Prozesse/Abläufe des Unternehmens

## Funktionen des DBMS

- *Datendefinition* :Definieren von Datenstrukturen
- _Datenmanipulation_: Eingeben, Ändern und Löschen der Daten
- _Datenabfrage_: Ausgeben der Daten mit einem Filter
- _Regulierung des Nutzerzugangs_: Regulieren des Nutzerzugangs an die Daten
- _DatenÜbertragung_: Übertragung der Daten

## ANSI-Architekturmodell

- Externes Schema
  - Darstellung für Nutzer 
  - Interne und Konzeptionelle Zusammenhänge fehlen (z.b. Ids, relationen)
  - Logisch abstrahierte werte werden 

- Konzeptionelles Schema
  - Die Struktur muss anwendungsunspezifisch gehalten werden
  - Interne Struktur hat keine Auswirkung 
  - Relationen und 'Entities' werden Anwendungslogisch gespeichert

- Internes Schema
  - Struktur sorgt für die Basiseigenschaften (z.B. Ausfalsicherheit)
  - Betrachtung von Speicher- (Wort-)größen, Dateiformaten, Netwerktechnick