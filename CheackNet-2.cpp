// ||| CheckNet
// Amir Hossein Ranjbar

#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	char a = 0;
	char b = 1;
	cout << " ||| Welcome to Checknet\n";
	cout << "\n ||| info==>";
	cout << "\t\t| Developer : Amir HR";
	cout << "\t\t| Version : 2.0";
	cout << "\n------------------------------------------------------------------------\n\n";

	while (1)
	{
		if (a == system("ping google.com"))
		{
			system("cls");
			system("color 20");
			cout << "\n\t||| Internet is Connect... (||| WORLD |||)\n\n\t";
			system("echo time : %time%");
			cout << "\t";
			system("echo date: %date%");
		}
		else if(b == system("ping google.com"))
		{
			system("cls");
			system("color 47");
			cout << "\n\t||| No Internet (||| WORLD |||)\n\n\t";
			system("echo time : %time%");
			cout << "\t";
			system("echo date: %date%");
		}
		
		if (a == system("ping aparat.com"))
		{
			system("cls");
			system("color 20");
			cout << "\n\t||| Internet is Connect... (||| JUST IRAN |||)\n\n\t";
			system("echo time : %time%");
			cout << "\t";
			system("echo date: %date%");
		}
		else
		{
			system("cls");
			system("color 47");
			cout << "\n\t||| No Internet !\n\n\t";
			system("echo time : %time%");
			cout << "\t";
			system("echo date: %date%");
		}
		
		
	}

	_getch();
	return 0;

}




