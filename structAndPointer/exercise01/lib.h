
typedef struct                                      // defind an new data type: Time
{
    uint8_t hour;
    uint8_t minute;
    uint8_t second;
}Time;

void inputTime(Time *t);                            // enter your time as form hh:mm:ss
uint32_t time2Second(Time t);                       // convert your time to second
Time second2Time(uint32_t second);                  // convert second to time
void differentTime(Time t1, Time t2, Time *t3);     // calculate the different time
void show(uint8_t t);                               // display number just only one letter
void showTime(Time t);                              // display your time as form hh:mm:ss