#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

void calculator();
void plusA();
void minusA();
void starA();
void slashA();
void powerA();

void hidden();

int main() {

char sign;

again:
system("cls");
cout << "========================" << endl;
cout << "|     Program Menu     |" << endl;
cout << "| by Jakub Hryniewicki |" << endl;
cout << "========================" << endl;

cout << "\nJestem ciekawym kalkulatorem." << endl;
cout << "\nWybierz 'K', aby wlaczyc kalkulator. 'Z', aby zakonczyc." << endl;
cin >> sign;
cin.ignore(1024,'\n');
if(sign=='k'||sign=='K')
calculator();
else if(sign=='z'||sign=='Z')
system("pause");
else if(sign!='k'||sign!='K'||sign!='z'||sign!='Z'){
main();
}
return 0;
}

void calculator(){
char signC, signW;

system("cls");
cout << "========================" << endl;
cout << "|  Program Kalkulator  |" << endl;
cout << "| by Jakub Hryniewicki |" << endl;
cout << "========================" << endl;

cout << "\nWitaj w programie kalkulator!" << endl;
cout << "Co chcesz zrobic? Wybierz przypisana cyfre do czynnosci.\n\na.Dodawac\nb.Odejmowac\nc.Mnozyc\nd.Dzielic\ne.Potegowac\n\nf.Wrocic do menu." << endl;
cin >> signW;
cin.ignore(1024,'\n');
if(signW=='a'||signW=='A')
plusA();
else if(signW=='b'||signW=='B')
minusA();
else if(signW=='c'||signW=='C')
starA();
else if(signW=='d'||signW=='D')
slashA();
else if(signW=='e'||signW=='E')
powerA();
else if(signW=='f'||signW=='F')
main();
else if(signW=='h'||signW=='H')
hidden();
else if(signW!='a' ||signW!='A' || signW!='b' ||signW!='B' || signW!='c' || signW!='C' || signW!='d' || signW!='D' || signW!='e' || signW!='E' || signW!='f' || signW!='F' || signW!='h'||signW!='H'){
calculator();
}

cout << "\nAby wrocic do menu wybierz 'M', aby zakonczyc program wybierz 'Z'." <<endl;
cin >> signC;
cin.ignore(1024,'\n');
if(signC=='m'||signC=='M')
main();
else if(signC=='z'||signC=='Z')
system("pause");
else if(signC!='k'||signC!='K'||signC!='z'||signC!='Z')
calculator();
}
void plusA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "=========================" << endl;
cout << "|   Program Dodawanie   |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;

cout << "Witam Cie serdecznie w programie dodawanie. Wpisz liczby, ktore chcesz do siebie dodac: " <<endl;
cout << "Pierwsza liczba: ";
cin >> a;

cout << "Druga liczba: ";
cin >> b;
c=a+b;
cout << "Wynik dodawania: " << c <<endl;
again:
cout << "\nCzy chcesz do " << c << " dodac kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz dodac,a jesli nie chcesz dodawac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a+b;
system("cls");
cout << "=========================" << endl;
cout << "|   Program Dodawanie   |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;
cout << "Wynik dodawania liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'D', aby dodawac dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='d'||signM=='D')
plusA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='d'||signM!='D'){
plusA();
}
}
void minusA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "===========================" << endl;
cout << "|   Program Odejmowanie   |" << endl;
cout << "|   by Jakub Hryniewicki  |" << endl;
cout << "===========================" << endl;

cout << "Witam Cie serdecznie w programie odejmowanie. Wpisz liczby, ktore chcesz od siebie odjac: " <<endl;
cout << "Pierwsza liczba: ";
cin >> a;
cout << "Druga liczba: ";
cin >> b;
c=a-b;
cout << "Wynik odejmowania: " << c <<endl;
again:
cout << "\nCzy chcesz od " << c << " odjac kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz odjac,a jesli nie chcesz odejmowac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a-b;
system("cls");
cout << "===========================" << endl;
cout << "|   Program Odejmowanie   |" << endl;
cout << "|   by Jakub Hryniewicki  |" << endl;
cout << "===========================" << endl;
cout << "Wynik odejmowania liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'O', aby dodawac dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='o'||signM=='O')
minusA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='o'||signM!='O'){
minusA();
}
}
void starA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "=========================" << endl;
cout << "|   Program Mnozenie    |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;

