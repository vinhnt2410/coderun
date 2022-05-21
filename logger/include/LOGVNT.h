#ifndef __LOGVNT_HEADER__
#define __LOGVNT_HEADER__
#include <time.h>

// #define LOGVNT_ENABLE
#ifndef LOGVNT_ENABLE

#define LOGVNT_F __FILE__, __LINE__, __func__
#define LOGVNT_T(tvnt) tvnt->tm_hour, tvnt->tm_min, tvnt->tm_sec
#define LOGVNINFO(tvnt) LOGVNT_T(tvnt), LOGVNT_F
static time_t svnt;
static struct tm* cvnt;
#define LOGVNT(msg) 			\
svnt = time(NULL); 			\
cvnt = localtime(&svnt); 	\
printf("[%02d:%02d:%02d][%s:%d], %s - %s\n", LOGVNTINFO(cvnt), msg);
#else // DISABLE LOGVNT
#define LOGVNT(...)
#endif


#endif//__LOGVNT_HEADER__