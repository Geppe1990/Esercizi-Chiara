#include <iostream>
using namespace std;

void richiesta1() {
    cout<<"preso in input n>0 mandare in output un quadrato nxn di asterischi\n"
          "Es. n=5\n!"
          "*****\n"
          "*****\n"
          "*****\n"
          "*****\n"
          "*****"<<endl;
}
void richiesta2() {
    cout<<"preso in input n>0 mandare in output un triangolo nxn di asterischi in numero crescente\n"
          "Es. n=5\n"
          "*\n"
          "**\n"
          "***\n"
          "****\n"
          "*****\n"<<endl;
}
void richiesta3() {
    cout<<"preso in input n>0 mandare in output un triangolo nxn di asterischi in numero decrescente\n"
          "Es. n=5\n"
          "*****\n"
          "****\n"
          "***\n"
          "**\n"
          "*\n"<<endl;
}
void richiesta4() {
    cout<<"preso in input n>0 mandare in output un quadrato\n"
          "nxn di asterischi e spazi\n"
          "Es. n=5\n"
          "* * *\n"
          " * *\n"
          "* * *\n"
          " * *\n"
          "* * *\n"<<endl;
}
void richiesta5() {
    cout<<"preso in input n>0 mandare in output un triangolo capovolto orizzontalmente di asterischi\n"
          "Es. n=5\n"
          "    *\n"
          "   **\n"
          "  ***\n"
          " ****\n"
          "*****\n"<<endl;
}
void richiesta6() {
    cout<<"preso in input n>0 mandare in output un triangolo capovolto orizzontalmente e verticalmente di asterischi\n"
          "Es. n=5\n"
          "*****\n"
          " ****\n"
          "  ***\n"
          "   **\n"
          "    *\n"<<endl;
}
void richiesta7() {
    cout<<"preso in input n>0 mandare in output un triangolo di asterischi aumentando di 2 la dimensione ad ogni riga\n"
          "Es. n=5\n"
          "*\n"
          "***\n"
          "*****\n"
          "*******\n"
          "*********\n"<<endl;
}
void richiesta8() {
    cout<<"preso in input n>0 mandare in output un triangolo inclinato di asterischi\n"
          "Es. n=5\n"
          "*\n"
          " **\n"
          "  ***\n"
          "   ****\n"
          "    *****\n"<<endl;
}
void richiesta9() {
    cout<<"preso in input n>0 mandare in output un triangolo inclinato di asterischi\n"
          "Es. n=5\n"
          "    *****\n"
          "   ****\n"
          "  ***\n"
          " **\n"
          "*\n"<<endl;
}
void richiesta10() {
    cout<<"preso in input n>0 mandare in output un triangolo isoscele (albero di Natale) di asterischi\n"
          "Es. n=5\n"
          "    *\n"
          "   ***\n"
          "  *****\n"
          " *******\n"
          "*********\n"<<endl;
}
void esercizio1(){
    richiesta1();
    int input;
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for (int riga = 1; riga <= input; riga++) {
        for (int colonna = 1; colonna <= input; colonna++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio2() {
    richiesta2();
    int input;
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for (int riga = 1; riga <= input; riga++) {
        for (int nAsterischi = 1; nAsterischi <= riga; nAsterischi++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio3() {
    richiesta3();
    int input;
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for (int riga = 0; riga <= input; riga++) {
        for (int nAsterischi =0 ; nAsterischi<input-riga; nAsterischi++) {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio4() {
    richiesta4();
    int input;
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for (int riga = 1; riga <= input; riga++) {
        for (int nAsterischi = 1; nAsterischi <= input; nAsterischi++) {
            // RIGA PARI
            if (riga % 2 ==0)
            {
                // COLONNA DISPARI
                if(nAsterischi % 2 != 0) {
                    cout<<" ";
                // COLONNA PARI
                } else {
                    cout<<"*";
                }

            // RIGA DISPARI
            }else{
                // COLONNA DISPARI
                if(nAsterischi % 2 != 0) {
                    cout<<"*";
                // COLONNA PARI
                } else {
                    cout<<" ";
                }
            }
        }
        cout << "\n";
    }
}
void esercizio5() {
    richiesta5();
    int input;
    int riga, spazi, asterischi;
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=1;riga<=5;riga++) {

        for(spazi=1;spazi<=input-riga;spazi++) {
            cout<<" ";
        }
        for(asterischi=1;asterischi<=riga;asterischi++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio6() {
    richiesta6();
    int input;
    int riga, spazi, asterischi;    //contatori
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=0;riga<=input;riga++)
    {
        for(spazi=0;spazi<riga;spazi++)
        {
            cout<<" ";
        }
        for(asterischi=1;asterischi<=input-riga;asterischi++)
            cout<<"*";

        cout<<"\n";
    }
}
void esercizio7() {
    richiesta7();
    int input;
    int riga, spazi, asterischi;    //contatori
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=1;riga<=input;riga++)
    {
        for(asterischi=1;asterischi<riga*2;asterischi++)
        { cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio8() {
    richiesta8();
    int input;
    int riga, spazi, asterischi;    //contatori
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=1;riga<=input;riga++)
    {
        for(spazi=0;spazi<riga;spazi++)
        {cout<<" ";}

        for(asterischi=1;asterischi<=riga;asterischi++)
        {cout<<"*";}

        cout<<"\n";
    }
}
void esercizio9() {
    richiesta9();
    int input;
    int riga, spazi, asterischi;    //contatori
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=0;riga<=input;riga++)
    {
        for(spazi=1;spazi<input-riga;spazi++)
        {cout<<" ";}

        for(asterischi=1;asterischi<=input-riga;asterischi++)
        {cout<<"*";}

        cout<<"\n";
    }
}
void esercizio10() {
    richiesta10();
    int input;
    int riga, spazi, asterischi, spazi2;    //contatori
    cout<<"Inserisci un numero maggiore di 0: ";
    cin>>input;

    for(riga=1;riga<=input;riga++)
    {
        for(spazi=1;spazi<=input-riga;spazi++)
        {
            cout<<" ";
        }
        for(asterischi=1;asterischi<riga*2;asterischi++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
}
void esercizio11() {
/*
 *
 * il conto ha un saldo iniziale di tot -> creare una variabile conto di tipo intero o float
   si posso effettuare depositi (il saldo aumenta)
   o prelievi (il saldo diminuisce)
   se il prelievo è superiore al saldo non è possible effettuare un prelevo
   per termnare l'operazione uso una cifra = 0.
   fai con geppe e vaffanculo
*/
    float c;      //conto iniziale
    float s;     //cifra variabile

    cout<<"a quanto ammonta il tuo conto?   ";
    cin>>c;

    do
    {
        cout<<"scrivere la cifra in negativo se si vuole prelevare, e in positivo se si vuole depositare:   ";
        cin>>s;

        if(s*-1>c)
        {
            cout<<"non possofare questa operacione\n";
        }
        else
            {c=c+s;
            cout<<"il tuo conto ammonta a"<<c<<"\n";}
    }while (s!=0);
}
void esercizio12() {
    /*
    Mario è uno studente che ha una quantità di soldi stabilita dall’utente,
     ogni giorno Mario all’intervallo può acquistare al bar della scuola una pastina che costa 1 euro o un panino che costa 1,5 euro.
    Il programma continua a chiedere all’utente cosa mangerà Mario quel giorno finché ha abbastanza soldi o non ha la possibilità di soddisfare il suo appetito con quello che vuole.
    Al termine del programma scrivere in output il numero di giorni in cui Mario ha mangiato e quante volte ha mangiato una pastina e quante un panino.
    */

    float s=5;  //soldi di mario
    float pastina=1;
    float panino=1.5;
    int scelta;

    do
    {
        cout<<"cosa mangia oggi mario? scrivi 0 per pastina e 1 per panino"<<"\n";
        cin>>scelta;
        if(scelta==0) {
            cout<<"mario oggi ha mangiato una pastina\n";
            s=s-1;
            cout<<"a mario sono rimasti "<<s<<"\n";
        }
        else
        {
            if(s<1.5)
            {
                cout<<"mario ha scelto un panino ma non hai abbastanza soldi\n";
                s=0;
            }
            else
            {cout<<"mario ha scelto il panino\n";
            s=s-1.5;
            cout<<"a mario sono rimasti "<<s<<"\n";
            }
        }
    }
    while (s>=1);
        cout<<"mario non ha piu soldi";
}
void esercizio13() {
    /*
     * Simulare un’asta in cui ci siano due compratori che si contendono l’acquisto di un oggetto,
     * a turno i due compratori dovranno fare un’offerta per l’oggetto da comprare, l’asta termina quando uno dei due compratori si ritira offrendo ‘0’,
     * a quel punto l’altro compratore si sarà aggiudicato l’asta. Stampare quale compratore si è aggiudicato l’asta e con che cifra.
     */
    int c=1;
    int c1;
    int c2;

    do {
        cout<<"inserisci offerta compratore 1:  ";
        cin>>c1;
        if(c1>c)
        {
            c=c1;
        }
        else
            c1=0;

        if (c1!=0)
        {
            cout<<"inserisci offerta compratore 2:  ";
            cin>>c2;
            if(c2>c)
            {
                c=c2;
            }
            else
                c2=0;
        }

    }
    while(c1!=0 && c2!=0);
    if(c1>c2)
    {
        cout<<"il vincitore dell'asta e' il numero 1 con "<<c1;
    }
    else
    {
        cout<<"il vincitore dell'asta e' il numero 2 con "<<c2;
    }
}
void esercizio14() {
/*
 * Giochiamo a indovina il numero
 * indovina il numero intero tra 1 e 100 generato
 * ad ogni tentativo errato stampa messaggio che comunica se numero è maggiore o minore di quello da indovinare
 * Il gioco termina quando il numero viene indovinato
*/

    int incognita;
    int numero;
    int contatore=0;
    do
    {
        cout<<"scrivi l'incognita";
        cin>>incognita;
    }
    while(incognita<0 || incognita>100);

    do {cout << "scrivi un numero\n";
        cin >> numero;
        contatore++;
        if (numero > incognita) {
            cout << "il numero e' maggiore dell'incognita\n";
        }
        if(numero<incognita)
        {
            cout<<"il numero e' minore dell'incognita\n";
        }
    }
    while (numero!=incognita);

    cout<<"il numero e' corretto"<<"hai fatto "<< contatore <<" tentativi";
}
void esercizio15() {
    /*
     * Far inserire una serie numerica di interi fermandosi quando viene inserito due volte consecutive lo stesso numero.
     */
    int numeronuovo;
    int numero=0;
    int contatore=0;

    do {
        cout<<"scrivi un numero";
        cin>>numeronuovo;
        if (numeronuovo==numero)
        {
          contatore++;
        }
        else
        {
            contatore=0;
            numero=numeronuovo;
        }

    }
    while(contatore<1);
    cout<<"il numero che hai scritto 2 volte consecutivamente e' " <<numero;

}
void esercizio16() {
/*
 * Dopo aver fatto inserire un numero naturale il programma restituisce in output da quante cifre è composto il numero.
 */
    int numero;
    int contatore=1;

    cout<<"scrivi un numero";
    cin>>numero;
    do {
        if(numero>10)
        {
            numero=numero/10;
            contatore++;
        }

    }
    while(numero>10);
    cout<<"il numero e' composto da "<<contatore<<" cifre";

}
void esercizio17() {
    /*
     * Verificare se un numero passato dall’utente è primo.
     */

    int numero,resto;
    int i;
    int contatore=0;
    cout<<"scrivere un numero";
    cin>>numero;
    for(i=numero;i>=1;i--)
    {
        resto=numero%i;
        if (resto==0)
        {
            contatore++;
        }
    }
    if(contatore<=2)
    {
        cout<<"il numero e' primo";
    }
    else
    {
        cout<<"il numero non e' primo";
    }

}
void esercizio18() {
    /*
     * Far inserire all’utente una serie di numeri interi, quando viene inserito un numero negativo farlo reinserire
     * e non tenerlo in considerazione, terminare la serie quando viene inserito zero.
     * Terminata la lettura della serie scrivere in output la somma dei numeri positivi inseriti.
     */
    int numero,somma=0;

    do
    {
        cout<<"inserisci un numero ";
        cin>>numero;

        if (numero>0)
        {
            somma=somma+numero;
        }
    }
    while(numero!=0);
        cout<<somma;

}
void esercizio19() {
/*
    Leggere in input due numeri naturali b e h e in output far scrive un rettangolo di “*” con b asterischi per la base e h per l’altezza.
    Ad esempio se legge 5 e 3 disegnerà:
    *****
    *****
    *****
 */

    int b,h;
    int riga,colonna;

    cout<<"scrivere il numero per la base  ";
    cin>>b;
    cout<<"scrivere il numero per l'altezza";
    cin>>h;

    for(riga=1;riga<=h;riga++)
    {
       for(colonna=1;colonna<=b;colonna++)
       {
           cout << "*";
       }
       cout<<"\n";
    }
}
void esercizio20() {
    /*
     * Scrivere un programma che chiede quanti alunni ci sono
     * in una classe poi per ogni alunno fa inserire 5 voti e ne scrive la media.
     */

    int alunni;
    float voto;
    float media;
    int alunno,voti;

    cout<<"quanti alunni ci sono?   ";
    cin>>alunni;

    for(alunno=1;alunno<=alunni;alunno++)
    {
        media = 0;
        for(voti=1;voti<=5;voti++)
        {
            cout<<"inserisci un voto ";
            cin>>voto;
            media=media+voto;
        }
        media=media/5;
        cout<<"la media del "<<alunno<< " alunno e'  "<<media<<"\n";
    }
}
void esercizio21() {
    /*"preso in input n>0 mandare in output un triangolo isoscele (albero di Natale) di asterischi\n"
          "Es. n=5\n"
          "    *\n"
          "   ***\n"
          "  *****\n"
          " *******\n"
          "*********\n"*/

    int numero;
    int riga,asterischi,spazi;

    cout<<"scrivi un numero ";
    cin>>numero;

    for(riga=1;riga<=numero;riga++)
    {
        for(spazi=0;spazi<numero-riga;spazi++)
        {
            cout<<" ";
        }
        for(asterischi=1;asterischi<riga*2;asterischi++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(riga=1;riga<numero;riga++)
    {
        for(spazi=1;spazi<=riga;spazi++)
        {
            cout<<" ";
        }
        for (asterischi=1;asterischi<=(numero*2-spazi*2)+1;asterischi++)
        {
            cout<<"*";
        }
        cout<<"\n";
    }



}
void esercizio22() {
/*
Dato un numero n di studenti che hanno una quantità di soldi stabilita dall’utente, ogni giorno  all’intervallo possono acquistare
al bar della scuola una pastina che costa 1 euro o un panino che costa 1,5 euro.
Il programma continua a chiedere all’utente cosa mangerà lo studente quel giorno finché ha abbastanza soldi o non ha la possibilità di soddisfare
il suo appetito con quello che vuole.
Al termine del programma scrivere in output il numero di giorni in cui il singolo studente ha mangiato e quante volte ha mangiato una pastina e quante un panino.
*/

int studenti;
float soldi;
int nstud;
int scelta;
int c=0;

cout<<"quanti studenti ci sono? ";
cin>>studenti;

    for(nstud=1;nstud<=studenti;nstud++)
    {
        soldi=0;
        c=0;
        cout<<"quanti soldi ha il "<<nstud<<" studente? \n";
        cin>>soldi;

        while(soldi>=1)
        {
            c++;
            cout<<"cosa vuoi comprare oggi? ";
            cout<<"scrivi 1 per la pastina e 2 per il panino ";
            cin>>scelta;

            if (scelta==2)
            {
                if (soldi >= 1.5) {
                    soldi = soldi - 1.5;
                    cout << "ti sono rimasti " << soldi << "\n";
                }
            }
            else {
                soldi=soldi-1;
                    cout<<"ti sono rimasti "<<soldi<<"\n";
            }
        }
        cout<<"non hai abbastanza soldi\n";
        cout<<"e ha mangiato per "<<c <<" giorni\n";
    }
};

void esercizio23() {
	// Dato un array di 100 elementi compresi tra -100 e 100 mandare in output tutti i valori negativi

	const int dim=100;
	int a[dim];
	int i;

	srand(time(NULL));
	for(i=0;i<dim;i++)
	{
		a[i] = rand() % 201 + (-100);
		cout<< a[i]<<" ";

	}
	cout<<"\n\n";
	for (i = 0; i < dim; i++)
	{
		if(a[i]<0)
			cout<<a[i]<<" ";
	}
}

void esercizio24() {
	// Dato un array di 30 elementi compresi tra 3 e 10 dire quante volte appare un valore in input

	const int dim=30;
	int a[dim];
	int i;
	int n;
	int c=0;

	srand(time(NULL));
	for(i=0;i<dim;i++)
	{
		a[i]=rand() % 8+3;
		cout<<a[i]<<"  ";
	}
	cout<<"scrivi un numero:  ";
	cin>>n;
	for(i=0;i<dim;i++)
	{
		if(a[i]==n)
		c++;
	}
	cout<<"\n\n";
	cout<<c;
}

void esercizio25() {
	// Estraendo numeri da 1 a 90 effettuando un certo numero
	//  di estrazioni dire quante volte è uscito un numero

	const int dim=100;
	int a[dim];
	int i,n;

	srand(time(NULL));
	for(i=0;i<dim;i++)
	{ 
		a[i]= rand()%91+1;
		cout<<a[i]<<"  ";
	}
	cout<<"\n\n";
	
	
	for(n=1;n<90;n++)
	{
		int c=0;
		for(i=0;i<dim;i++)
		{
			if (n==a[i])
			{
				c++;
			}
		}
		cout<<"ho trovato il numero"<<n<<" "<<c<<" volte""\n";
	}
}

void esercizio26() {
	// Es 23. Leggere un array di interi di 10 posizioni e stampare il numero che compare 
	// più volte all’interno dell’array, qualora ci siano più numeri che compaiano 
	// lo stesso numero di volte stamparli tutti.

	const int dim=10;
	int a[dim];
	int i,n,c,f;
	int g=0;

	srand(time(NULL));
	for(i=0;i<dim;i++)
	{
		a[i]=rand ()%10+0;
		cout<<a[i]<<"  ";
	}

	cout<<"\n\n";
	for(n=0;n<11;n++)
	{
		c=0;
		for(i=0;i<dim;i++)
		{
			if(n==a[i])
			{
			c++;	
			}
			
		}
		if(c>g)
		{
			g=c;
			f=n;
		}
	
	}
	cout<<"il nuemro"<<f<<"e' apparso"<<g<<"volte";
}

int main() {
    int choice = 26;
    /*cout<<"Quale esercizio vuoi fare? ";
    cin>>choice;*/

    switch (choice) {
        case 1:
            esercizio1();
            break;
        case 2:
            esercizio2();
            break;
        case 3:
            esercizio3();
            break;
        case 4:
            esercizio4();
            break;
        case 5:
            esercizio5();
            break;
        case 6:
            esercizio6();
            break;
        case 7:
            esercizio7();
            break;
        case 8:
            esercizio8();
            break;
        case 9:
            esercizio9();
            break;
        case 10:
            esercizio10();
            break;
        case 11:
            esercizio11();
            break;
        case 12:
            esercizio12();
            break;
        case 13:
            esercizio13();
            break;
        case 14:
            esercizio14();
            break;
        case 15:
            esercizio15();
            break;
        case 16:
            esercizio16();
            break;
        case 17:
             esercizio17();
             break;
        case 18:
            esercizio18();
            break;
        case 19:
            esercizio19();
        case 20:
            esercizio20();
        case 21:
            esercizio21();
        case 22:
            esercizio22();
            break;
		case 23:
			esercizio23();
			break;
		case 24:
			esercizio24();
			break;
		case 25:
			esercizio25();
			break;
		case 26:
			esercizio26();
			break;
	}
}

