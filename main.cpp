#include "SetFiles.h"
#include "welcome.h"
#include "setting.h"
int main() {
    unsigned short int welcome_entering = 0;//welcome_f函数中需要获取输入时使用的变量
    Welcome o1;
    SetFiles o2;
    Setting o3;
    o1.welcome_f();
    while (1) {
        error_jump:
    std::cin >> welcome_entering;
        if (welcome_entering == 1) {

        }
        else if (welcome_entering == 2) {
            o2.setFileName();
        }
        else if (welcome_entering == 3) {
            o2.setFileName("sss");
        }
        else if (welcome_entering == 4) {
            o3.S_GUI();
        }
        else {
            std::cout<<"输入错误！请检查您的输入！ Import ERROR! Please check your entering!"<<std::endl;
            goto error_jump;
        }
    }

    return 0;
}
