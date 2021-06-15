#include<iostream>
#include<stdlib.h>
#include<stdio.h>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
#include<math.h>
using namespace std;
struct train
{
	int numseat;
	int c;
	int s;
	int co, typecoach;
	char sc;
	bool bo;
};
int main()
{
	train i, j, k, g;
	train a[10][30];
	for (i.co = 0; i.co<10; i.co++)
	{
		for (j.co = 0; j.co<30; j.co++)
		{
			a[i.co][j.co].numseat = 0;
		}
	}
	for (k.co = 0; k.co<10000; k.co++)
	{
		cout << "     _____________________________________________________________________________________________________" << "\n";
		cout << "     |To reserve a ticket, please click on the character -----> (r)" << "                                       |\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout << "     |To cancel booking, please click on the character -----> (c)" << "                                         |\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout << "     |To know if the coach has a seat available or not, please click on the character -----> (a)" << "          |\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout << "     |To know if the seat is available or not in a specific coach, please click on the character ----> (b)" << "|\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout << "     |To know the number of seats available in a specific coach, please click on the character -----> (n) |" << "\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout << "     |To know the seats status in a specific coach, please click on the character -----> (s)" << "              |\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";;
		cout << "     |To exit, please click on the character -----> (e)" << "                                                   |\n";
		cout << "     |____________________________________________________________________________________________________|" << "\n";
		cout<<"Enter your choose ---> ";
		train ch;
		cin >> ch.sc;
		system("cls");
		/*??? ????? ??? ??????*/
		if (ch.sc == 'r')
		{
			train c;
			train tr;
			cout << "-----> " << "Coach 1 , 2 is a VIP Coach" << "\n";
			cout << "-----> " << "Coach 3 , 4 , 5 is a First Class Coach " << "\n";
			cout << "-----> " << "Coach 6 , 7 . 8 , 9 , 10 is a Second Class Coach " << "\n";
			
			for (g.co = 0; g.co<3000; g.co++)
			{
				train coach, seat;
				
				cout << "-----------------------------------------------------------------------------------------------------" << "\n";
				cout << "For reservations on VIP Coach( 1->2 ),please click on number -----> (1)" << "\n";
				cout << "-----------------------------------------------------------------------------------------------------" << "\n";
				cout << "For reservations in First Class Coach( 3->4->5 ),please click on number -----> (2)" << "\n";
				cout << "-----------------------------------------------------------------------------------------------------" << "\n";
				cout << "For reservation in Second Class Coach( 6->7->8->9->10 ),please click on number -----> (3)" << "\n";
				cout << "-----------------------------------------------------------------------------------------------------" << "\n";
				cout<<"Enter your choose ---> ";
				cin >> tr.typecoach;
				
				cout << "Please enter coach number you want -----> " ;
				cin >> coach.c;
				cout << "Please enter the seat number you want -----> " ;
				cin >> seat.s;
				
				if (coach.c>10 || seat.s>30 || coach.c <= 0 || seat.s <= 0)
				{
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					cout << "           |        The number coach or the number seat you entered is invalid" << ",please enter correct number " << "       |\n";
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					
				}
				else if (a[coach.c - 1][seat.s - 1].numseat == 1)
				{
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					cout << "           |                               The seat is not available" << "                                              |\n";
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					
				}
				else if (tr.typecoach == 1 && coach.c >= 1 && coach.c <= 2)
				{
					cout << "            _____________________________________________________________________________________________" <<"\n";
					cout << "            |                          <: Integrated Reservation Ticket :>" << "                              |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |Ministry of transportation" << "                                                                 |\n" ;
					cout << "            |Egypt Railways" << "                                                                             |\n";
					cout << "            |VIP Coach" << "                                                                                  |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |                   " << "Destination travel : : " << "Cairo " << "---To--->" << " Assiut" << "                           |\n";
					                      if (coach.c<10)
					cout << "            |Coach : " << "(" << coach.c << ")                                                                                |\n";
										  else
                    cout << "            |Coach : " << "(" << coach.c << ")                                                                               |\n";
					cout << "            |                                                                                           |\n";
					                      if(seat.s<10) 
					cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                                |\n";
										  else
                    cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                               |\n";
					cout << "            |___________________________________________________________________________________________|" << "\n";
					a[coach.c - 1][seat.s - 1].numseat = 1;
					
				}
				else if (tr.typecoach == 2 && coach.c >= 3 && coach.c <= 5)
				{
					cout << "            _____________________________________________________________________________________________" <<"\n";
					cout << "            |                          <: Integrated Reservation Ticket :>" << "                              |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |Ministry of transportation" << "                                                                 |\n" ;
					cout << "            |Egypt Railways" << "                                                                             |\n";
					cout << "            |First Class Coach" << "                                                                          |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |                   " << "Destination travel : : " << "Cairo " << "---To--->" << " Assiut" << "                           |\n";
					                      if (coach.c<10)
					cout << "            |Coach : " << "(" << coach.c << ")                                                                                |\n";
										  else
                    cout << "            |Coach : " << "(" << coach.c << ")                                                                               |\n";
					cout << "            |                                                                                           |\n";
					                      if(seat.s<10) 
					cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                                |\n";
										  else
                    cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                               |\n";
					cout << "            |___________________________________________________________________________________________|" << "\n";
					a[coach.c - 1][seat.s - 1].numseat = 1;
					
				}
				else if (tr.typecoach == 3 && coach.c >= 6 && coach.c <= 10)
				{
					cout << "            _____________________________________________________________________________________________" <<"\n";
					cout << "            |                          <: Integrated Reservation Ticket :>" << "                              |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |Ministry of transportation" << "                                                                 |\n" ;
					cout << "            |Egypt Railways" << "                                                                             |\n";
					cout << "            |Second Class Coach" << "                                                                         |\n";
					cout << "            |                                                                                           |\n";
					cout << "            |                   " << "Destination travel : : " << "Cairo " << "---To--->" << " Assiut" << "                           |\n";
					                      if (coach.c<10)
					cout << "            |Coach : " << "(" << coach.c << ")                                                                                |\n";
										  else
                    cout << "            |Coach : " << "(" << coach.c << ")                                                                               |\n";
					cout << "            |                                                                                           |\n";
					                      if(seat.s<10) 
					cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                                |\n";
										  else
                    cout <<	"            |Seat  : " << "(" << seat.s << ")" << "                                                                               |\n";
					cout << "            |___________________________________________________________________________________________|" << "\n";
					a[coach.c - 1][seat.s - 1].numseat = 1;
					
				}
				else {
					cout << "             |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					cout << "             |                                     Enter the correct coach type" << "                                     |\n";
					cout << "             |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			
				}
				cout << "\n";
				cout << "To reserve another ticket,please click on the character -----> (y) else -----> (n)" <<" ------>>  ";
				cin >> c.sc;
				if (c.sc == 'n')
				{
					
					break;
				}
				system("cls");
				
			}
			system("cls");
		}
		/*??? ????? ??? ?????? ?????*/
		else if (ch.sc == 'c')
		{
			train coach, seat;
			cout << "Please enter the number coach -----> ";
			cin >> coach.c;
			cout << "Please enter the number of seat -----> " ;
			cin >> seat.s;
			
			if (coach.c>10 || seat.s>30 || coach.c <= 0 || seat.s <= 0)
			{
				    cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					cout << "           |        The number coach or the number seat you entered is invalid" << ",please enter correct number " << "       |\n";
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else if (a[coach.c - 1][seat.s - 1].numseat == 0)
			{
				    cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				    cout << "           |        This ticket is wrong, please enter the correct ticket number to cancel the booking" << "            |\n";
				    cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else
			{
				a[coach.c - 1][seat.s - 1].numseat = 0;
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				cout << "           |                                   Reservation has been canceled" << "                                       |\n";
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
		}
		/*??? ????? ?????? ?? ??? ??? ???? ????? ????? ?? ?? ? ??? ??????*/
		else if (ch.sc == 'a')
		{
			train c;
			c.co = 0;
			train coach, seat;
			cout << "Please enter the number coach -----> " ;
			cin >> coach.c;
			
			if (coach.c>10 || coach.c <= 0)
			{
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				cout << "           |                  The number coach you entered is invalid" << ",please enter correct number " << "                |\n";
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else
			{
				for (j.co = 0; j.co<30; j.co++)
				{
					if (a[coach.c - 1][j.co].numseat == 0)
					{
						c.co++;
					}
				}
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				if (c.co>0)
			    cout << "           |                             There are seats available in this coach" << "                                  |\n";
				else
		    	cout << "           |                             There are no available seats in this coach" << "                               |\n";
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			
		}
		/*??? ????? ??? ?? ??? ??? ?????? ???? ?? ?? ? ???? ?????*/
		else if (ch.sc == 'b')
		{
			train c;
			c.co = 0;
			train coach, seat;
			train av;
			av.bo = 0;
			cout << "Please enter the number coach -----> ";
			cin >> coach.c;
			cout << "Please enter the number of seat -----> " ;
			cin >> seat.s;
			
			if (coach.c>10 || seat.s>30 || coach.c <= 0 || seat.s <= 0)
			{
				    cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
					cout << "           |        The number coach or the number seat you entered is invalid" << ",please enter correct number " << "       |\n";
					cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else
			{
				for (j.co = 0; j.co<30; j.co++)
				{
					if (a[coach.c - 1][seat.s - 1].numseat == 1)
					{
						av.bo = 1;
						break;
					}
				}
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				if (av.bo == 1)
				{
				cout << "           |                                    The seat is not available" << "                                         |\n";
				}
				else
				{
				cout << "           |                                    The seat is available" << "                                             |\n";
				}
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
		}
		/*??? ????? ?????? ??? ??????? ??????? ? ???? ?????*/
		else if (ch.sc == 'n')
		{
			train c;
			c.co = 0;
			train coach, seat;
			train av;
			av.bo = 0;
			cout << "Please enter the number coach -----> " ;
			cin >> coach.c;
			
			if (coach.c>10 || coach.c <= 0)
			{
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				cout << "           |                 The number coach you entered is invalid" << ",please enter correct number " << "                 |\n";
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else
			{
				for (j.co = 0; j.co<30; j.co++)
				{
					if (a[coach.c - 1][j.co].numseat == 0)
					{
						c.co++;
					}
				}
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";

				if (c.co>0)
				{
					if (c.co<10)
				cout << "           |                                     The  number of available seat = " << c.co << "                                |\n";
					else
				cout << "           |                                     The  number of available seat = " << c.co << "                               |\n";
				}
				else
				{
				cout << "           |                               There are no seats available in this coach" << "                             |\n";
				}
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			
		}
		/*??? ????? ?????? ?????? ?????? ????? ?????*/
		else if (ch.sc == 's')
		{
			train c, m;
			c.co = 0;
			m.co = 0;
			train coach, seat;
			cout << "Please enter the number coach -----> " ;
			cin >> coach.c;
			
			if (coach.c>10 || coach.c <= 0)
			{
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
				cout << "           |                 The number coach you entered is invalid" << ",please enter correct number " << "                 |\n";
				cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			}
			else
			{
				cout << "          |<><><><><><><><><><><><><><><><><><><><>" << "|\n";
                cout << "          |________________________________________" <<"|\n";
				for (j.co = 0; j.co<30; j.co++)
				{
					if (a[coach.c - 1][j.co].numseat == 1)
					{
						if (j.co+1>=10)
				cout << "          |       Seat (" << j.co + 1 << ")   |    Not avilable    " << "|\n";
						else
				cout << "          |       Seat (" << j.co + 1 << ")    |    Not avilable    " << "|\n";
				cout << "          |___________________|____________________" <<"|\n";

					}
					else
					{
						if(j.co+1>=10)
				cout << "          |       Seat (" << j.co + 1 << ")   |    Avilable        " << "|\n";
						else
				cout << "          |       Seat (" << j.co + 1 << ")    |    Avilable        " << "|\n";
				cout << "          |___________________|____________________" <<"|\n";	
					}
				}
				cout << "          |<><><><><><><><><><><><><><><><><><><><>" << "|\n";
			}
			
		}
		/*??? ????? ?????? ?? ????????*/
		else if (ch.sc == 'e')
			return 0;
		/*??? ????? ??? ???? ??? ??? ???? ??????*/
		else
		{
			
			cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
			cout << "           |               The character you entered is invalid" << ",Please enter the correct character " << "               |\n";
			cout << "           |<><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><><>|" << "\n";
		}
	}
//	system("pause");
	return 0;
}
