# Pick a weather provider
# Climacell API Key
# export CLIMACELL_APIKEY=xxxxxxxxxxxxxx
# Or, OpenWeatherMap API Key
# export OPENWEATHERMAP_APIKEY=xxxxxxxxxxxxxx
# Or, MetOffice Weather DataHub Client ID + Secret
# export METOFFICEDATAHUB_CLIENT_ID=xxxxxxxxxxxxxx
# export METOFFICEDATAHUB_CLIENT_SECRET=xxxxxxxxxxxxxx
# Or, AccuWeather API Key and Location Key
# export ACCUWEATHER_APIKEY=xxxxxxxxxxxxxx
# export ACCUWEATHER_LOCATIONKEY=xxxxxxxxxxxxxx
# Or, Met.no self identification
# export METNO_SELF_IDENTIFICATION=your_email_address

# Your latitude and longitude to pass to weather providers
export WEATHER_LATITUDE=48.6667
export WEATHER_LONGITUDE=21.3333
# Choose CELSIUS or FAHRENHEIT
export WEATHER_FORMAT=CELSIUS
# api key pocasie bc84a405b2a80c9740fd134751870e14
export OPENWEATHERMAP_APIKEY=453908c07c05b09f72b558e27702475a


# Pick a calendar provider
# Google Calendar ID, you can get this from Google Calendar Settings
export GOOGLE_CALENDAR_ID=primary
# Or if you use Outlook Calendar, use python3 outlook_util.py to get available Calendar IDs
# export OUTLOOK_CALENDAR_ID=AQMkAxyz...

# Most new Waveshare are 2, older ones are 1
export WAVESHARE_EPD75_VERSION=2

# You can set this to DEBUG for troubleshooting, otherwise leave it at INFO. 
export LOG_LEVEL=INFO
# How long, in seconds, to cache weather for
export WEATHER_TTL=3600
# How long, in seconds, to cache the calendar for
export CALENDAR_TTL=3600