cout << "Witam Cie serdecznie w programie mnozenie. Wpisz liczby, ktore chcesz ze soba pomnozyc: " <<endl;
cout << "Liczba mnozona: ";
cin >> a;
cout << "Liczba mnozaca: ";
cin >> b;
c=a*b;
cout << "Wynik mnozenia: " << c <<endl;
again:
cout << "\nCzy chcesz do " << c << " domnozyc kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora chcesz domnozyc,a jesli nie chcesz mnozyc wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a*b;
system("cls");
cout << "=========================" << endl;
cout << "|   Program Mnozenie    |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;
cout << "Wynik mnozenia liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'X', aby mnozyc dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='x'||signM=='X')
starA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='x'||signM!='X'){
starA();
}
}
void slashA(){
char signM,sign;
float a,b,c;

system("cls");
cout << "=========================" << endl;
cout << "|   Program Dzielenie   |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;

cout << "Witam Cie serdecznie w programie dzielenie. Wpisz liczby, ktore chcesz przez siebie podzielic: " <<endl;
cout << "Liczba dzielona: ";
cin >> a;
cout << "Liczba dzielaca: ";
cin >> b;
c=a/b;
cout << "Wynik dzielenia: " << c <<endl;
again:
cout << "\nCzy chcesz " << c << " podzielic przez kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz kolejna liczbe ktora przez, ktora chcesz dzielic, a jesli nie chcesz dzielic wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=a/b;
system("cls");
cout << "=========================" << endl;
cout << "|   Program Dzielnie    |" << endl;
cout << "|  by Jakub Hryniewicki |" << endl;
cout << "=========================" << endl;
cout << "Wynik dzielenia liczby " << a << " z liczba " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'S', aby dzielic dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='s'||signM=='S')
slashA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='s'||signM!='S'){
slashA();
}
}
void powerA(){
char signM,sign;
double a,b,c;

system("cls");
cout << "===========================" << endl;
cout << "|   Program Potegowanie   |" << endl;
cout << "|   by Jakub Hryniewicki  |" << endl;
cout << "===========================" << endl;

cout << "Witam Cie serdecznie w programie potegowanie. Wpisz liczby, ktore chcesz potegowac: " <<endl;
cout << "Liczba potegowana: ";
cin >> a;
cout << "Do potegi: ";
cin >> b;
c=pow(a,b);
cout << "Wynik potegowania: " << c <<endl;
again:
cout << "\nCzy chcesz potegowac " << c << " przez kolejna liczbe? Jesli tak wybierz 'T', a nastepnie wpisz potege, do ktorej chcesz podniesc liczbe "<< c <<", a jesli nie chcesz potegowac wybierz 'N'." << endl;

cin >> sign;
cin.ignore(1024,'\n');
if(sign=='t'||sign=='T'){
a=c;
c=0;
b=0;
cin >> b;
c=pow(a,b);
system("cls");
cout << "===========================" << endl;
cout << "|   Program Potegowanie   |" << endl;
cout << "|   by Jakub Hryniewicki  |" << endl;
cout << "===========================" << endl;
cout << "Wynik podniesienia liczby " << a << " do potegi " << b << " wynosi: " << c <<endl;
goto again;
}
else if (sign!='n'||sign!='N')
calculator();

cout << "\nWpisz 'P', aby potegowac dalej, 'M', aby wrocic do menu, 'K', aby prezejsc do kalkulatora lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='s'||signM=='S')
powerA();
else if(signM=='m'||signM=='M')
main();
else if(signM=='k'||signM=='K')
calculator();
else if(signM=='z'||signM=='Z')
system("pause");
else if(signM!='k'||signM!='K'||signM!='z'||signM!='Z'||signM!='m'||signM!='M'||signM!='s'||signM!='S'){
powerA();
}
}

