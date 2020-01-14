#ifndef DEBUGLOG_H
#define DEBUGLOG_H

#include <stdio.h>

#define LOGLEVEL0	0x00
#define LOGLEVEL1	0x01
#define LOGLEVEL2	0x02
#define LOGLEVEL3	0x04
#define LOGLEVEL4	0x08
#define LOGLEVEL5	0x10
#define LOGLEVEL6	0x20
#define LOGLEVEL7	0x40
#define LOGLEVEL8	0x80
#define LOGLEVELALL	0xFF

//#define LOGLEVEL LOGLEVELALL

#define LOG_I(format,...)	printf ("\033[37m[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)//infomation
#define LOG_W(format,...)	printf ("\033[33m[%s:%d] W: "format, __FILE__, __LINE__, ##__VA_ARGS__)//warning
#define LOG_E(format,...)	printf ("\033[31m[%s:%d] E: "format, __FILE__, __LINE__, ##__VA_ARGS__)//error

#define FLOG_I(file,format,...)	fprintf(file,"[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)//infomation
#define FLOG_W(file,format,...)	fprintf(file,"[%s:%d] W: "format, __FILE__, __LINE__, ##__VA_ARGS__)//warning
#define FLOG_E(file,format,...)	fprintf(file,"[%s:%d] E: "format, __FILE__, __LINE__, ##__VA_ARGS__)//error

#define SLOG_I(str,format,...)	sprintf(str,"[%s:%d] "forma, __FILE__, __LINE__, ##__VA_ARGS__)//infomation
#define SLOG_W(str,format,...)	sprintf(str,"[%s:%d] W: "format, __FILE__, __LINE__, ##__VA_ARGS__)//warning
#define SLOG_E(str,format,...)	sprintf(str,"[%s:%d] E: "format, __FILE__, __LINE__, ##__VA_ARGS__)//error

#ifndef LOGLEVEL

#pragma message("undefine LOGLEVEL")

#define LOG_L(level,format,...)			printf ("\033[37m[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)
#define FLOG_L(level,file,format,...)	fprintf(file,"[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)
#define SLOG_L(level,str,format,...)	sprintf(str,"[%s:%d] "forma, __FILE__, __LINE__, ##__VA_ARGS__)

#else

#define LOG_L(level,format,...)	if(level & LOGLEVEL)printf ("\033[37m[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)
#define FLOG_L(level,file,format,...)	if(level & LOGLEVEL)fprintf(file,"[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)
#define SLOG_L(level,str,format,...)	if(level & LOGLEVEL)sprintf(str,"[%s:%d] "format, __FILE__, __LINE__, ##__VA_ARGS__)

#endif

#endif
