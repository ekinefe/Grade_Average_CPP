#include <iostream>

int math1;
int math2;
int mathAVG;
int physic1;
int physic2;
int physicAVG;
int english1;
int english2;
int englishAVG;
int management1;
int management2;
int managementAVG;
int average;
const char* separator = "----------------------------";

int main() {
    std::cout << "\n\tGrade_Average_CPP" << std::endl;

    std::cout << "\nPleas enter your math 1.grade:\t";
    std::cin >> math1;
    std::cout << "\nPleas enter yoru math 2.grade:\t";
    std::cin >> math2;
    mathAVG = (math1+math2)/2;
    std::cout << separator << std::endl;

    std::cout << "\nPleas enter your physic 1.grade:\t";
    std::cin >> physic1;
    std::cout << "\nPleas enter your physic 2.grade:\t";
    std::cin >> physic2;
    physicAVG = (physic1+physic2)/2;
    std::cout << separator << std::endl;

    std::cout << "\nPleas enter your management 1.grade:\t";
    std::cin >> management1;
    std::cout << "\nPlase neter your managemnet 2.grade :\t";
    std::cin >> management2;
    managementAVG = (management1+management2)/2;
    std::cout << separator << std::endl;

    std::cout << "\nPleas enter your English 1.grade:\t";
    std::cin >> english1;
    std::cout << "\nPleas enter your English 2.grade:\t";
    std::cin >> english2;
    englishAVG = (english1+english2)/2;

    average = (mathAVG+physicAVG+englishAVG+managementAVG)/4;
    std::cout << "\n\tAverage=" << average << std::endl;

    if (average<50){
        std::cout << "\tFAILED" << std::endl;
    }
    else if (average>=50){
        std::cout << "\tPASS" << std::endl;
    }

    std::cout << "\n\tPROGRAM IS OVER" << std::endl;

    return 0;
}
