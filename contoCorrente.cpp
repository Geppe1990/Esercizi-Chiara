#include<cstdio>
#include<iostream>
#include<cmath>
#include<ctime>
#include<iomanip>
#include<string>
using namespace std;

/*
 * il conto ha un saldo iniziale di tot
   si posso effettuare depositi (il saldo aumenta)
   o prelievi (il saldo diminuisce)
   se il prelievo è superiore al saldo
   non è possible effettuare un prelevo se il conto è minore di quello che voglio prelevare
   per termnare l'operazione uso una cifra = 0.
   fai con geppe e vaffanculo
*/

int main()
{

    int c;			//conto iniziale
    int s;			//soldi
    int i;			//accomulatore


    cout<<"di quanto ? il tuo saldo:	";
    cin>>c;

    cout<<"se vuoi prelevare scrivere la somma in negativo,se vuoi depositare in positivo:  ";
    cin>>s;

    do{
        if(s>0)
        {
        c=c+s;
        cout<<"il tuo conto e' pari a "<<c;
        }
        else
        {
        c=c+s;
        cout<<"il tuo conto e' pari a "<<c;
        }
    }
    while(s!=0);
}
