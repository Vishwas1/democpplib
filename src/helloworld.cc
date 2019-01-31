#include "helloworld.h"
#include <iostream>

using namespace std;

void message::printMessage(string msg){
    cout << "Inside helloworldlib : %s !" << msg;
}