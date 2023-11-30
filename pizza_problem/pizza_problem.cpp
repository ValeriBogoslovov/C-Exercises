#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

/* Àíãåë è Áîðèñëàâà ñè êóïóâàò ïî åäíà ïèöà âñåêè äåí ñëåä ðàáîòà.
Ïèöàðèÿòà äàâà îòñòúïêà îò 20% çà âñÿêà âòîðà ïèöà
Àíãåë èçÿæäà ñâîÿòà ïèöà è 1/3 îò ïèöàòà íà Áîðèñëàâà
Äâàìàòà ñà ñå ðàçáðàëè äà ñïîäåëàò ðàçõîäèòå çà ïèöèòå íà áàçà êàêâè ñà èì çàïëàòèòå è êîëêî ñà èçÿëè îò ïèöèòå.
Åäíà ïèöà ñòðóâà 7 ëâ.
Àíãåë âçèìà 1800 ëâ çàïëàòà à Áîðèñëàâà 4000 ëâ çàïëàòà.
Ïî êîëêî ïëàùàò À è Á
Êîëêî ñà ïëàòèëè îáùî â êðàÿ íà ñåäìèöàòà? */

int main() {
  cout << fixed << setprecision(2);

  const double Angel_salary = 1800; //bgn
  const double Borislava_salary = 4000; //bgn

  double Angel_daily_pizza = 1;
  double Borislava_daily_pizza = 1;
  double one_pizza_pieces = 3;
  double Angel_portion = 2 / one_pizza_pieces;
  double Borislava_porion = 1 / one_pizza_pieces;

  //cout << "Angel portion: " << Angel_portion << endl;
  //cout << "Borislava portion: " << Borislava_porion << endl;

  double difference_in_salary = Borislava_salary / Angel_salary;
  cout << "Borislava and Angel salary difference is: " << difference_in_salary << " times" << endl;

  double one_pizza_price = 7; //bgn
  cout << "One pizza price: " << one_pizza_price << "lv" << endl;

  double second_pizza_discount = 0.2; //20%
  double second_pizza_price = one_pizza_price - (one_pizza_price * second_pizza_discount);
  cout << "Second pizza price: " << second_pizza_price << "lv" << endl;

  double daily_pizza_expense = one_pizza_price + second_pizza_price;
  double weekly_pizza_expense = daily_pizza_expense * 5;

  int daily_pizza_bought = Angel_daily_pizza + Borislava_daily_pizza;
  int weekly_pizza_bought = daily_pizza_bought * 5;

  double Angel_pizza_cost = daily_pizza_expense - (daily_pizza_expense * Borislava_porion); //based on pieces eaten
  double Borislava_pizza_cost = daily_pizza_expense - (daily_pizza_expense * Angel_portion); //based on pieces eaten

  cout << "Angel pizza cost based on pieces eaten: " << Angel_pizza_cost << "lv" << endl;
  cout << "Borislava pizza cost based on pieces eaten: " << Borislava_pizza_cost << "lv" << endl;

  double Angel_pizza_cost_on_salary = daily_pizza_expense - (Borislava_pizza_cost * difference_in_salary);
  double Borislava_pizza_cost_on_salary = daily_pizza_expense - Angel_pizza_cost_on_salary;

  cout << "Angel pizza cost based on salary difference: " << Angel_pizza_cost_on_salary << "lv" << endl;
  cout << "Borislava pizza cost based on salary difference: " << Borislava_pizza_cost_on_salary << "lv" << endl;

  cout << "Daily pizza expense for both: " << daily_pizza_expense << "lv" << endl;
  cout << "Weekly pizza expense for both: " << weekly_pizza_expense << "lv" << endl;

}
