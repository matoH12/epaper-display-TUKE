# epaper-display-TUKE

Nastavenie vystupu:

    'LOW_ONE': " ",     - nepouzivana
    'HIGH_ONE': " ",    - nepouzivana
    'ICON_ONE': " ",    - nepouzivana
    'WEATHER_DESC_1': "{}{}".format(str(round(32)), degrees),  - nepouzivana
    'WEATHER_DESC_2': "Teplota v miestnosti",    - nepouzivana
    'TIME_NOW': "Ing. Meno Priezvisko",     - Meno a priezvisko
    'DAY_ONE': "Miestnosť: N3-15",   - cislo miestnosti
    'DAY_NAME': "Vedúci USaPS",      - funkcia
    'CAL_DATETIME_1': starttime1 + " - " + EndTime1,    - popis kalendara
    'CAL_DESC_1': Subject1,

    'CAL_DATETIME_2': starttime2+ " - " + EndTime2,
    'CAL_DESC_2': Subject2,

    'CAL_DATETIME_3': starttime3+ " - " + EndTime3,
    'CAL_DESC_3': Subject3,

    'CAL_DATETIME_4': starttime4+ " - " + EndTime4,
    'CAL_DESC_4': Subject4,
    
    
    
   
   
   
v cykle ptrebne nastavit podmienku 
for row in reader:
    i = i + 1
    if row["Organizer"] == "miestnostx@tuke.sk":   - specifikuje sa email teda kto je vlastnik kalendara
    
    
    
Definovanie adresy CSV teda jeden kalendar = jedna miestnost

url = 'http://trolik.mhasin.eu/OUT/calendar.csv'
r = requests.get(url, allow_redirects=True)    
