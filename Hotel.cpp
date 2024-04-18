#include <iostream>
using namespace std;

int
main ()
{
  int choice;
  int quantity;
  int nrooms, npasta, nnoodles, ncoffee, nburger = 0;	//These are numbers or quantity of total items
  int sold_rooms, sold_pasta, sold_noodles, sold_coffee, sold_burger = 0;
  int total_rooms, total_pasta, total_noodles, total_coffee, total_burger = 0;	//These are the total prices

  cout <<
	"\n\t Number/Quantity of items we have , please fill the following: ";
  cout << "\n\t Available Rooms : ";
  cin >> nrooms;
  cout << "\n\t Available Pasta : ";
  cin >> npasta;
  cout << "\n\t Available Noodles : ";
  cin >> nnoodles;
  cout << "\n\t Available Coffee : ";
  cin >> ncoffee;
  cout << "\n\t Available Burger : ";
  cin >> nburger;


menu:
  cout << "\n\t\t Select From One Of The Following Options : ";
  cout << "\n\t 1.Rooms";
  cout << "\n\t 2.Pasta";
  cout << "\n\t 3.Noodles";
  cout << "\n\t 4.Coffee";
  cout << "\n\t 5.Burger";
  cout << "\n\t 6.More Info About Sales & Collection";
  cout << "\n\t 7.EXIT";

  cout << "\n\t\t Enter here number of your choice (type number from 1-7) : ";
  cin >> choice;

  switch (choice)
	{
	case 1:
	  cout << "\n\n Enter number of rooms";
	  cin >> quantity;
	  if (nrooms - sold_rooms >= 0)
		{
		  sold_rooms += quantity;
		  total_rooms += (quantity * 3600);	//assume price of room is 3600
		  cout << "\n\n\t" <<quantity<< " rooms available to you";
		}
	  else
		cout << "/n/n/t this : " <<quantity<< " remaining rooms";
	  break;


	case 2:
	  cout << "\n\n Enter number of pasta";
	  cin >> quantity;
	  if (npasta - sold_pasta >= 0)
		{
		  sold_pasta += quantity;
		  total_pasta += (quantity * 3600);	//assume price of pasta is 150
		  cout << "\n\n\t" <<quantity<< " pasta available to you";
		}
	  else
		cout << "/n/n/t this : " <<quantity<< " remaining pasta";
	  break;


	case 3:
	  cout << "\n\n Enter number of noodles";
	  cin >> quantity;
	  if (nnoodles - sold_noodles >= 0)
		{
		  sold_noodles += quantity;
		  total_noodles += (quantity * 120);	//assume price of noodles is 120
		  cout << "\n\n\t" <<quantity<< " noodles available to you";
		}
	  else
		cout << "/n/n/t this : " <<quantity<< " remaining noodles";
	  break;


	case 4:
	  cout << "\n\n Enter number of coffee";
	  cin >> quantity;
	  if (ncoffee - sold_coffee >= 0)
		{
		  sold_coffee += quantity;
		  total_coffee += (quantity * 70);	//assume price of coffee is 70
		  cout << "\n\n\t" <<quantity<< " coffee available to you";
		}
	  else
		cout << "/n/n/t this : " <<quantity<< " remaining coffee";
	  break;


	case 5:
	  cout << "\n\n Enter number of burger";
	  cin >> quantity;
	  if (nburger - sold_burger >= 0)
		{
		  sold_burger += quantity;
		  total_burger += (quantity * 210);	//assume price of burger is 210
		  cout << "\n\n\t" <<quantity<< " burger available to you";
		}
	  else
		cout << "/n/n/t this : " <<quantity<< " remaining burger";
	  break;



	case 6:
	  //rooms info
	  cout << "\n\n\t Number of rooms we have : " << nrooms;
	  cout << "\n\n\t Number of rooms sold : " << sold_rooms;
	  cout << "\n\n\t Number of rooms remaining : " << nrooms - sold_rooms;
	  cout << "\n\n\t Total of collection rooms : " << total_rooms;

	  //pasta info
	  cout << "\n\n\t Number of pasta we have : " << npasta;
	  cout << "\n\n\t Number of pasta sold : " << sold_pasta;
	  cout << "\n\n\t Number of pasta remaining : " << npasta - sold_pasta;
	  cout << "\n\n\t Total of collection pasta : " << total_pasta;

	  //noodles info
	  cout << "\n\n\t Number of noodles we have : " << nnoodles;
	  cout << "\n\n\t Number of noodles sold : " << sold_noodles;
	  cout << "\n\n\t Number of noodles remaining : " << nnoodles -
		sold_noodles;
	  cout << "\n\n\t Total of collection noodles : " << total_noodles;

	  //coffee info
	  cout << "\n\n\t Number of coffee we have : " << ncoffee;
	  cout << "\n\n\t Number of coffee sold : " << sold_coffee;
	  cout << "\n\n\t Number of coffee remaining : " << ncoffee - sold_coffee;
	  cout << "\n\n\t Total of coffee coffee : " << total_coffee;


	  //burger info
	  cout << "\n\n\t Number of burger we have : " << nburger;
	  cout << "\n\n\t Number of burger sold : " << sold_burger;
	  cout << "\n\n\t Number of burger remaining : " << nburger - sold_burger;
	  cout << "\n\n\t Total of collection burger : " << total_burger;


	case 7:
	  exit (0);
	default:
	cout <<
		"/n/n/t Invalid Response. Please select number from mentioned choices or enter it correctly.";}
  goto menu;					//jump statement transfer or modify changes to the initial menu after program being executed




  return 0;
}
