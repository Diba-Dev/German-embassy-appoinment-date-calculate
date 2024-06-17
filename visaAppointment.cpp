#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

void calculateApplicationDates(int year, int startMonth, int startDay, int endMonth, int endDay) {
    tm interviewStart = {};
    tm interviewEnd = {};

    interviewStart.tm_year = year - 1900;
    interviewStart.tm_mon = startMonth - 1;
    interviewStart.tm_mday = startDay;

    interviewEnd.tm_year = year - 1900;
    interviewEnd.tm_mon = endMonth - 1;
    interviewEnd.tm_mday = endDay;

    cout << "Desired Interview Period: " << put_time(&interviewStart, "%B %d, %Y") << " to " 
         << put_time(&interviewEnd, "%B %d, %Y") << endl << endl;

    cout << setw(30) << "Waiting Period (Months)" << setw(30) << "Application Date Range" << endl;
    cout << "-----------------------------------------------------------------" << endl;

    for (int months = 24; months >= 19; --months) {
        tm applicationStart = interviewStart;
        tm applicationEnd = interviewEnd;

        // Subtract the months
        applicationStart.tm_mon -= months;
        applicationEnd.tm_mon -= months;

        // Normalize the times
        mktime(&applicationStart);
        mktime(&applicationEnd);

        cout << setw(24) << months << setw(30)
             << put_time(&applicationStart, "%B %d, %Y") << " to "
             << put_time(&applicationEnd, "%B %d, %Y") << endl;
    }
}

int main() {
    int year, startMonth, startDay, endMonth, endDay;

    cout << "Enter the desired interview year: ";
    cin >> year;
    cout << "Enter the start month of the desired interview period (1-12): ";
    cin >> startMonth;
    cout << "Enter the start day of the desired interview period (1-31): ";
    cin >> startDay;
    cout << "Enter the end month of the desired interview period (1-12): ";
    cin >> endMonth;
    cout << "Enter the end day of the desired interview period (1-31): ";
    cin >> endDay;

    calculateApplicationDates(year, startMonth, startDay, endMonth, endDay);

    return 0;
}
