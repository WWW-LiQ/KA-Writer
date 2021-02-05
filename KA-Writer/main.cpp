#include "includes.h"
#include "version.h"

/* 
Sorry that the code is a bit messed up, I'm a C++ beginner. xD
Oh, and note that the interface is in German!
Maybe there will be an English version at some point. ;)
*/

int main();
string placeholder;

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


void noticefunction()
{
	string notice;
	cout << "Ihre Information/Notiz:\n";
	getline(cin, placeholder);
	getline(cin, notice);

	fstream NOTICE;
	NOTICE.open("ka.txt", ofstream::app);
	NOTICE << "Information: ";
	NOTICE << notice;
	NOTICE.close();
}

void markkeyfunction()
{
	string markkey[6];

	system("cls");
	cout << "<BEISPIEL>:\n<Note 1: 35-33>\n\n";
	cout << "Note 1: ";
	getline(cin, placeholder);
	getline(cin, markkey[0]);
	fstream MARKKEY;
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "Note 1: ";
	MARKKEY << markkey[0];
	MARKKEY << " Punkte";
	MARKKEY.close();
	cout << "\nNote 2: ";
	getline(cin, markkey[1]);
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "\nNote 2: ";
	MARKKEY << markkey[1];
	MARKKEY << " Punkte";
	MARKKEY.close();
	cout << "\nNote 3: ";
	getline(cin, markkey[2]);
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "\nNote 3: ";
	MARKKEY << markkey[2];
	MARKKEY << " Punkte";
	MARKKEY.close();
	cout << "\nNote 4: ";
	getline(cin, markkey[3]);
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "\nNote 4: ";
	MARKKEY << markkey[3];
	MARKKEY << " Punkte";
	MARKKEY.close();
	cout << "\nNote 5: ";
	getline(cin, markkey[4]);
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "\nNote 5: ";
	MARKKEY << markkey[4];
	MARKKEY << " Punkte";
	MARKKEY.close();
	cout << "\nNote 6: ";
	getline(cin, markkey[5]);
	MARKKEY.open("ka.txt", ofstream::app);
	MARKKEY << "\nNote 6: ";
	MARKKEY << markkey[5];
	MARKKEY << " Punkte";
	MARKKEY << "\n\n";
	MARKKEY.close();
	cout << endl;

}




