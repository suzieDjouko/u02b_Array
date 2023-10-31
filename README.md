# u02b_Array
Für ein Funkmasten-Register wird ein Verwaltungsprogramm gebraucht:

## Daten:

Das Programm soll die Daten von max. 100 Funkmasten verwalten. Pro Funkmast
werden
- Anzahl der Antennen,
  
- Reichweite,
  
- Höhe und
  
- geografische Position
  
verwaltet. Die geografische Position ist durch die geografische Breiten- (Latitude) und
Längenangabe (Longitude) als Gleitkommazahlen festgehalten.
Eine Besonderheit ist, dass das Programm bereits bei der Datenerfassung prüfen muss, ob
eine Überschreitung der Höhe des Funkmasts vorliegt. Die Höhenbegrenzung hängt von
der Zahl der Antennen ab. Ein Funkmast mit bis zu vier Antennen darf maximal 30 Meter
hoch sein, ein Funkmast mit mehr als vier Antennen darf maximal 50 Meter hoch sein.
Definieren Sie eine Klasse „cFunkMast“ mit den geeigneten Datenelementen.
Programmieren Sie einen universellen Konstruktor für diese Klasse. Der Konstruktor soll
folgende Vorgabe-Werte eintragen:
- Anzahl Antennen: 0
- Reichweite: 0.0
- Hoehe: 0.0
- Latitude: 49.7
- Longitude: 8.3
Und er muss die Höhenkorrektur durchführen.

## Eingabe:

Die Klasse soll eine Methode eingabe() besitzen zur Eingabe der Werte durch den
Anwender. Auch diese Methode muss die Höhenkorrektur durchführen. (Tipp: private
Methode korrHoehe(), die im Konstruktor und bei eingabe() verwendet wird.)

## Ausgabe:

Erstellen Sie eine Methode ausgabe() für diese Klasse. Diese Funktion gibt die Daten
eines Objekts aus, wenn es sich nicht um ein „leeres“ also unbesetztes Objekt im
Array handelt.
Das Programm soll eine Liste der Funkmasten ausgeben, in Form einer Tabelle: Die
Spalten der Tabelle sind „Antennenzahl“, „Leistung“, „Höhe“ und „Position“.
Tipp: Anhand des Werts 0 des Attributs Antennen soll die Ausgabe-Funktion
unterscheiden können, ob es sich um ein „leeres“ Objekt handelt.
Definieren Sie im Hauptprogramm die 100 Funkmasten als ein Array aus Objekten der
Klasse „cFunkMast“. Befüllen Sie die ersten 5 Objekte mit Werten durch Aufruf der
Methode eingabe().
Bauen Sie für das Ausgeben eine geeignete Schleife.
Tipp: Anhand des Werts 0 des Attributs Antennen soll die Ausgabe-Funktion
unterscheiden können, ob es sich um ein „leeres“ Objekt handelt. 
