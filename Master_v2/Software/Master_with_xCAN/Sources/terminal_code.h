#ifndef TERMINAL_CODE_H
#define TERMINAL_CODE_H

#include "defines.h"


#define USER_INT_SPEED        26        //1: pour simulation,  52: 9600 bps,  26: 19200 bps,  13: 38400 bps,  9: 56000 bps
#define GUI_RX_BUFFER_SIZE    20


//**************************
//  Variables declaration
//************************** 

extern uint16 gSciDisplayNumModule;          			// num�ro du slave � afficher
extern unsigned char gGuiBuffer[GUI_RX_BUFFER_SIZE];     //Un tampon contenant les bytes re�us du lien avec l'usager � traiter.
extern unsigned char gGuiReadIndex;
extern unsigned char gGuiWriteIndex;
extern unsigned char gGuiBufferFull;

extern int can_debug; //Pour le d�buggage CAN en console

//************************
//  Functions prototypes
//************************ 

void SCIPutChar(char ch);
void SCIprintString(char* charBuf);
void SCIprintStatus(void);
void SCIprintErrors(void);
void SCIprintFlags(void);
void SCIshowMenu(unsigned char input);
void SCIupAlevel(void);
void SCIassignation(float user_input);
void sciGetCellsData(int16 volt[][N_CELL], int temp[][N_CELL], int numer_mod);
void sciByteReception(unsigned char rcvByte);
void SCIprintStatData(int16 volt[][N_CELL], int temp[][N_CELL]);
void SCIprintInt(char *nom, int donnee);
void SCIprintIgnoreTemp(int ignoreTemp[][2]);
void SCIprintIDtable(uint8 table[]);




#endif //TERMINAL_CODE_H
