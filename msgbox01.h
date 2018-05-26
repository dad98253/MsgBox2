/*
 * msgbox01.h
 *
 *  Created on: May 25, 2018
 *      Author: dad
 */

#ifndef MSGBOX01_H_
#define MSGBOX01_H_

#ifdef WINDOZE
#include <windows.h>
#else
#include "lindows.h"
#endif
#include "tutlib.h"

#define MIN(x, y) (((x) > (y)) ? (y) : (x))

extern bool bTextMode;

extern char * lpszMsgBoxBanner;
extern HANDLE hWnd;



#define SYSLOGMESSAGE	0x01000000L
// SYSLOGMESSAGE is set greater than the largest (documented) windows messagebox option


#endif /* MSGBOX01_H_ */
