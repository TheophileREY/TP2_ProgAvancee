#include <iostream>
#include <vector>
#include <ctime>
#include <iomanip>

class Day {
public:
    int number;
    Day(int num) {
    	number = num;
    }
};

class Month {
public:
    std::string name;
    int daysCount;
    int startDay; // 0 = Lundi, 6 = Dimanche
    std::vector<Day> days;

    Month(std::string monthName, int numDays, int firstDay) {
    	name = monthName;
    	daysCount = numDays;
    	startDay = firstDay;
        for (int i = 1; i <= daysCount; ++i) {
            days.push_back(Day(i));
        }
    }

    void print() {
        std::cout << name << std::endl;
        std::cout << "Lu Ma Me Je Ve Sa Di" << std::endl;

        int dayOfWeek = startDay;
        for (int i = 0; i < dayOfWeek; ++i) {
            std::cout << "   ";
        }

        for (auto &day : days) {
            std::cout << std::setw(2) << day.number << " ";
            if (dayOfWeek == 6) {
                std::cout << std::endl;
                dayOfWeek = 0;
            } else {
                ++dayOfWeek;
            }
        }
        std::cout << std::endl << std::endl;
    }
};

class Calendar {
private:
    int year;
    std::vector<Month> months;
    // annee bissextile divisible par 400 ou divisible par 4 mais pas par 100
    bool isLeapYear(int year) {
        return (year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0);
    }

    int getStartDayOfYear(int year) {
        int day = (year * 365 + year / 4 - year / 100 + year / 400) % 7;
        return (day + 6) % 7; // Pour que 0 soit lundi
    }

public:
    explicit Calendar(int y) : year(y) {
        std::vector<std::string> monthNames = {
            "Janvier", "Fevrier", "Mars", "Avril", "Mai", "Juin",
            "Juillet", "Aout", "Septembre", "Octobre", "Novembre", "Decembre"
        };
        std::vector<int> monthDays = {31, isLeapYear(year) ? 29 : 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int dayOfWeek = getStartDayOfYear(year);
        for (int i = 0; i < 12; ++i) {
            months.emplace_back(monthNames[i], monthDays[i], dayOfWeek);
            dayOfWeek = (dayOfWeek + monthDays[i]) % 7;
        }
    }

    void print() {
        for (auto &month : months) {
            month.print();
        }
    }
};

int main() {
    int year;
    std::cout << "Entrez l'année pour le calendrier: ";
    std::cin >> year;

    Calendar calendar(year);
    calendar.print();

    return 0;
}
