#include <iostream>

using namespace std;

int main()
{
    int f1,n1, n2;
    cout<< "Escreva 1 se estive dentro de um localidade ou 2 se estiver for fora de uma localidade" << endl;
    cin>> f1;
    switch (f1)
    case(1):
        cout <<" 1-o limite foi ultrapassado ate 20km/h" << endl;
        cout<< "2-o limite foi ultrapassado entre 20km/h e 40km/h" << endl;
        cout<< "3-o limite foi ultrapassado entre 40km/h e 60km/h" << endl;
        cout<< "4-o limite foi ultrapassado mais de 60km/h" << endl;
        cin>> n1;
        switch (n1)
        {
        case(1):
            {
                cout<< "tem que pagar 60€ a 300€"<< endl;
                break;
            }
        case (2):
            {
                cout<<"tem que pagar 120€ a 600€" << endl;
                break;
            }
        case (3):
            {
                cout<<" tem que pagar 300€ a 1500€" << endl;
                break;
            }
        case (4):
            {
                cout<< "tem que pagar 500€ a 2500€" <<endl;
                break;
            }
        switch(n2)
        {
    case(2):

            {
                cout<<"5- ultrapassou o limite de 30km/h" <<endl;
                cout << "6- ultrapassou o limite entre 30km/h a 60km/h" <<endl;
                cout<< "7- ultappasou o limite emtre 60km/h a 80km/h" << endl;
                cout<<  "8- ltrapassou mais de 80km/h"<< endl;
                cin>> n2;
                switch (n2)
                {
                case(5):
                {
            cout<<"pagar entre 60€ a 300€" <<endl;
            break;
                }
                case (6):
                {
              cout << "pagar entre 120€ a 600€" <<endl;
              break;
                }
                case (7):
                {
                    cout<< "pagar entre 300€ a 1500€"<< endl;
                    break;
                    }
                case(8):
                    {
                        cout <<"pagar entre 500€ a 2500€" << endl;
                        break;
                    }
                }
            }
        }
    }
return 0;
}

