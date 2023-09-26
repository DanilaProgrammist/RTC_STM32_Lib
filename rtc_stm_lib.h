/*
 * rtc_stm_lib.h
 *
 *  Created on: 25 сент. 2023 г.
 *      Author: User
 */

#ifndef INC_RTC_STM_LIB_H_
#define INC_RTC_STM_LIB_H_
#include <main.h>
char* weekDays[7] = {(uint8_t*)"Monday",(uint8_t*)"Tuesday",(uint8_t*)"Wednesday",(uint8_t*)"Thursday",(uint8_t*)"Friday",(uint8_t*)"Saturday",(uint8_t*)"Sunday"};
void RTC_Init(void);
void setTime(int hours, int minutes, int seconds);
void setData(int Year, int Month, int Day, int weekDay);
void setHMSDMY(int8_t hours, int8_t minutes, int8_t seconds, int8_t date, int8_t month, int16_t year, int8_t weekDay);
int getYear(void);
int getMonth(void);
int getDay(void);
int getWeekNum(void);
char* getWeekDay(void);
int getHours(void);
int getMinutes(void);
int getSeconds(void);


#endif /* INC_RTC_STM_LIB_H_ */