void hidden(){
srand(time(NULL));

int a,b,c,d,e,f,n,n1,n2,n3,n4,n5,n6,m;
char signM, sign;

again:
system("cls");
cout << "========================" << endl;
cout << "|    Ukryty Program    |" << endl;
cout << "| by Jakub Hryniewicki |" << endl;
cout << "========================" << endl;

cout << "\nGratulacje znalazles mnie!" << endl;
cout << "Program losuje 6 liczb od 1 do 49. Pamietaj, ze liczby nie moga sie powtarzac! Jesli porgram Cie cofnie do wybrania liczb z powrotem znaczy to, ze nie zastosowales sie w pelni do instrukcji.\n\nPodaj swoje liczby: " << endl;
cin >> a;
cin >> b;
cin >> c;
cin >> d;
cin >> e;
cin >> f;

if(a<1||a>49||b<1||b>49||c<1||c>49||d<1||d>49||e<1||e>49||f<1||f>49)
goto again;

else if(a==b||a==c||a==d||a==e||a==f)
goto again;
else if(b==a||b==c||b==d||b==e||b==f)
goto again;
else if(c==a||c==b||c==d||c==e||c==f)
goto again;
else if(d==a||d==b||d==c||a==d||a==e)
goto again;
else if(e==a||e==b||e==c||e==d||e==f)
goto again;
else if(f==a||f==b||f==c||f==d||f==e)
goto again;
else{
cout << "\nWybrane liczby to: " << a << ", "<< b << ", " << c << ", " << d << ", " << e << ", " << f << endl;
}
cout << "\nPrzechodzimy do losowania! Wybierz 'L', aby losowac! 'M'. " << endl;
again1:
cin >> sign;
cin.ignore(1024,'\n');
if(sign=='l'||sign=='L'){
system("cls");
cout << "========================" << endl;
cout << "|    Ukryty Program    |" << endl;
cout << "| by Jakub Hryniewicki |" << endl;
cout << "========================" << endl;

cout << "\nMaszyna losujaca idzie w ruch, a wylosowane liczby to: " << endl;

for (int i=0;i<6;i++){

n = rand() % 49 + 1;

if(i==0){
n1=n;
cout << n1 << endl;
}

else if(i==1){
n2=n;
if (n2==n1)
--i;
cout << n2 << endl;
}

else if(i==2){
n3=n;
if (n2==n || n2==n1)
--i;
cout << n3 << endl;
}

else if(i==3){
n4=n;
if (n2==n || n2==n1 || n3==n2)
--i;
cout << n4 << endl;
}

else if(i==4){
n5=n;
if (n2==n || n2==n1 || n3==n2 || n4==n3)
--i;
cout << n5 << endl;
}

else if(i==5){
n6=n;
if (n2==n || n2==n1 || n3==n2 || n4==n3 || n5==n4)
--i;
cout << n6 << endl;
}

}
cout << "\nDla przypomnienia Twoje liczby to:\n" << a << "\n"<< b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << endl;
cout << "\nTrafione liczby to:" << endl;
if(a==n1||a==n2||a==n3||a==n4||a==n5||a==n6)
cout << a << endl;
else
cout << "-" <<endl;

if(b==n1||b==n2||b==n3||b==n4||b==n5||b==n6)
cout << b << endl;
else
cout << "-" <<endl;

if(c==n1||c==n2||c==n3||c==n4||c==n5||c==n6)
cout << c << endl;
else
cout << "-" <<endl;

if(d==n1||d==n2||d==n3||d==n4||d==n5||d==n6)
cout << d << endl;
else
cout << "-" <<endl;

if(e==n1||e==n2||e==n3||e==n4||e==n5||e==n6)
cout << e << endl;
else
cout << "-" <<endl;

if(f==n1||f==n2||f==n3||f==n4||f==n5||f==n6)
cout << f << endl;
else
cout << "-" <<endl;

}
else if (sign=='m'||sign=='M')
main();
else
goto again1;

cout << "\nWpisz 'M', aby wrocic do Menu lub 'Z', aby zakonczyc program." << endl;
cin >> signM;
cin.ignore(1024,'\n');

if(signM=='z'||signM=='Z')
system("pause");
else if(signM=='m'||signM=='M')
main();
else if(signM!='z'||signM!='Z'||signM!='m'||signM!='M')
hidden();
}

