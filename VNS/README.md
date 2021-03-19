# 29.09.2020

## Aufgabe: Logischen Netzwerkplan Skizzieren

### Logischer Netzwerkplan

- aktive Komponenten: (layer 2,3) + Gerätebezeichnung
- räumliche zuordnung (kein architekturplan)
- IP-Adressen/Netzwerkadressen
- Verkabelung + Legende

### Verkabelungsplan

- Kabelführung + Kabelart
- Dosenbezeichnung
- Räumliche Zuordnung
- Legende
- Serverschrank mit Erdung (Potenzialausgleich) + Energieversorgung

# 19.10.2020

## Aufgabe: PAP csma-cd

### Wieso spielt CSMA/CD in netzen mit Switchen eine Untergeordnete Rolle?

- Switche (Logisch: Stern) Schalten die Ports direkt -> Keine Zugriffsverhandlung nötig

## Ethernet-Frames

### MAC-Adresse

| 00 : 00 : 00 | 00 : 00 : 00 | (6 Byte) |
| :- | :- | :- |
| Vendor | Device | 3 Byte |
| (IEEE 802.2 + 3) |   |   |

| 8 | 6 | 6 | 2 | 46-1500 | 4 |
| :- | :- | :- | :- | :- | :- |
| Preamble | Destination | Source | Type |   |   |

source adress table:



### Was ist eine Broadcast-Domäne? Was ist eine Kollisionsdomäne?

- Switche unterteilen in meherer Kollisionsdomänen und entlasten dadurch das netzwerk
- Switche und alle angeschlossenen geräte bilden eine gemeinsame Boradcast domäne
- Hubs Unterscheiden nicht zwischen Broadcast und Kollisionsdomänen
- Router (Gateways) trennen Broadcast-domänen.

### Was ist Latenz

- Verzögerung eingang des Pakets im Switch zu ausgang des Pakets aus dem Switch durch verarbeitung des Pakets im Switch

### Was ist Mikrosegmentierung

Unter Mikrosegmentierung versteht man die unterteilung meherer Kollisionsdomänen (Bis zu 1/Port!)

### Port Adress Table

1. Paket mit Queladresse 5, Zieldaddresse 2
2. Eitrag in SAT mit timestamp t0
3. Unicast Flooding
   Port 2-4
4. Senden Paket(QA Mac2, Za Mac5)
5. Senden an Port 1
6. Eintrag in der SAT mit t1

|Port | Adress | Time |
|:- | :- | :- |
|1 | Mac 5| t0|
|4 |Mac 2| t1 |

### IP Adresses 






