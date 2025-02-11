/**
 * Type conversion = converting a value of one data type to another
 *                      Implicit = automatic
 *                      Explicit = Precede value with new data type
 */

#include <iostream>

int main() {
    int correctAnswers = 8;
    int totalQuestions = 10;

    // double score = correctAnswers / totalQuestions * 100; -> this operation will return 0 due to integer division
    double score = correctAnswers / (double) totalQuestions * 100; // corrected version using type conversion
    
    std::cout << score << "%";
}
