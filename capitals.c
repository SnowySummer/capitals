// #############
// ## Country ##
// #############

typedef struct {
	char name[WORD_SIZE];
	char capital[WORD_SIZE];
} Country;

Country country[] = {

	// --- A ---
	{.name = "Afghanistan", .capital = "Kabul"},
	{.name = "Albania", .capital = "Tirana"},
	{.name = "Algeria", .capital = "Algiers"},
	{.name = "Andorra", .capital = "Andorra la Vella"},
	{.name = "Angola", .capital = "Luanda"},
	{.name = "Antigua and Barbuda", .capital = "Saint John's"},
	{.name = "Argentina", .capital = "Buenos Aires"},
	{.name = "Armenia", .capital = "Yerevan"},
	{.name = "Australia", .capital = "Canberra"},
	{.name = "Austria", .capital = "Vienna"},
	{.name = "Azerbaijan", .capital = "Baku"},

	// --- B ---
	{.name = "Bahamas", .capital = "Nassau"},
	{.name = "Bahrain", .capital = "Manama"},
	{.name = "Bangladesh", .capital = "Dhaka"},
	{.name = "Barbados", .capital = "Bridgetown"},
	{.name = "Belarus", .capital = "Minsk"},
	{.name = "Belgium", .capital = "Brussels"},
	{.name = "Belize", .capital = "Belmopan"},
	{.name = "Benin", .capital = "Porto-Novo"},
	{.name = "Bhutan", .capital = "Thimphu"},
	{.name = "Bolivia", .capital = "La Paz"},
	{.name = "Bosnia and Herzegovina", .capital = "Sarajevo"},
	{.name = "Botswana", .capital = "Gaborone"},
	{.name = "Brazil", .capital = "Brasilia"},
	{.name = "Brunei", .capital = "Bandar Seri Begawan"},
	{.name = "Bulgaria", .capital = "Sofia"},
	{.name = "Burkina Faso", .capital = "Ouagadougou"},
	{.name = "Burundi", .capital = "Gitega"},

	// --- C ---
	{.name = "Cambodia", .capital = "Phnom Penh"},
	{.name = "Cameroon", .capital = "Yaounde"},
	{.name = "Canada", .capital = "Ottawa"},
	{.name = "Cape Verde", .capital = "Praia"},
	{.name = "Central African Republic", .capital = "Bangui"},
	{.name = "Chad", .capital = "N'Djamena"},
	{.name = "Chile", .capital = "Santiago"},
	{.name = "China", .capital = "Beijing"},
	{.name = "Colombia", .capital = "Bogota"},
	{.name = "Comoros", .capital = "Moroni"},
	{.name = "Congo", .capital = "Brazzaville"},
	{.name = "Costa Rica", .capital = "San Jose"},
	{.name = "Croatia", .capital = "Zagreb"},
	{.name = "Cuba", .capital = "Havana"},
	{.name = "Cyprus", .capital = "Nicosia"},
	{.name = "Czech Republic", .capital = "Prague"},

	// --- D ---
	{.name = "Democratic Republic of the Congo", .capital = "Kinshasa"},
	{.name = "Denmark", .capital = "Copenhagen"},
	{.name = "Djibouti", .capital = "Djibouti"},
	{.name = "Dominica", .capital = "Roseau"},
	{.name = "Dominican Republic", .capital = "Santo Domingo"},

	// --- E ---
	{.name = "East Timor", .capital = "Dili"},
	{.name = "Ecuador", .capital = "Quito"},
	{.name = "Egypt", .capital = "Cairo"},
	{.name = "El Salvador", .capital = "San Salvador"},
	{.name = "Equatorial Guinea", .capital = "Malabo"},
	{.name = "Eritrea", .capital = "Asmara"},
	{.name = "Estonia", .capital = "Talinn"},
	{.name = "Eswatini", .capital = "Lobanba, Mbabane"},
	{.name = "Ethiopia", .capital = "Addis Ababa"},

	// --- F ---
	{.name = "Fiji", .capital = "Suva"},
	{.name = "Finland", .capital = "Helsinki"},
	{.name = "France", .capital = "Paris"},

	// --- G ---
	{.name = "Gabon", .capital = "Libreville"},
	{.name = "Georgia", .capital = "Tbilisi"},
	{.name = "Germany", .capital = "Berlin"},
	{.name = "Ghana", .capital = "Accra"},
	{.name = "Greece", .capital = "Athens"},
	{.name = "Grenada", .capital = "Saint George's"},
	{.name = "Guatemala", .capital = "Guatemala City"},
	{.name = "Guinea", .capital = "Conakry"},
	{.name = "Guinea-Bissau", .capital = "Bissau"},
	{.name = "Guyana", .capital = "Georgetown"},

	// --- H ---
	{.name = "Haiti", .capital = "Port-au-Prince"},
	{.name = "Honduras", .capital = "Tegucigalpa"},
	{.name = "Hungary", .capital = "Budapest"},

	// --- I ---
	{.name = "Iceland", .capital = "Reykjavik"},
	{.name = "India", .capital = "New Delhi"},
	{.name = "Indonesia", .capital = "Jakarta"},
	{.name = "Iran", .capital = "Tehran"},
	{.name = "Iraq", .capital = "Baghdad"},
	{.name = "Ireland", .capital = "Dublin"},
	{.name = "Israel", .capital = "Jerusalem"},
	{.name = "Italy", .capital = "Rome"},
	{.name = "Ivory Coast", .capital = "Yamoussoukro"},

	// --- J ---
	{.name = "Jamaica", .capital = "Kingston"},
	{.name = "Japan", .capital = "Tokyo"},
	{.name = "Jordan", .capital = "Amman"},

	// --- K ---
	{.name = "Kazakhstan", .capital = "Astana"},
	{.name = "Kenya", .capital = "Nairobi"},
	{.name = "Kiribati", .capital = "South Tarawa"},
	{.name = "Kosovo", .capital = "Pristina"},
	{.name = "Kuwait", .capital = "Kuwait City"},
	{.name = "Kyrgyzstan", .capital = "Bishkek"},

	// --- L ---
	{.name = "Laos", .capital = "Vientiane"},
	{.name = "Latvia", .capital = "Riga"},
	{.name = "Lebanon", .capital = "Beirut"},
	{.name = "Lesotho", .capital = "Maseru"},
	{.name = "Liberia", .capital = "Monrovia"},
	{.name = "Libya", .capital = "Tripoli"},
	{.name = "Liechenstein", .capital = "Vaduz"},
	{.name = "Lithuania", .capital = "Vilnius"},
	{.name = "Luxembourg", .capital = "Luxembourg"},

	// --- M ---
	{.name = "Madagascar", .capital = "Anananarivo"},
	{.name = "Malawi", .capital = "Lilongwe"},
	{.name = "Malaysia", .capital = "Kuala Lumpur"},
	{.name = "Maldives", .capital = "Male"},
	{.name = "Mali", .capital = "Bamako"},
	{.name = "Malta", .capital = "Valleta"},
	{.name = "Mauritania", .capital = "Nouakchott"},
	{.name = "Mauritius", .capital = "Port Louis"},
	{.name = "Mexico", .capital = "Mexico City"},
	{.name = "Micronesia", .capital = "Palikir"},
	{.name = "Moldova", .capital = "Chisinau"},
	{.name = "Monaco", .capital = "Monaco"},
	{.name = "Mongolia", .capital = "Ulaanbaatar"},
	{.name = "Montenegro", .capital = "Podgorica"},
	{.name = "Morocco", .capital = "Rabat"},
	{.name = "Mozambique", .capital = "Maputo"},
	{.name = "Myanmar", .capital = "Naypyidaw"},

	// --- N ---
	{.name = "Namibia", .capital = "Windhoek"},
	{.name = "Nauru", .capital = "Yaren"},
	{.name = "Nepal", .capital = "Kathmandu"},
	{.name = "Netherlands", .capital = "Amsterdam"},
	{.name = "New Zealand", .capital = "Wellington"},
	{.name = "Nicaragua", .capital = "Managua"},
	{.name = "Niger", .capital = "Niamey"},
	{.name = "Nigeria", .capital = "Abuja"},
	{.name = "North Korea", .capital = "Pyongyang"},
	{.name = "North Macedonia", .capital = "Skopje"},
	{.name = "Norway", .capital = "Oslo"},

	// --- O ---
	{.name = "Oman", .capital = "Muscat"},

	// --- P ---
	{.name = "Pakistan", .capital = "Islamabad"},
	{.name = "Palau", .capital = "Ngerulmud"},
	{.name = "Palestine", .capital = "Jerusalem"},
	{.name = "Panama", .capital = "Panama City"},
	{.name = "Papua New Guinea", .capital = "Port Moresby"},
	{.name = "Paraguay", .capital = "Asuncion"},
	{.name = "Peru", .capital = "Lima"},
	{.name = "Philippines", .capital = "Manila"},
	{.name = "Poland", .capital = "Warsaw"},
	{.name = "Portugal", .capital = "Lisbon"},

	// --- Q ---
	{.name = "Qatar", .capital = "Doha"},

	// --- R ---
	{.name = "Romania", .capital = "Bucharest"},
	{.name = "Russia", .capital = "Moscow"},
	{.name = "Rwanda", .capital = "Kigali"},

	// --- S ---
	{.name = "Saint Kitts and Nevis", .capital = "Basseterre"},
	{.name = "Saint Lucia", .capital = "Castries"},
	{.name = "Saint Vincent and the Grenadines", .capital = "Kingstown"},
	{.name = "Samoa", .capital = "Apia"},
	{.name = "San Marino", .capital = "San Marino"},
	{.name = "Sao Tome and Principe", .capital = "Sao Tome"},
	{.name = "Saudi Arabia", .capital = "Riyadh"},
	{.name = "Senegal", .capital = "Dakar"},
	{.name = "Serbia", .capital = "Belgrade"},
	{.name = "Seychelles", .capital = "Victoria"},
	{.name = "Sierra Leone", .capital = "Freetown"},
	{.name = "Singapore", .capital = "Singapore"},
	{.name = "Slovakia", .capital = "Bratislava"},
	{.name = "Slovenia", .capital = "Ljubljana"},
	{.name = "Solomon Islands", .capital = "Honiara"},
	{.name = "Somalia", .capital = "Mogadishu"},
	{.name = "South Africa", .capital = "Pretoria, Bloemfontein, Cape Town"},
	{.name = "South Korea", .capital = "Seoul"},
	{.name = "South Sudan", .capital = "Juba"},
	{.name = "Spain", .capital = "Madrid"},
	{.name = "Sri Lanka", .capital = "Sri Jayawardenepura Kotte"},
	{.name = "Sudan", .capital = "Khartoum"},
	{.name = "Suriname", .capital = "Paramaribo"},
	{.name = "Sweden", .capital = "Stockholm"},
	{.name = "Switzerland", .capital = "Bern"},
	{.name = "Syria", .capital = "Damascus"},

	// --- T ---
	{.name = "Taiwan", .capital = "Taipei"},
	{.name = "Tajikstan", .capital = "Dushanbe"},
	{.name = "Tanzania", .capital = "Dodoma"},
	{.name = "Thailand", .capital = "Bangkok"},
	{.name = "The Gambia", .capital = "Banjul"},
	{.name = "Togo", .capital = "Lome"},
	{.name = "Tonga", .capital = "Nuku'alofa"},
	{.name = "Trinidad and Tobago", .capital = "Port of Spain"},
	{.name = "Tunisia", .capital = "Tunis"},
	{.name = "Turkey", .capital = "Ankara"},
	{.name = "Turkmenistan", .capital = "Ashgabat"},
	{.name = "Tuvalu", .capital = "Funafuti"},

	// --- U ---
	{.name = "Uganda", .capital = "Kampala"},
	{.name = "Ukraine", .capital = "Kyiv"},
	{.name = "United Arab Emirates", .capital = "Abu Dhabi"},
	{.name = "United Kingdom", .capital = "London"},
	{.name = "United States", .capital = "Washington D.C."},
	{.name = "Uruguay", .capital = "Montevideo"},
	{.name = "Uzbekistan", .capital = "Tashkent"},

	// --- V ---
	{.name = "Vanatu", .capital = "Port Vila"},
	{.name = "Vatican City", .capital = "Vatican City"},
	{.name = "Venezuela", .capital = "Caracas"},
	{.name = "Vietnam", .capital = "Hanoi"},

	// --- Y ---
	{.name = "Yemen", .capital = "Sana'a"},

	// --- Z ---
	{.name = "Zambia", .capital = "Lusaka"},
	{.name = "Zimbabwe", .capital = "Harare"},
};
int country_size = sizeof(country) / sizeof(country[0]);
