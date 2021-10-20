double tip = (meal_cost * tip_percent) / 100;
double tax = (meal_cost * tax_percent) / 100;
int total = round(meal_cost + tip + tax);
cout << total;