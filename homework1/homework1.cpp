#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;

struct WashingMachine {
    string company;
    string color;
    double width;
    double length;
    double height;
    int power; // Потужність у Вт
    int spinSpeed; // Швидкість  обертання (об/хв)
    double heatingTemperature;
};

void inputWashingMachine(WashingMachine& wm) {
    cout << "Введіть фірму пральної машинки: ";
    getline(cin, wm.company);
    cout << "Введіть колір пральної машинки: ";
    getline(cin, wm.color);
    cout << "Введіть ширину (см): ";
    cin >> wm.width;
    cout << "Введіть довжину (см): ";
    cin >> wm.length;
    cout << "Введіть висоту (см): ";
    cin >> wm.height;
    cout << "Введіть потужність (Вт): ";
    cin >> wm.power;
    cout << "Введіть швидкість віджимання (об/хв): ";
    cin >> wm.spinSpeed;
    cout << "Введіть температуру нагрівання (°C): ";
    cin >> wm.heatingTemperature;
    cin.ignore(); // Очистка буферу після введення чисел
}

void displayWashingMachine(const WashingMachine& wm) {
    cout << "\n--- Інформація про пральну машинку ---\n";
    cout << "Фірма: " << wm.company << endl;
    cout << "Колір: " << wm.color << endl;
    cout << "Ширина: " << wm.width << " см" << endl;
    cout << "Довжина: " << wm.length << " см" << endl;
    cout << "Висота: " << wm.height << " см" << endl;
    cout << "Потужність: " << wm.power << " Вт" << endl;
    cout << "Швидкість віджимання: " << wm.spinSpeed << " об/хв" << endl;
    cout << "Температура нагрівання: " << wm.heatingTemperature << " °C" << endl;
}

//"Праска"
struct Iron {
    string company;
    string model;
    string color;
    double minTemperature;
    double maxTemperature;
    bool steamSupply; // Подача пари: true - так, false - ні
    int power; // Потужність у Вт
};

void inputIron(Iron& iron) {
    cout << "\nВведіть фірму праски: ";
    getline(cin, iron.company);
    cout << "Введіть модель праски: ";
    getline(cin, iron.model);
    cout << "Введіть колір праски: ";
    getline(cin, iron.color);
    cout << "Введіть мінімальну температуру (°C): ";
    cin >> iron.minTemperature;
    cout << "Введіть максимальну температуру (°C): ";
    cin >> iron.maxTemperature;
    cout << "Подача пари (1 - Так, 0 - Ні): ";
    int steam;
    cin >> steam;
    iron.steamSupply = (steam == 1) ? true : false;
    cout << "Введіть потужність праски (Вт): ";
    cin >> iron.power;
    cin.ignore(); // Очистка буферу після введення чисел
}

void displayIron(const Iron& iron) {
    cout << "\n--- Інформація про праску ---\n";
    cout << "Фірма: " << iron.company << endl;
    cout << "Модель: " << iron.model << endl;
    cout << "Колір: " << iron.color << endl;
    cout << "Мінімальна температура: " << iron.minTemperature << " °C" << endl;
    cout << "Максимальна температура: " << iron.maxTemperature << " °C" << endl;
    cout << "Подача пари: " << (iron.steamSupply ? "Так" : "Ні") << endl;
    cout << "Потужність: " << iron.power << " Вт" << endl;
}

struct Boiler {
    string company;
    string color;
    int power; // Потужність у Вт
    double volume; // Об'єм у літрах
    double heatingTemperature;
};

void inputBoiler(Boiler& boiler) {
    cout << "\nВведіть фірму бойлера: ";
    getline(cin, boiler.company);
    cout << "Введіть колір бойлера: ";
    getline(cin, boiler.color);
    cout << "Введіть потужність бойлера (Вт): ";
    cin >> boiler.power;
    cout << "Введіть об'єм бойлера (літрів): ";
    cin >> boiler.volume;
    cout << "Введіть температуру нагріву (°C): ";
    cin >> boiler.heatingTemperature;
    cin.ignore(); // Очистка буферу після введення чисел
}

void displayBoiler(const Boiler& boiler) {
    cout << "\n--- Інформація про бойлер ---\n";
    cout << "Фірма: " << boiler.company << endl;
    cout << "Колір: " << boiler.color << endl;
    cout << "Потужність: " << boiler.power << " Вт" << endl;
    cout << "Об'єм: " << boiler.volume << " літрів" << endl;
    cout << "Температура нагріву: " << boiler.heatingTemperature << " °C" << endl;
}

int main()
{
    system("chcp 1251>null");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    // Введення та виведення інформації про пральну машинку
    WashingMachine wm;
    inputWashingMachine(wm);
    displayWashingMachine(wm);

    // Введення та виведення інформації про праску
    Iron iron;
    inputIron(iron);
    displayIron(iron);

    // Введення та виведення інформації про бойлер
    Boiler boiler;
    inputBoiler(boiler);
    displayBoiler(boiler);

    return 0;
}
