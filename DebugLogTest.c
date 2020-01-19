#include "DebugLog.h"

int main(int argc, char const *argv[])
{
	FILE * fp;
	char hello[16] = "hello world!";
	char str[128];

	fp = fopen ("debug.log", "w+");
	
	LOG_I("LOG_I %s %d\n", hello, 128);
	LOG_E("LOG_E %s %d\n", hello, 128);
	LOG_W("LOG_W %s %d\n", hello, 128);

	FLOG_I(fp,"FLOG_I %s %d\n", hello, 128);
	FLOG_E(fp,"FLOG_I %s %d\n", hello, 128);
	FLOG_W(fp,"FLOG_I %s %d\n", hello, 128);

	SLOG_I(str,"SLOG_I %s %d.", hello, 128);
	LOG_P("%s\n",str);
	SLOG_E(str,"SLOG_E %s %d.", hello, 128);
	LOG_P("%s\n",str);
	SLOG_W(str,"SLOG_W %s %d.", hello, 128);
	LOG_P("%s\n",str);

	LOG_L(1,"LOG_L 1 %s %d\n", hello, 128);
	LOG_L(2,"LOG_L 2 %s %d\n", hello, 128);
	LOG_L(4,"LOG_L 4 %s %d\n", hello, 128);
	return 0;
}