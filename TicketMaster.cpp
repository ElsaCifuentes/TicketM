#include <iostream>
using namespace std;

int main()
{
    string team[1000];
    int section[1000];
    double price[1000];
    int count = 0;

    while (true)
    {
        cout << "1 - Add New Tiket " << endl;
        cout << "2 - Display All Tickets " << endl;
        cout << "3 - Display by Budget " << endl;
        cout << "4 - Display by Cheapest " << endl;
        cout << "0 - Exit " << endl;
        int choice;
        cout << " What is your choice? ";
        cin >> choice;

        if (choice == 1)
        {
            string t;
            cout << " Which Team? ";
            cin >> team[count];

            int s;
            cout << " Which Section? ";
            cin >> section[count];

            double p;
            cout << " Which price? ";
            cin >> price[count];

            count++;
        }
        else if (choice == 2)
        {
            for (int i = 0; i < count; i++)
            {
                cout << "Knicks agains " << team[i] << " at section " << section[i] << ", for $" << price[i] << endl;
            }
        }
        else if (choice == 3)
        {
            double maxbudget;
            cout << "What is your budget? ";
            cin >> maxbudget;

            for (int i = 0; i < count; i++)
            {
                if (price[i] <= maxbudget)
                {
                    cout << "Knicks agains " << team[i] << " at section " << section[i] << ", for $  " << price[i] << endl;
                }
            }
        }
        else if (choice == 4)
        {
            string t;
            cout << "Team: ";
            cin >> t;

            int cheapestTicket = -1;
            for (int i = 0; i < count; i++)
            {
                if (team[i] == t)
                {
                    if (cheapestTicket == -1)
                    {
                        cheapestTicket = i;
                    }
                    else if (price[i] < price[cheapestTicket])
                    {
                        cheapestTicket = i;
                    }
                }
            }
            if (cheapestTicket == -1)
            {
                cout << "Could not find any ticket. " << endl;
            }
            else
            {
                cout << "Knicks agains " << team[cheapestTicket] << " at section " << section[cheapestTicket] << ", for $ " << price[cheapestTicket] << endl;
            }
        }
        else if (choice == 0)
        {
            break;
        }
    }
    return 0;
}