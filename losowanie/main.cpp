#include <iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

int liczba, strzal, proby=0;

int main()
{
    cout << "Witaj! Pomyslalem sobie liczbe od 1...100!" << endl;
    srand(time(NULL));
    liczba = rand()%100+1;

    while(strzal!=liczba)
    {
        proby++;
        cout<<"zgadnij jaka (to Twoja : "<<proby<<" proba):";
        cin>>strzal;

        if(strzal==liczba)
            cout<<"Udalo sie! wygrywasz w "<<proby<<" probie"<<endl;

        else if(strzal<liczba)
            cout<<"To za malo"<<endl;

        else if(strzal>liczba)
            cout<<"To za duzo"<<endl;
    }

    system("pause");
    return 0;
}
