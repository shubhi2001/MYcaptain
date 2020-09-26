#include<iostream>

using namespace std;

int main()

{

  int n;

  cout << "enter the id of your order from the following options:"<<endl;

  cout << "1. pizza -> Rs 239";

  cout << "2. Burger -> Rs 129";

  cout << "3. pasta -> Rs 179";

  cout << "4. french fries -> Rs 199";

  cout << "5. sandwich -> Rs 149";

  cin >> n;

  switch(n)

  {

  case 3:

    cout << "food item = pasta"<<endl;

    cout << "price = Rs 179";

    break;

    case 2:

    cout << "food item = burger"<<endl;

    cout << "price = Rs 129";

    break;

    case 1:

    cout << "food item = pizza"<<endl;

    cout << "price = Rs 239";

    break;

    case 4:

    cout << "food item = french fries"<<endl;

    cout << "price = Rs 199";

    break;

    case 5:

    cout << "food item = sandwich"<<endl;

    cout << "price = Rs 149";

    break;

    default:

    cout << "invalid input"<<endl;

  }





return 0;

}
