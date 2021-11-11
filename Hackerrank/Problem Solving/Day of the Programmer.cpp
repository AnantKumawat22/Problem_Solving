if(year >= 1700 && year <= 1917){
    if(year % 4 == 0) return ("12.09." + to_string(year));
    else return ("13.09." + to_string(year));
}
if(year >= 1919 && year <= 2700){
    if(year % 400 == 0) return ("12.09." + to_string(year));
    else if(year % 4 == 0 && year % 100 != 0) return ("12.09." + to_string(year));
    else return ("13.09." + to_string(year));
}
return ("26.09." + to_string(year));