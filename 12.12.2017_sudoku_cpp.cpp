#include <iostream>
#include <stdlib.h> //system pause//
#include <ctime> //do losowych liczb//


using namespace std;

void rysujSudoku(char sudoku_do_zmian[9][9])
{
	//wyswietlamy sudoku//

		cout << "Plansza sudoku dla Ciebie:" << endl;
		cout << "  " << "|1|" << "|2|" << "|3|" << "|4|" << "|5|" << "|6|" << "|7|" << "|8|" << "|9|" << endl;
		cout << "----------------------------" << endl;

		for (int i = 0; i < 9; i++)
		{

			//do wyswietlenia A,B,C itd.//
			cout << char(65 + i) << "|";

			for (int k = 0; k < 9; k++)
			{
				cout << " " << sudoku_do_zmian[i][k] << "|";
			}

			if ((i % 3) != 2)
			{
				cout << endl << "----------------------------" << endl;
			}
			else
			{
				cout << "\n";
				cout << "============================" << endl;
			}

		}
		cout << "  " << "|1|" << "|2|" << "|3|" << "|4|" << "|5|" << "|6|" << "|7|" << "|8|" << "|9|" << endl;

}


int main()
{
    srand( time( NULL ) ); //do losowania//

    char sudoku[9][9] ; //w tej dwuwymiarowej tablicy bede przechowywac sudoku wylosowane//

    char sudoku_do_zmian[9][9];//w tej dwuwymiarowej tablicy bede przechowywac sudoku wylosowane - bede z niej usuwac pola//

  //pierwsza z mozliwych wylosowanych//
    char sudoku1 [9][9] =
    {'4','9','8','6','2','5','7','3','1',
    '2','6','5','7','1','3','9','8','4',
    '7','1','3','8','9','4','2','5','6',
    '8','3','7','2','6','1','4','9','5',
    '6','4','9','5','3','7','1','2','8',
    '5','2','1','9','4','8','6','7','3',
    '3','7','4','1','8','9','5','6','2',
    '1','5','2','3','7','6','8','4','9',
    '9','8','6','4','5','2','3','1','7'} ;

    char sudoku1_do_zmian [9][9] =
    {'4','9','8','6','2','5','7','3','1',
    '2','6','5','7','1','3','9','8','4',
    '7','1','3','8','9','4','2','5','6',
    '8','3','7','2','6','1','4','9','5',
    '6','4','9','5','3','7','1','2','8',
    '5','2','1','9','4','8','6','7','3',
    '3','7','4','1','8','9','5','6','2',
    '1','5','2','3','7','6','8','4','9',
    '9','8','6','4','5','2','3','1','7'} ;

    //druga z mozliwych wylosowanych//
    char sudoku2 [9][9] =
    {'9','3','6','5','8','2','1','7','4',
    '4','1','7','6','3','9','5','2','8',
    '8','2','5','1','4','7','9','3','6',
    '5','7','2','9','1','8','4','6','3',
    '1','4','8','3','5','6','7','9','2',
    '6','9','3','7','2','4','8','1','5',
    '3','6','1','8','9','5','2','4','7',
    '7','5','4','2','6','1','3','8','9',
    '2','8','9','4','7','3','6','5','1'} ;

    char sudoku2_do_zmian [9][9]=
    {'9','3','6','5','8','2','1','7','4',
    '4','1','7','6','3','9','5','2','8',
    '8','2','5','1','4','7','9','3','6',
    '5','7','2','9','1','8','4','6','3',
    '1','4','8','3','5','6','7','9','2',
    '6','9','3','7','2','4','8','1','5',
    '3','6','1','8','9','5','2','4','7',
    '7','5','4','2','6','1','3','8','9',
    '2','8','9','4','7','3','6','5','1'} ;

    //trzecia z mozliwych wylosowanych//
    char sudoku3 [9][9]=
    {'7','3','6','8','9','5','4','2','1',
    '5','4','2','6','7','1','9','8','3',
    '8','1','9','3','2','4','5','7','6',
    '9','6','8','7','1','3','2','5','4',
    '3','2','7','4','5','6','8','1','9',
    '4','5','1','2','8','9','6','3','7',
    '6','8','4','1','3','2','7','9','5',
    '2','9','3','5','6','7','1','4','8',
    '1','7','5','9','4','8','3','6','2'} ;

    char sudoku3_do_zmian [9][9]=
    {'7','3','6','8','9','5','4','2','1',
    '5','4','2','6','7','1','9','8','3',
    '8','1','9','3','2','4','5','7','6',
    '9','6','8','7','1','3','2','5','4',
    '3','2','7','4','5','6','8','1','9',
    '4','5','1','2','8','9','6','3','7',
    '6','8','4','1','3','2','7','9','5',
    '2','9','3','5','6','7','1','4','8',
    '1','7','5','9','4','8','3','6','2'} ;


    int liczba;//do wyboru poziomu trudnosci//
    int punkty=0;//do policzenia, czy wszystkie wypelnione przez gracza pola sa poprawnie//
    int Wypelnione;//do losowania, ile pol wypelnionych zerami, w sudoku//

//zabezpieczam przed wpisaniem liczby spoza zakresu 1-3 lub litery/znaku//
	do
	{
		system("cls");
	    cout << "Rozpoczynasz gre w sudoku."<<endl<<"Wybierz poziom trudnosci."<<endl;
	    cout << "1 - latwy."<<endl;
	    cout << "2 - sredni."<<endl;
	    cout << "3 - trudny."<<endl;
	    cin >> liczba;

		if (!cin.good() || liczba < 1 || liczba > 3)
		{
			cout << "Wprowadzono niepoprawny poziom trudnosci. Wybierz liczbe z zakresu 1-3.\n\n";
			cin.clear();
			cin.sync();
			system("pause");

		}

	}       while (!cin.good() || liczba < 1 || liczba > 3);


	//losuje plansze sudoku sposrod 3//
    int losuje_plansze=(rand()%2)+1;

    if(losuje_plansze==1)
    {
        for(int i=0; i<9; i++)
        {
               for(int k=0; k<9; k++)
                 {
                            sudoku[i][k]=sudoku1[i][k];
                             sudoku_do_zmian[i][k]=sudoku1_do_zmian[i][k];
                 }
        }

     }

     else if (losuje_plansze==2)
     {
         for(int i=0; i<9; i++)
           {
                for(int k=0; k<9; k++)
                    {
                           sudoku[i][k]=sudoku2[i][k];
                           sudoku_do_zmian[i][k]=sudoku2_do_zmian[i][k];
                     }
            }

     }

      else if (losuje_plansze==3)
        {
            for(int i=0; i<9; i++)
              {
                    for(int k=0; k<9; k++)
                       {
                           sudoku[i][k]=sudoku3[i][k];
                            sudoku_do_zmian[i][k]=sudoku3_do_zmian[i][k];
                       }
                }

         }


    switch(liczba)
    {
        case 1:
                    for(int j=0;j<10;j++)
                    {
                        //losujemy dwie liczby, aby zerowac 10 miejsc w tablicy dwuwymiarowej, dla poziomu latwego//
                        int wylosowana_liczba1 =( rand() % 9 ) ;
                        int wylosowana_liczba2 =( rand() % 9 ) ;

                        if(sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]==0)
                        //aby nie wyczyscic kilka razy tego samego pola//
                        {
                          j--;
                        }
                        else
                        {
                            sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]=0;
                        }
                    }

            break;


        case 2:

                    for(int j=0;j<30;j++)
                    {
                        //losujemy dwie liczby, aby zerowac 30 miejsc w tablicy dwuwymiarowej, dla poziomu sredniego//
                        int wylosowana_liczba1 =( rand() % 9 ) ;
                        int wylosowana_liczba2 =( rand() % 9 ) ;
                        if(sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]==0)
                        //aby nie wyczyscic kilka razy tego samego pola//
                        {
                          j--;
                        }
                        else
                        {
                            sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]=0;
                        }


                    }


            break;

        case 3:

                    for(int j=0;j<50;j++)
                    {
                         //losujemy dwie liczby, aby zerowac 50 miejsc w tablicy dwuwymiarowej, dla poziomu trudnego//
                        int wylosowana_liczba1 =( rand() % 9 ) ;
                        int wylosowana_liczba2 =( rand() % 9 ) ;
                        if(sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]==0)
                        //aby nie wyczyscic kilka razy tego samego pola//
                        {
                          j--;
                        }
                        else
                        {
                            sudoku_do_zmian[wylosowana_liczba1][wylosowana_liczba2]=0;
                        }
                    }

            break;

    }

         //wypelnianie pustych miejsc i sprawdzanie czy sie zgadzaja//

        for (int i=0; i<9; i++)
        {
            for (int k=0; k<9; k++)
            {
                if(sudoku_do_zmian[i][k]==0)
                {

                      //zabezpieczenie przed wpisaniem blednej liczby//
                    	do
						{
							system("cls");
						    rysujSudoku(sudoku_do_zmian);
							cout<<"Wypelnij miejsce : "<<"("<<char(65+i)<<" "<<k+1<<") "<<"="<<endl;
						    cin>>Wypelnione;

							if (!cin.good() || Wypelnione < 1 || Wypelnione > 9)
							{
								cout << "Wprowadzono niepoprawna liczbe. Wymagana liczba z zakresu 1-9.\n\n";
								cin.clear();
								cin.sync();
								system("pause");

							}

						}while (!cin.good() || Wypelnione < 1 || Wypelnione > 9);


							//zeby wprowadzone dane pojawialy sie w tablicy//
							sudoku_do_zmian[i][k] = Wypelnione + 48;

	                         if (Wypelnione + 48 == sudoku[i][k])
	                            {

	                                punkty++;

	                            }

                }
        	}
        }

		system("cls");
		rysujSudoku(sudoku_do_zmian);


			if (liczba == 1)//jesli poziom latwy, czyli 1, punktow musi byc rowna 10, aby plansza byla wypelniona dobrze//
			{
				if (punkty == 10)
				{
				    cout << "Plansza wypelniona dobrze! Gratuluje!" << endl;
                }

				else
				{
					cout << "Plansza wypelniona blednie. Sprobuj jeszcze raz!"<< endl;
                }


			}

			else if (liczba == 2) //jesli poziom sredni, czyli 2, punktow musi byc rowna 30, aby plansza byla wypelniona dobrze//
			{

				if (punkty == 30)
				{
					cout << "Plansza wypelniona poprawnie! Gratuluje!" << endl;
				}

				else
				{
				    cout << "Plansza wypelniona blednie. Sprobuj jeszcze raz!"  << endl;
				}


			}

			else if (liczba == 3) //jesli poziom trudny, czyli 3, punktow musi byc rowna 50, aby plansza byla wypelniona dobrze//
			{

				if (punkty == 50)
				{
                    cout << "Plansza wypelniona poprawnie! Gratuluje!" << endl;
				}

				else
				{
					cout << "Plansza wypelniona blednie. Sprobuj jeszcze raz!" << endl;
				}


			}

		system("pause");


	return 0;
}

