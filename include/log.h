#ifndef _log_h_
#define _log_h_

#define LOG_ALL			0
#define LOG_DEBUG		1
#define LOG_WARNING		2
#define LOG_INFO		3
#define LOG_ERROR		4
#define LOG_DISABLE		9

int log_getlevel();
void log_setlevel(int level);

const char* log_getfile();
void log_setfile(const char* file);

void log_debug(const char* format, ...);
void log_warning(const char* format, ...);
void log_info(const char* format, ...);
void log_error(const char* format, ...);
void log_log(int level, const char* format, ...);

void log_flush();

#endif /* !_log_h_ */
