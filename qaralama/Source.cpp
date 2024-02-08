
#include <iostream>
#include <fstream>
using namespace std;






void setboard(char dizi[3][3]) {
	for (int a = 0;a < 3;a++) {

		cout << " | ";
		for (int b = 0;b < 3;b++) {
			cout << dizi[a][b] << " | ";
		}
		cout << "\n -------------\n";
	}
}

char dizi[3][3] = { {' ',' ',' '},{' ',' ',' '},{' ',' ',' '} };








int a, b, c;

char harf = 'X';
char harf2 = 'O';
int sutun, satir;


void clone() {
	cout << "Wrong choice\n -------------\n";
	do
	{
		cin >> a;
		cout << "--------------\n";
		
		if (a == 1) {
			if (harf == dizi[0][0] || harf2 == dizi[0][0]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[0][0] && harf2 != dizi[0][0]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 2) {
			if (harf == dizi[0][1] || harf2 == dizi[0][1]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[0][1] && harf2 != dizi[0][1]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 3) {
			if (harf == dizi[0][2] || harf2 == dizi[0][2]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[0][2] && harf2 != dizi[0][2]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 4) {
			if (harf == dizi[1][0] || harf2 == dizi[1][0]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[1][0] && harf2 != dizi[1][0]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 5) {
			if (harf == dizi[1][1] || harf2 == dizi[1][1]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[1][1] && harf2 != dizi[1][1]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 6) {
			if (harf == dizi[1][2] || harf2 == dizi[1][2]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[1][2] && harf2 != dizi[1][2]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 7) {
			if (harf == dizi[2][0] || harf2 == dizi[2][0]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[2][0] && harf2 != dizi[2][0]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 8) {
			if (harf == dizi[2][1] || harf2 == dizi[2][1]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[2][1] && harf2 != dizi[2][1]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a == 9) {
			if (harf == dizi[2][2] || harf2 == dizi[2][2]) {
				cout << "Wrong choice\n";

			}
			if (harf != dizi[2][2] && harf2 != dizi[2][2]) {
				cout << "correct choice\n -------------\n";
				break;
			}
		}
		if (a != 1 && a != 2 && a != 3 && a != 4 && a != 5 && a != 6 && a != 7 && a != 8 && a != 9) {
			cout << "Wrong choice \n -------------\n";
		}
		

	} while (a = 1);
}

int main()
{
	setboard(dizi);
	do {
		do
		{

			






			cout << "1st player. Select block:";





			do {
				cin >> a;

				cout << " -------------\n";
				if (a == 1) {

					//proses 

					if (harf2 == dizi[0][0]) {
						clone();

					}
					else if (harf == dizi[0][0]) {
						clone();
					}
					else
					{
						dizi[0][0] = harf;
					}
					//proses
				}
				if (a == 2) {
					//proses 

					if (harf2 == dizi[0][1]) {
						clone();

					}
					else if (harf == dizi[0][1]) {
						clone();


					}
					else
					{
						dizi[0][1] = harf;
					}

				}
				if (a == 3) {

					if (dizi[0][2] == harf2) {
						clone();

					}
					else if (harf == dizi[0][2]) {//////problem
						///
						clone();

					}

					else
					{
						dizi[0][2] = harf;
					}
				}

				if (a == 4) {
					if (dizi[1][0] == harf2) {
						clone();
					}
					else if (harf == dizi[1][0]) {
						clone();
					}
					else
					{
						dizi[1][0] = harf;
					}
				}
				if (a == 5) {
					if (dizi[1][1] == harf2) {
						clone();
					}
					else if (harf == dizi[1][1]) {
						clone();
					}
					else
					{
						dizi[1][1] = harf;
					}
				}
				if (a == 6) {
					if (dizi[1][2] == harf2) {
						clone();
					}
					else if (harf == dizi[1][2]) {
						clone();
					}
					else
					{
						dizi[1][2] = harf;
					}
				}
				if (a == 7) {
					if (dizi[2][0] == harf2) {
						clone();
					}
					else if (harf == dizi[2][0]) {
						clone();
					}
					else
					{
						dizi[2][0] = harf;
					}
				}
				if (a == 8) {
					if (dizi[2][1] == harf2) {
						clone();
					}
					else if (harf == dizi[2][1]) {
						clone();
					}
					else
					{
						dizi[2][1] = harf;
					}
				}
				if (a == 9) {
					if (dizi[2][2] == harf2) {
						clone();
					}
					else if (harf == dizi[2][2]) {
						clone();
					}
					else
					{
						dizi[2][2] = harf;
					}
				}
			} while (a < 1 || a>9);
			setboard(dizi);
			if ((dizi[0][0] == harf && dizi[0][1] == harf && dizi[0][2] == harf) ||  // Horizontal
				(dizi[1][0] == harf && dizi[1][1] == harf && dizi[1][2] == harf) ||
				(dizi[2][0] == harf && dizi[2][1] == harf && dizi[2][2] == harf) ||
				(dizi[0][0] == harf && dizi[1][0] == harf && dizi[2][0] == harf) ||  // Vertical
				(dizi[0][1] == harf && dizi[1][1] == harf && dizi[2][1] == harf) ||
				(dizi[0][2] == harf && dizi[1][2] == harf && dizi[2][2] == harf) ||
				(dizi[0][0] == harf && dizi[1][1] == harf && dizi[2][2] == harf) ||  // Diagonal
				(dizi[0][2] == harf && dizi[1][1] == harf && dizi[2][0] == harf)) {
				cout << "player 1 won\n\n";

				cout << "DO YOU WANT TO PLAY AGAIN? PRESS 2 TO EXIT, WRITE THE DESIRED NUMBER TO CONTINUE\n";
				cin >> c;
				if (c == 1) {

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							dizi[i][j] = ' ';
						}
					}
				}
				else if (c == 2) {
					cout << "EXİT...\n";
					break;
				}
			}


			








			do {
				cout << "Select 2nd player.Block: ";
				cin >> b;

				cout << " -------------\n";
				if (b == 1) {
					if (harf == dizi[0][0]) {
						clone();

					}
					else if (harf2 == dizi[0][0]) {
						clone();
					}
					else
					{
						dizi[0][0] = harf2;
					}
				}
				if (b == 2) {
					if (dizi[0][1] == harf) {
						clone();
					}
					else if (harf2 == dizi[0][1]) {
						clone();
					}
					else
					{
						dizi[0][1] = harf2;
					}
				}
				if (b == 3) {
					if (dizi[0][2] == harf) {
						clone();
					}
					else if (harf2 == dizi[0][2]) {
						clone();
					}
					else
					{
						dizi[0][2] = harf2;
					}
				}
				if (b == 4) {
					if (dizi[1][0] == harf) {
						clone();
					}
					else if (harf2 == dizi[1][0]) {
						clone();
					}
					else
					{
						dizi[1][0] = harf2;
					}
				}
				if (b == 5) {
					if (dizi[1][1] == harf) {
						clone();
					}
					else if (harf2 == dizi[1][1]) {
						clone();
					}
					else
					{
						dizi[1][1] = harf2;
					}
				}
				if (b == 6) {
					if (dizi[1][2] == harf) {
						clone();
					}
					else if (harf2 == dizi[1][2]) {
						clone();
					}
					else
					{
						dizi[1][2] = harf2;
					}
				}
				if (b == 7) {
					if (dizi[2][0] == harf) {
						clone();
					}
					else if (harf2 == dizi[2][0]) {
						clone();
					}
					else
					{
						dizi[2][0] = harf2;
					}
				}
				if (b == 8) {
					if (dizi[2][1] == harf) {
						clone();
					}
					else if (harf2 == dizi[2][1]) {
						clone();
					}
					else
					{
						dizi[2][1] = harf2;
					}
				}
				if (b == 9) {
					if (dizi[2][2] == harf) {
						clone();
					}
					else if (harf2 == dizi[2][2]) {
						clone();
					}
					else
					{
						dizi[2][2] = harf2;
					}
				}
			} while (b < 1 || b>9);

			setboard(dizi);
	
			if ((dizi[0][0] == harf2 && dizi[0][1] == harf2 && dizi[0][2] == harf2) ||  // Horizontal
				(dizi[1][0] == harf2 && dizi[1][1] == harf2 && dizi[1][2] == harf2) ||
				(dizi[2][0] == harf2 && dizi[2][1] == harf2 && dizi[2][2] == harf2) ||
				(dizi[0][0] == harf2 && dizi[1][0] == harf2 && dizi[2][0] == harf2) ||  // Vertical
				(dizi[0][1] == harf2 && dizi[1][1] == harf2 && dizi[2][1] == harf2) ||
				(dizi[0][2] == harf2 && dizi[1][2] == harf2 && dizi[2][2] == harf2) ||
				(dizi[0][0] == harf2 && dizi[1][1] == harf2 && dizi[2][2] == harf2) ||  // Diagonal
				(dizi[0][2] == harf2 && dizi[1][1] == harf2 && dizi[2][0] == harf2)) {
				cout << "2nd player won\n\n";
			

				cout << "DO YOU WANT TO PLAY AGAIN 1.YES 2.NO\n";
				cin >> c;
				if (c == 1) {

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							dizi[i][j] = ' ';
						}
					}
				}
				else if (c == 2) {
					cout << "EXİT...\n";
					break;
				}
			}
			else if (dizi[0][0] != ' ' && dizi[0][1] != ' ' && dizi[0][2] != ' ' && dizi[1][0] != ' ' && dizi[1][1] != ' ' && dizi[1][2] != ' ' && dizi[2][0] != ' ' && dizi[2][1] != ' ' && dizi[2][2] != ' ') {
				cout << "Game over..\n";
				cout << "DO YOU WANT TO PLAY AGAIN 1.YES 2.NO\n";
				cin >> c;
				if (c == 1) {

					for (int i = 0; i < 3; i++) {
						for (int j = 0; j < 3; j++) {
							dizi[i][j] = ' ';
						}
					}
				}
				else if (c == 2) {
					cout << "EXİT...\n";
					break;
				}
			}


		} while (true);

	}
	while (c != 2);

	
}



