#include <iostream>
#include <iomanip>
const int NUMBER_STUDENTS = 4, NUMBER_QUIZZES = 3;


void fillTheArray(int grade[][NUMBER_QUIZZES]);

void computeStudentAve(const int grade[][NUMBER_QUIZZES], double studentAve[]);

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]);

void display(const int grade[][NUMBER_QUIZZES], double studentAve[],
                const double quizAve[]);

int main(){
    int grade[NUMBER_STUDENTS][NUMBER_QUIZZES];
    double studentAve[NUMBER_STUDENTS];
    double quizAve[NUMBER_QUIZZES];

    fillTheArray(grade);
    computeStudentAve(grade, studentAve);
    computeQuizAve(grade, quizAve);
    display(grade, studentAve, quizAve);

    return 0;
}

void fillTheArray(int grade[][NUMBER_QUIZZES]){
    grade[0][0] = 10;
    grade[0][1] = 10;
    grade[0][2] = 10;

    grade[1][0] = 2;
    grade[1][1] = 0;
    grade[1][2] = 1;

    grade[2][0] = 8;
    grade[2][1] = 6;
    grade[2][2] = 9;

    grade[3][0] = 8;
    grade[3][1] = 4;
    grade[3][2] = 10;
}

void computeStudentAve(const int grade[][NUMBER_QUIZZES], double studentAve[]){
    for( int stdNum = 1; stdNum <= NUMBER_STUDENTS; stdNum++){
        double sum = 0;
        for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++){
            sum = sum + grade[stdNum - 1][quizNum - 1];
        }
        studentAve[stdNum - 1] = sum / NUMBER_QUIZZES;
    }
}

void computeQuizAve(const int grade[][NUMBER_QUIZZES], double quizAve[]){
    for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++){
        double sum = 0;
        for(int stdNum = 1; stdNum <= NUMBER_STUDENTS; stdNum++){
            sum = sum + grade[stdNum - 1][quizNum - 1];
        }
        quizAve[quizNum - 1] = sum / NUMBER_STUDENTS;
    }
}

void display(const int grade[][NUMBER_QUIZZES], double studentAve[],
                const double quizAve[]){
        std::cout.setf(std::ios::fixed);
        std::cout.setf(std::ios::showpoint);
        std::cout.precision(1);

        std::cout << std::setw(10) << "Student"
                  << std::setw(5) << "Ave"
                  << std::setw(15) << "Quizes\n";

        for(int stdNum = 1; stdNum <= NUMBER_STUDENTS; stdNum++){
            std::cout << std::setw(10) << stdNum << std::setw(5)
                        << studentAve[stdNum - 1] << " ";
            for(int quizNum = 1; quizNum <= NUMBER_QUIZZES; quizNum++){
                std::cout << std::setw(5) << grade[stdNum - 1][quizNum - 1];
            }
            std::cout << std::endl;
        }

        std::cout << "Quiz averages = ";
        for(int quizNum = 0; quizNum < NUMBER_QUIZZES; quizNum++){
            std::cout << std::setw(5) << quizAve[quizNum];
        }
        std::cout << std::endl;
    }