void markandsign()
{
	short points;
	bool noticebool = false;
	char noticeyesno = ' ';
	char markkeyyesno = ' ';
	system("cls");
	cout << "\n\nGeben Sie die Gesamtpunktzahl ein: ";
	cin >> points;
	fstream sign;
	sign.open("ka.txt", ofstream::app);
	sign << "\n\n\n";
	sign << "Note:\n\n" << "Punkte:   /" << points << endl << endl;
	sign.close();

	cout << "Möchten Sie einen Notenschlüssel zur KA hinzufügen? J/N\n";
	cin >> markkeyyesno;
	switch (markkeyyesno)
	{
	case 'J':
		markkeyfunction();
		break;
	case 'j':
		markkeyfunction();
		break;
	default:
		break;
	}
	
	
	
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

void content()
{
	char voidorlines;
	char boollines[15];
	short linecount[15];

	getline (cin, name);
	cout << "\n\nBitte geben sie hier ihre 1. Aufgabenstellung + Punkte ein!\nINFO: Geben Sie 'STOP' ein, sobald Sie alle Aufgaben definiert haben!\n\n";
	getline(cin, quest[0]);
	cout << "\n\n";
	fstream a;
	a.open("ka.txt", ofstream::app);
	a << "1. ";
	a << quest[0];
	a << endl;
	a.close();

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[0];
	if (boollines[0] == 'J' || boollines[0] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[0];

		switch (voidorlines)
		{
		case 'L':	
			for (linecount[0]; linecount[0] != 0; linecount[0]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[0]; linecount[0] != 0; linecount[0]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[0]; linecount[0] != 0; linecount[0]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[0]; linecount[0] != 0; linecount[0]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	
	}
	else
	{
	}


	cout << "\n\nBitte geben sie hier ihre 2. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[1];
	if (boollines[1] == 'J' || boollines[1] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[1];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[1]; linecount[1] != 0; linecount[1]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[1]; linecount[1] != 0; linecount[1]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[1]; linecount[1] != 0; linecount[1]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[1]; linecount[1] != 0; linecount[1]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 3. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[2];
	if (boollines[2] == 'J' || boollines[2] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[2];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[2]; linecount[2] != 0; linecount[2]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[2]; linecount[2] != 0; linecount[2]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[2]; linecount[2] != 0; linecount[2]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[2]; linecount[2] != 0; linecount[2]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 4. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[3];
	if (boollines[3] == 'J' || boollines[3] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[3];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[3]; linecount[3] != 0; linecount[3]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[3]; linecount[3] != 0; linecount[3]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[3]; linecount[3] != 0; linecount[3]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[3]; linecount[3] != 0; linecount[3]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 5. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[4];
	if (boollines[4] == 'J' || boollines[4] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[4];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[4]; linecount[4] != 0; linecount[4]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[4]; linecount[4] != 0; linecount[4]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[4]; linecount[4] != 0; linecount[4]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[4]; linecount[4] != 0; linecount[4]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 6. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[5];
	if (boollines[5] == 'J' || boollines[5] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[5];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[5]; linecount[5] != 0; linecount[5]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[5]; linecount[5] != 0; linecount[5]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[5]; linecount[5] != 0; linecount[5]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[5]; linecount[5] != 0; linecount[5]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 7. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[6];
	if (boollines[6] == 'J' || boollines[6] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[6];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[6]; linecount[6] != 0; linecount[6]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[6]; linecount[6] != 0; linecount[6]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[6]; linecount[6] != 0; linecount[6]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[6]; linecount[6] != 0; linecount[6]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 8. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[7];
	if (boollines[7] == 'J' || boollines[7] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[7];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[7]; linecount[7] != 0; linecount[7]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[7]; linecount[7] != 0; linecount[7]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[7]; linecount[7] != 0; linecount[7]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[7]; linecount[7] != 0; linecount[7]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 9. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[8];
	if (boollines[8] == 'J' || boollines[8] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[8];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[8]; linecount[8] != 0; linecount[8]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[8]; linecount[8] != 0; linecount[8]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[8]; linecount[8] != 0; linecount[8]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[8]; linecount[8] != 0; linecount[8]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 10. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[9];
	if (boollines[9] == 'J' || boollines[9] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?\n";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[9];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[9]; linecount[9] != 0; linecount[9]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[9]; linecount[9] != 0; linecount[9]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[9]; linecount[9] != 0; linecount[9]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[9]; linecount[9] != 0; linecount[9]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 11. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[10];
	if (boollines[10] == 'J' || boollines[10] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[10];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[10]; linecount[10] != 0; linecount[10]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[10]; linecount[10] != 0; linecount[10]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[10]; linecount[10] != 0; linecount[10]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[10]; linecount[10] != 0; linecount[10]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 12. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[11];
	if (boollines[11] == 'J' || boollines[11] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[11];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[11]; linecount[11] != 0; linecount[11]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[11]; linecount[11] != 0; linecount[11]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[11]; linecount[11] != 0; linecount[11]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[11]; linecount[11] != 0; linecount[11]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 13. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[12];
	if (boollines[12] == 'J' || boollines[12] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[12];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[12]; linecount[12] != 0; linecount[12]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[12]; linecount[12] != 0; linecount[12]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[12]; linecount[12] != 0; linecount[12]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[12]; linecount[12] != 0; linecount[12]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 14. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[13];
	if (boollines[13] == 'J' || boollines[13] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[13];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[13]; linecount[13] != 0; linecount[13]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[13]; linecount[13] != 0; linecount[13]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[13]; linecount[13] != 0; linecount[13]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[13]; linecount[13] != 0; linecount[13]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}

	cout << "\n\nBitte geben sie hier ihre 15. Aufgabenstellung ein!\n\n";
	getline(cin, placeholder);
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

	cout << "Platz erstellen? J/N\n";
	cin >> boollines[14];
	if (boollines[14] == 'J' || boollines[14] == 'j')
	{
		cout << "<L>inien oder <F>reier Platz?";
		cin >> voidorlines;
		cout << "Wie viel Platz?\n";
		cin >> linecount[14];

		switch (voidorlines)
		{
		case 'L':
			for (linecount[14]; linecount[14] != 0; linecount[14]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'l':
			for (linecount[14]; linecount[14] != 0; linecount[14]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "   ________________________________________________________\n";
				line1.close();
			}
			break;
		case 'F':
			for (linecount[14]; linecount[14] != 0; linecount[14]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		case 'f':
			for (linecount[14]; linecount[14] != 0; linecount[14]--)
			{
				fstream line1;
				line1.open("ka.txt", ofstream::app);
				line1 << "\n";
				line1.close();
			}
			break;
		default:
			cout << "Ungültige Eingabe!\n\n";
			break;
		}
	}
	else
	{
	}


	markandsign();
}

char answer = ' ';


void error()
{
	cout << "\n\nEingabe ungültig! Versuchen Sie es erneut!\n";
	system("pause");
	system("cls");
	main();
}


int main()
{
	SetConsoleOutputCP(1252); // für Umlaut-Ausgabe
	SetConsoleCP(1252); // für Umlaut-Eingabe

	string subject;
	string theme;
	string placeholder;
	char date[10];
	cout << "Willkommen bei KA-Writer! Hier können Sie Klassenarbeiten einfach und schnell erstellen!\nCode wrote in C++ by LiQ | Function ideas by WWW\nBETA VERSION " << VERSION_MAJOR << "." << VERSION_MINOR<< "\n\n";
	system("pause");
	system("cls");
	cout << "KA-Writer v" << VERSION_MAJOR << "." << VERSION_MINOR;

	cout << "\n\nFür welches Fach ist diese KA gedacht?" << endl;
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
