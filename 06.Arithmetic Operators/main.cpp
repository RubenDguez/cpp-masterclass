/**
 * Arithmetic Operators return the result of a specific arithmetic operation (+, -, *, /)
 */
#include <iostream>

int main() {
    using std::cout;

    const int X = 10;
    const int Y = 2;

    cout << "Sum  : " << X << " + " << Y << ": " << (X + Y) << '\n';
    cout << "Diff : " << X << " - " << Y << ": " << (X - Y) << '\n';
    cout << "Mult : " << X << " * " << Y << ": " << (X * Y) << '\n';
    cout << "Div  : " << X << " / " << Y << ": " << (X / Y) << '\n';

    int students = 20;

    // add one student
    // students = students = 1;
    // students += 1;
    // students++;

    // subtract one student
    // students = students - 1;
    // students -= 1;
    // students--;

    // duplicate students
    // students = students * 2;
    // students *= 2;

    // divide students
    // students = students / 2;
    // students /= 2;

    cout << "Students quantity: " << students << '\n';

    return 0;
}
