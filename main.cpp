#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
using std::cin;
using std::cout;
using std::string;
using std::endl;


//string getRunningTimePretty(int runningTime){
//
//    string prettyTime = "";
//    int minute = runningTime / 60;
//    int second = runningTime % 60;
//    string min = to_string(minute);
//    string sec = to_string(second);
//    prettyTime.append(min);
//    prettyTime.append(":");
//    if (second < 10){
//        prettyTime.append("0");
//    }
//    prettyTime.append(sec);
//    return prettyTime;
//
//}


int main() {


    double x1, x2, x3, total;
    cout << "Please enter the concentration of alcohol 1: ";
    cin >> x1;
    cout << "Please enter the concentration of alcohol 2: ";
    cin >> x2;
    cout << "Please enter the concentration of the result alcohol: ";
    cin >> x3;
    cout << "Please enter the quantity of the result alcohol: ";
    cin >> total;

    double y3 = total * x3;
    double out, out1, out2;
    out = (y3 - x1 * total) / (x2 - x1);

    cout << "Alcohol 1 - " << x1 << "%" << " needs: " << out << endl;
    cout << "Alcohol 2 - " << x2 << "%" << " needs: " << total - out << endl;





    return 0;
}