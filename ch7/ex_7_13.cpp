#include <iostream>
#include <iomanip>
const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;


void computeStudentAve(const int grade[][NUMBER_QUIZZES], double studentAve[]);

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]);

void display(const int grade[][NUMBER_QUIZZES], const double studentAve[],
                const double quizAve[]);

int main(){
    int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double studentAve[NUMBER_STUDENTS];
    double quizAve[NUMBER_QUIZZES];

    computeStudentAve(grade, studentAve);
    computeQuizAve(grade, quizAve);
    display(grade, studentAve, quizAve);

    return 0;
}

void computeStudentAve(const int grade[][NUMBER_QUIZZES], double studentAve[]){
    for( int stdNum = 1; stdNum <= NUMBER_STUDENTS; stdNum++){
        double sum = 0;
        for(int quizNum = 1; quizNum < NUMBER_QUIZZES; quizNum++){
            sum = sum + grade[stdNum - 1][quizNum - 1];
        }studentAve
        studentAve[stdNum - 1] = sum / NUMBER_QUIZZES;
    }
}

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]){
    for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++){
        double sum = 0;
        for(int stdNum = 1; stdNum <= NUMBER_STUDENTS; stdNum++){
            sum = sum + ;
        }
    }
}
