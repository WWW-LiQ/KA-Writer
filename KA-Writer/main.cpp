#include "includes.h"
#include "version.h"

/* 
Sorry that the code is a bit messed up, I'm a C++ beginner. xD
Oh, and note that the interface is in German!
Maybe there will be an English version at some point. ;)
*/

int main();


void website()
{
	char openwebsiteinput = ' ';
	cin >> openwebsiteinput;

	switch (openwebsiteinput)
	{
	case 'J':
		system("explorer http://ka-writer.bplaced.net");
		system("pause");
		system("cls");
		main();
	case 'j':
		system("explorer http://ka-writer.bplaced.net");
		system("pause");
		system("cls");
		main();
	default:
		system("cls");
		main();
	}
}


void softwareinfo()
{
	system("cls");
	cout << "\n\nKA-Writer v" << VERSION_MAJOR << "." << VERSION_MINOR << " coded in C++ by LiQ\n\n";
	cout << "Möchtest du die offizielle Webseite von KA-Writer öffnen?\nJ/N";
	website();
}


void passworddata(int user)
{

	string password[4];
	password[0] = "1901";
	password[1] = "5407";
	password[2] = "1865";
	password[3] = "2865";

	string passwordinput[4];
	password[0];
	password[1];
	password[2];
	password[3];



	switch (user)
	{
	case 1:
		cout << "\n\nBitte geben Sie Ihr Passwort ein: ";
		cin >> passwordinput[0];
		if (password[0] == passwordinput[0])
		{
			cout << "Sie wurden erfolgreich angemeldet!";
			return;
		}
		else
		{
			cout << "Passwort falsch! Bitte versuchen Sie es erneut!\n";
		}
		break;

	case 2:
		cout << "\n\nGeben Sie Ihr Passwort ein: ";
		cin >> passwordinput[1];
		if (password[1] == passwordinput[1])
		{
			cout << "Sie wurden erfolgreich angemeldet!\n";
			return;
		}
		else
		{
			cout << "Passwort falsch! Bitte versuchen Sie es erneut!\n";
		}
		break;
	case 3:
		cout << "\n\nGeben Sie Ihr Passwort ein: ";
		cin >> passwordinput[2];
		if (password[2] == passwordinput[2])
		{
			cout << "Sie wurden erfolgreich angemeldet!";
			return;
		}
		else
		{
			cout << "Passwort falsch! Bitte versuchen Sie es erneut!\n";
		}
		break;
	case 4:
		cout << "\n\nGeben Sie Ihr Passwort ein: ";
		cin >> passwordinput[3];
		if (password[3] == passwordinput[3])
		{
			cout << "Sie wurden erfolgreich angemeldet!";
			return;
		}
		else
		{
			cout << "Passwort falsch! Bitte versuchen Sie es erneut!\n";
		}
		break;
	}

	system("pause");
	system("cls");
	main();
}

void noticefunction()
{
	string notice;
	string placeholder;
	cout << "Ihre Information/Notiz:\n";
	getline(cin, placeholder);
	getline(cin, notice);

	fstream NOTICE;
	NOTICE.open("ka.txt", ofstream::app);
	NOTICE << "Information: ";
	NOTICE << notice;
	NOTICE.close();
}



void markandsign()
{
	short points;
	bool noticebool = false;
	char noticeyesno = ' ';
	system("cls");
	cout << "\n\nGeben Sie die Gesamtpunktzahl ein: ";
	cin >> points;
	fstream sign;
	sign.open("ka.txt", ofstream::app);
	sign << "\n\n\n";
	sign << "Note:\n\n" << "Punkte:   /" << points << endl << endl;
	sign.close();

	cout << "Möchten Sie eine Information zur KA hinzufügen? J/N\n";
	cin >> noticeyesno;
	switch (noticeyesno)
	{
	case 'J':
		noticefunction();
		break;
	case 'j':
		noticefunction();
		break;
	default:
		break;
	}



	cout << "\n\nKlassenarbeit erfolgreich erstellt!\n\n";
	system("pause");
	exit(0);
}


