Visa Appointment Date Calculator
Overview

This project provides a C++ program designed to help users calculate the optimal dates to apply for a visa appointment based on a desired interview period. Given the typical waiting period of 19 to 24 months for obtaining a visa appointment, this tool assists applicants in planning their application submissions to ensure timely appointments.
Purpose

The primary motivation behind creating this tool is to help individuals, especially those applying for visas with significant waiting periods, to determine the best dates for applying. This ensures that they secure an appointment within their desired interview period. This tool is particularly useful for applicants dealing with strict timelines, such as students needing to attend sessions at specific times.
How It Works
Input

The program prompts the user to enter:

    The year of the desired interview period.
    The start month of the desired interview period (1-12).
    The start day of the desired interview period (1-31).
    The end month of the desired interview period (1-12).
    The end day of the desired interview period (1-31).

Output

The program calculates and displays the application date ranges for each waiting period (from 24 months to 19 months before the desired interview period). The output is a table that includes:

    The waiting period in months.
    The corresponding range of application dates.

Example Output

yaml

Desired Interview Period: July 31, 2027 to October 1, 2027

      Waiting Period (Months)       Application Date Range
-----------------------------------------------------------------
                       24           July 31, 2025 to October 1, 2025
                       23           August 31, 2025 to November 1, 2025
                       22           September 30, 2025 to December 1, 2025
                       21           October 31, 2025 to January 1, 2026
                       20           November 30, 2025 to February 1, 2026
                       19           December 31, 2025 to March 1, 2026

Code Explanation
Main Function

The main function gathers user input for the desired interview period and calls the calculateApplicationDates function with these inputs.
Date Calculation Function

The calculateApplicationDates function performs the following steps:

    Initialize Date Structures:
        Initializes std::tm structures for the start and end dates of the desired interview period.

    Date Calculation:
        Iterates over the range of waiting periods (from 24 months to 19 months).
        For each waiting period, it adjusts the interview start and end dates by subtracting the waiting period in months.
        Normalizes the dates using std::mktime.

    Output the Results:
        Prints a table showing the waiting period and corresponding application date range.

How to Compile and Run

    Save the Code:
        Save the code to a file, e.g., visa_application_calculator.cpp.

    Open a Terminal:
        Open a terminal or command prompt.

    Navigate to the Directory:
        Navigate to the directory where the file is saved.

    Compile the Code:
        Use a C++ compiler to compile the code, e.g., g++ visa_application_calculator.cpp -o visa_application_calculator.

    Run the Program:
        Execute the compiled program, e.g., ./visa_application_calculator.

    Input the Desired Dates:
        Follow the prompts to enter the desired interview period.

    View the Results:
        The program will output the calculated application date ranges.
