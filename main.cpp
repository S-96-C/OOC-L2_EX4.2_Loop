#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  float discount, price, totalDis=0;

  cout << "Enter the customer total price :";
  cin >> price;

  while (price !=-1)
  {

    if (price>=10000)
    {
      discount = (25*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl; 
    }

    else if (price>=5000)
    {
      discount = (15*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl;
    }

     else if (price>=3000)
    {
      discount = (10*price)/100.0;
      cout << "Your discount is :" << fixed << setprecision(2) << discount << endl;
    }

     else
    {
      discount = 0.0;
      cout << "No discount :" << endl;
    }

    if (price>=3000)
    {
      totalDis = totalDis + discount;
    }

    cout << "Enter the customer total price :";
    cin >> price;

  }

  cout << "Total discount is :" << fixed << setprecision(2) << totalDis;

  return 0;
  
}