import csv
import logging
from utility import update_svg, configure_logging
import requests
import os

configure_logging()

if os.path.exists("calendar.csv"):
  os.remove("calendar.csv")

url = 'http://admin.ad.tuke.sk/calendardump/n3.15@room.tuke.sk.csv'
r = requests.get(url, allow_redirects=True)

open('calendar.csv', 'wb').write(r.content)


csvfile = open('calendar.csv', 'r', encoding='utf-8')

i = 0
starttime1 = 0
starttime2 = 0
starttime3 = 0
starttime4 = 0

EndTime1 = 0
EndTime2 = 0
EndTime3 = 0
EndTime4 = 0

Subject1 = 0
Subject2 = 0
Subject3 = 0
Subject4 = 0


fieldnames = ("StartTime","EndTime","Duration","Type","Subject","Location","Organizer","Attendees","AppointmentState","Notes","HasAttachments","IsReminderSet")
reader = csv.DictReader( csvfile, fieldnames)
for row in reader:
    i = i + 1
    if row["Organizer"] == "pavol.dzurnak@tuke.sk":
        if i == 3:
           starttime1 = row["StartTime"]
           EndTime1 = row["EndTime"]
           Subject1 = row["Subject"]
        if i == 4:
           starttime2 = row["StartTime"]
           EndTime2 = row["EndTime"]
           Subject2 = row["Subject"]
        if i == 5:
           starttime3 = row["StartTime"]
           EndTime3 = row["EndTime"]
           Subject3 = row["Subject"]
        if i == 6:
           starttime4 = row["StartTime"]
           EndTime4 = row["EndTime"]
           Subject4 = row["Subject"]


if starttime1 == 0:
    starttime1 = ' '
if EndTime1 == 0:
    EndTime1 = ' '
if Subject1 == 0:
    Subject1 = ' '

if starttime2 == 0:
    starttime2 = ' '
if EndTime2 == 0:
    EndTime2 = ' '
if Subject2 == 0:
    Subject2 = ' '

if starttime3 == 0:
    starttime3 = ' '
if EndTime3 == 0:
    EndTime3 = ' '
if Subject3 == 0:
    Subject3 = ' '


if starttime4 == 0:
    starttime4 = ' '
if EndTime4 == 0:
    EndTime4 = ' '
if Subject4 == 0:
    Subject4 = ' '


output_dict = {
    'LOW_ONE': " ",
    'HIGH_ONE': " ",
    'ICON_ONE': " ",
    'WEATHER_DESC_1': "{}{}".format(str(round(32)), degrees),
    'WEATHER_DESC_2': "Teplota v miestnosti",
    'TIME_NOW': "Ing. Pavol Dzurňák",
    'DAY_ONE': "Miestnosť: N3-15",
    'DAY_NAME': "Vedúci USaPS",
    'CAL_DATETIME_1': starttime1 + " - " + EndTime1,
    'CAL_DESC_1': Subject1,

    'CAL_DATETIME_2': starttime2+ " - " + EndTime2,
    'CAL_DESC_2': Subject2,

    'CAL_DATETIME_3': starttime3+ " - " + EndTime3,
    'CAL_DESC_3': Subject3,

    'CAL_DATETIME_4': starttime4+ " - " + EndTime4,
    'CAL_DESC_4': Subject4,

    'ALERT_MESSAGE': ""  # unused, see: https://github.com/mendhak/waveshare-epaper-display/issues/13
}

logging.debug("main() - {}".format(output_dict))

logging.info("Updating SVG")
template_svg_filename = 'screen-template.svg'
output_svg_filename = 'screen-output-weather.svg'
update_svg(template_svg_filename, output_svg_filename, output_dict)






