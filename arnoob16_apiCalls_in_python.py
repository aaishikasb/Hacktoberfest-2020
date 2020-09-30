import requests
url = 'https://covid19.mathdro.id/api/countries/india'

response = requests.get(url)
data = response.json()

confirmedCases = data['confirmed']['value']
recovered = data['recovered']['value']
deaths = data['deaths']['value']

print('============== Covid Updates ==============')
print()
print("Confirmed Cases - ", confirmedCases)
print("Recoveries - ", recovered)
print("Deceased - ", deaths)
print()
print('============================================')