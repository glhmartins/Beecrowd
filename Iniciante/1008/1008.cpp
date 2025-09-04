#include <bits/stdc++.h>

using namespace std;

int main(){

    int number, hours;
    float salary_per_hours, salary;

    cin >> number >> hours >> salary_per_hours;

    salary = hours * salary_per_hours;

    cout << "NUMBER = " << number << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << endl;

    return 0;
}