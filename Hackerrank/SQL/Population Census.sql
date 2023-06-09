SELECT sum(ci.population) 
from CITY ci JOIN COUNTRY co ON ci.countrycode = co.code
WHERE co.continent = 'Asia'