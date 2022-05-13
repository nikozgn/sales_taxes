# salex_taxes
for itemis coding challenge
# Requirements
* mingw 6.3.0 or newer
* Googletest-Framework in BuildSettings (Eclipse)

# Thoughtprocess
Ich habe die Coding-Challenge genutzt, um eine neue Sprache zu probieren. Ich hatte vorher noch keine Berührungspunkte mit C++. Da ich aus Erfahrung sagen kann, dass ich am besten neue Sprachen und Technologien durch kleine Projekte lerne, war dies perfekt dafür.

* Anmerkung zum code
- Nutzung von "using namespace std;" (wird oft als bad practice in größeren Projekten gesehen), jedoch da es isch um ein kleineres Projekt handelt und die Lesbarkeit erhöht wird habe ich  "using namespace std;" verwendet; in einem größeren Projekt sollten
die Namespaces anders verwendet werden z.B. "std:: ...."

* Implementierungsideen
-da dass sales-taxes-Problem offen lässt, wie es gelöst werden soll, sind
mir zwei Implementierungsmöglichkeiten eingefallen
1. Console-Input-Implementierung - User erhält Anweisungen über die Console und füg die Produkte selbst hinzu; Wenn der User fertig ist, wird ein Beleg in der Console angezeigt
2. Mock-Database-Implementierung -  Erstellung bspw. einer JSON-Datei als "Datenbank", welche die genannten Produkte in der Aufgabe enthält. So könnten "Bestellungen" über eine unique ID stattfinden

Ich habe mich für Nr. 1 entschieden, da ich eine User-Interaktion spannender fand.

* Steuernberechnung
Die Steuerberechnung ist simpel, da es nur Prozentrechnung ist. Das Runden auf die 0.05 Stelle ist mit math.ciel leicht lösbar. Da es sich bei 0.05 um 1/20 handelt reich ein multiplizieren mit und dem Aufrunden durch die ciel-Funktion. Anschließen wird wieder durch 20 geteilt, um auf die richtige Zahlengröße zurückzukehren.

* Implementierung
In C++ werden .cpp und .hpp Dateien verwendet, dabei handelt es sich bei .hpp um die Deklarationen und bei .cpp um die tatsächliche Implementierung. Entsprechend habe ich die Ordnerstruktur auch so aufgebaut. So konnte die Modulasierung der Anwendung gesichert werden.

# Testing
Mit dem Googletest-Framework konnte ich mit einem simplen test sicherstellen, dass meine "getTax()"-Methode richtig funktioniert