string quest[15];
string name;
bool line[15];
short numberlines[15];
char yesno[15];
void content()
{
	fstream LINE;
	getline (cin, name);
	cout << "\n\nBitte geben sie hier ihre 1. Aufgabenstellung ein!\nINFO: Geben Sie 'STOP' ein, sobald Sie alle Aufgaben definiert haben!\n\n";
	getline(cin, quest[0]);
	cout << "\n\n";
	fstream a;
	a.open("ka.txt", ofstream::app);
	a << "1. ";
	a << quest[0];
	a << endl;
	a.close();


	cout << "\n\nBitte geben sie hier ihre 2. Aufgabenstellung ein!\n\n";
	getline(cin, quest[1]);
	cout << "\n\n";
	if (quest[1] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream b;
	b.open("ka.txt", ofstream::app);
	b << "2. ";
	b << quest[1];
	b << endl;
	b.close();


	cout << "\n\nBitte geben sie hier ihre 3. Aufgabenstellung ein!\n\n";
	getline(cin, quest[2]);
	cout << "\n\n";
	if (quest[2] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream c;
	c.open("ka.txt", ofstream::app);
	c << "3. ";
	c << quest[2];
	c << endl;
	c.close();

	
	cout << "\n\nBitte geben sie hier ihre 4. Aufgabenstellung ein!\n\n";
	getline(cin, quest[3]);
	cout << "\n\n";
	if (quest[3] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream d;
	d.open("ka.txt", ofstream::app);
	d << "4. ";
	d << quest[3];
	d << endl;
	d.close();

	

	cout << "\n\nBitte geben sie hier ihre 5. Aufgabenstellung ein!\n\n";
	getline(cin, quest[4]);
	cout << "\n\n";
	if (quest[4] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream e;
	e.open("ka.txt", ofstream::app);
	e << "5. ";
	e << quest[4];
	e << endl;
	e.close();

	

	cout << "\n\nBitte geben sie hier ihre 6. Aufgabenstellung ein!\n\n";
	getline(cin, quest[5]);
	cout << "\n\n";
	if (quest[5] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream f;
	f.open("ka.txt", ofstream::app);
	f << "6. ";
	f << quest[5];
	f << endl;
	f.close();

	

	cout << "\n\nBitte geben sie hier ihre 7. Aufgabenstellung ein!\n\n";
	getline(cin, quest[6]);
	cout << "\n\n";
	if (quest[6] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream g;
	g.open("ka.txt", ofstream::app);
	g << "7. ";
	g << quest[6];
	g << endl;
	g.close();

	

	cout << "\n\nBitte geben sie hier ihre 8. Aufgabenstellung ein!\n\n";
	getline(cin, quest[7]);
	cout << "\n\n";
	if (quest[7] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream h;
	h.open("ka.txt", ofstream::app);
	h << "8. ";
	h << quest[7];
	h << endl;
	h.close();

	
	cout << "\n\nBitte geben sie hier ihre 9. Aufgabenstellung ein!\n\n";
	getline(cin, quest[8]);
	cout << "\n\n";
	if (quest[8] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream i;
	i.open("ka.txt", ofstream::app);
	i << "9. ";
	i << quest[8];
	i << endl;
	i.close();

	

	cout << "\n\nBitte geben sie hier ihre 10. Aufgabenstellung ein!\n\n";
	getline(cin, quest[9]);
	cout << "\n\n";
	if (quest[9] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream j;
	j.open("ka.txt", ofstream::app);
	j << "20. ";
	j << quest[9];
	j << endl;
	j.close();

	

	cout << "\n\nBitte geben sie hier ihre 11. Aufgabenstellung ein!\n\n";
	getline(cin, quest[10]);
	cout << "\n\n";
	if (quest[10] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream k;
	k.open("ka.txt", ofstream::app);
	k << "11. ";
	k << quest[10];
	k << endl;
	k.close();

	

	cout << "\n\nBitte geben sie hier ihre 12. Aufgabenstellung ein!\n\n";
	getline(cin, quest[11]);
	cout << "\n\n";
	if (quest[11] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream l;
	l.open("ka.txt", ofstream::app);
	l << "12. ";
	l << quest[11];
	l << endl;
	l.close();

	

	cout << "\n\nBitte geben sie hier ihre 13. Aufgabenstellung ein!\n\n";
	getline(cin, quest[12]);
	cout << "\n\n";
	if (quest[12] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream m;
	m.open("ka.txt", ofstream::app);
	m << "13. ";
	m << quest[12];
	m << endl;
	m.close();

	
	cout << "\n\nBitte geben sie hier ihre 14. Aufgabenstellung ein!\n\n";
	getline(cin, quest[13]);
	cout << "\n\n";
	if (quest[13] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream n;
	n.open("ka.txt", ofstream::app);
	n << "14. ";
	n << quest[13];
	n << endl;
	n.close();

	

	cout << "\n\nBitte geben sie hier ihre 15. Aufgabenstellung ein!\n\n";
	getline(cin, quest[14]);
	cout << "\n\n";
	if (quest[14] == "STOP")
	{
		markandsign();
	}
	else
	{
	}
	fstream o;
	o.open("ka.txt", ofstream::app);
	o << "15. ";
	o << quest[14];
	o << endl;
	o.close();

	

	markandsign();
}

char answer = ' ';



int main()
{
	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe


	bool licence = true;
	string subject;
	string theme;
	string placeholder;
	char date[10];
	cout << "Willkommen bei KA-Writer! Hier können Sie Klassenarbeiten einfach und schnell erstellen!\nCode wrote in C++ by LiQ | Function ideas by WWW\nBETA VERSION " << VERSION_MAJOR << "." << VERSION_MINOR<< "\n\n";
	cout << "Bitte melden Sie sich an!\n\n" << "ID: ";
	string inputbenutzername;
	string b1 = "Westphal";
	string b2 = "Thurm";
	string b3 = "Zerbe";
	string b4 = "Hösler";
	string info = "Info";
	cin >> inputbenutzername;


	if (inputbenutzername == b1)
	{
		passworddata(1);
	}


	else if (inputbenutzername == b2)
	{
		passworddata(2);
	}


	else if (inputbenutzername == b3)
	{
		passworddata(3);
	}


	else if (inputbenutzername == b4)
	{
		passworddata(4);
	}


	else if (inputbenutzername == info)
	{
		softwareinfo();
	}

	
	else
	{
		cout << "\n\nBenutzername nicht verfügbar!\nBitte geben Sie einen gültigen Benutzernamen ein!\n\n" << endl;
		system("pause");
		system("cls");
		main();
	}
	
	cout << "\nFür welches Fach ist diese KA gedacht?" << endl;
	cin >> subject;

	cout << "\nÜber welches Thema?" << endl;
	getline(cin, placeholder);
	getline(cin, theme);

	cout << "\nWelches Datum soll neben der Überschrift stehen?\n";
	cin >> date;


	fstream head;
	head.open("ka.txt", ios::out);
	head << "Klassenarbeit ";
	head.close();
	
	fstream head2;
	head2.open("ka.txt", ofstream::app);
	head2 << subject;
	head2 << " | ";
	head2.close();

	fstream head3;
	head3.open("ka.txt", ofstream::app);
	head3 << "Thema: ";
	head3 << theme;
	head3 << " | ";
	head3.close();

	fstream head4;
	head4.open("ka.txt", ofstream::app);
	head4 << date;
	head4 << endl;
	head4.close();

	fstream head5;
	head5.open("ka.txt", ofstream::app);
	head5 << "Name:					Klasse:";
	head5 << endl << endl;
	head5.close();

	content();

}
