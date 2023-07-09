#include <iostream>
#include <Windows.h>
#include "Autoservice.h"
#include <iomanip>
using namespace std;
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    autoservice cars[30];
    int counter = 0, records = 0, sum = 0, counter1 = 0;
    char flag = 'y';
    do {
        cout << "Машина " << records + 1 << endl;
        cout << "Введите регистрационный номер машины: " << endl;
        cin >> cars[records].regnum;
        cout << "Введите фамилию владельца машны: " << endl;
        cin >> cars[records].fam1;
        cout << "Введите стоимость ремонта: " << endl;
        cin >> cars[records].repairprice;
        cout << "Введите фамилию мастера: " << endl;
        cin >> cars[records].masterfam;
        cout << "Хотите продолжить ввод? (y/n)" << endl;
        cin >> flag;
        records++;
    } while (flag == 'y');
    cout << setw(16) << "Фамилия владельца машины" << setw(25) <<
        "Регистрационный номер" << setw(20) << "Фамилия мастера" << setw(20) << "Стоимость ремонта" << endl;
    for (counter1 = 0; counter1 < records; counter1++) {
        cout << setw(16) << cars[counter1].fam1 << setw(25) <<
            cars[counter1].regnum << setw(20) <<
            cars[counter1].masterfam << setw(20) << cars[counter1].repairprice << endl;
    }
    for (counter = 0; counter < records; counter++) {
        sum += cars[counter].repairprice;
    }
    cout << "Сумма ремонта всех машин: " << sum << " Деняк";
}

