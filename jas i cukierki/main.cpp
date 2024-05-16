#include <iostream>

using namespace std;

int uczniowie, cukierki, cnu, cdj;

int main()
{
    cout << "ilu uczniow jest w klasie jasia:" ;
    cin >> uczniowie;
    cout << "ile mama kupila cukierkow:";
    cin >> cukierki;

    cnu = cukierki/(uczniowie-1);
    cout << "cukierkow dla kazdego ucznia jest po:" << cnu;
    cdj = cukierki-cnu*(uczniowie-1);
    cout << endl<< "cukierkow dla jasia jest:" << cdj;

    return 0;
}
