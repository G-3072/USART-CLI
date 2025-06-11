#include <main.hpp>

CUSART usart;

int main(int argc, char* argv[]){
    initscr();

    uint8_t initStatus = argHandler(argc, argv);

    if (initStatus == 0){

    }else if (initStatus == 3){
        printw("invalid parity setting\n");
        printw("initialisation failed. press any key to exit\n");
        refresh();
        getch();
        endwin();
        return 0;
    } 

    return 0;
}

uint8_t argHandler(int argc, char* argv[]){

    for (int i = 1; i < argc; i++) {
        if(strcmp(argv[i], "-b") != 0){
            usart.setBaudrate((int32_t)atoi(argv[++i]));

        }else if(strcmp(argv[i], "-d") != 0){
            usart.setDataBits((int8_t)atoi(argv[++i]));

        }else if(strcmp(argv[i], "-p") != 0){
            if (strcmp(argv[i+1], "disabled") != 0){
                usart.setParity(0);
            }else if (strcmp(argv[i+1], "odd") != 0){
                usart.setParity(1);
            }else if (strcmp(argv[i+1], "even") != 0){
                usart.setParity(2);
            }else{
                return 3;
            }

        }else if(strcmp(argv[i], "-s") != 0){
            usart.setStopbits((int8_t)atoi(argv[++i]));

        }else if(strcmp(argv[i], "--port") != 0){
            char* port = argv[++i];
        }
    }
}