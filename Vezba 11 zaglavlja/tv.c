#include <stdio.h>

#define TV_MAX_CHANNELS 100

unsigned char tvStatus = 0;
unsigned int tvCurrentChannel = 0;


void tvTurnOn(){
    tvStatus = 1;

}
void tvTurnOff(){
    tvStatus = 0;

}
void tvChannelUp(){
    if (tvStatus == 0){
        return;
    }

    tvCurrentChannel++;

    if (tvCurrentChannel > TV_MAX_CHANNELS){

        tvCurrentChannel = 0;
    }

}
void tvChannelDown(){
    if (tvStatus == 0){
        return;
    }
    tvCurrentChannel--;

    if (tvCurrentChannel < 0){
        tvCurrentChannel = TV_MAX_CHANNELS;
    }

}
unsigned char tvGetStatus(){
    return tvStatus;

}
unsigned int tvGetCurrentChannel(){
    return tvCurrentChannel;

}
void tvPrintInformation(){
    printf("TV is %s.  Current channel is %d. \n",
           tvStatus == 1 ? "ON" : "OFF",
           tvCurrentChannel
    );

}
