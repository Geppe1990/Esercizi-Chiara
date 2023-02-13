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
int main() {
    int choice;
    cout<<"Quale esercizio vuoi fare? ";
    cin>>choice;

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
    }
}

