#ifndef _ARLOGGER_H_
#define _ARLOGGER_H_

#ifdef __cplusplus
extern "C"
{
#endif
#include <bur/plctypes.h>

/*Public API*/
void ArPahoLoggerResetError();
char ArPahoLoggerGetError();
unsigned long ArPahoLoggerGetErrorCounter();
unsigned long ArPahoLoggerInit();

_BUR_PUBLIC void ArPahoLogError(const char *format, ...);
_BUR_PUBLIC void ArPahoLogWarning(const char *format, ...);
_BUR_PUBLIC void ArPahoLogInfo(const char *format, ...);
_BUR_PUBLIC void ArPahoLogSuccess(const char *format, ...);

/*Internal functions*/
void ArPahoLoggerSetLogLevel(unsigned char Level);
void ArPahoLoggerSuccess(const char *logtext);
void ArPahoLoggerInfo(const char *logtext);
void ArPahoLoggerWarning(const char *logtext);
void ArPahoLoggerError(const char *logtext);

#ifdef __cplusplus
}
#endif

#endif
