//Program : Clock with RTC DS1307
//Author : MakerHero
 
//Load RTC DS1307's library
#include <DS1307.h>
 
//i2c ports in Arduino UNO 
DS1307 rtc(A4, A5);
 
void setup()
{
  //Turn the clock on
  rtc.halt(false);
   
  //The lines below set the date and time
  //uncomment them, use once and comment them again
  /*rtc.setDOW(WEDNESDAY);      //Define the day of week
  rtc.setTime(19, 47, 00);     //Define time
  rtc.setDate(3, 7, 2024);   //Define day, month, year*/
   
  /*//SQW/Out pin definition
  rtc.setSQWRate(SQW_RATE_1);
  rtc.enableSQW(true);*/
   
  Serial.begin(9600);
}
 
void loop()
{
  //Show info on Serial Monitor
  Serial.print("Hour (24h) : ");
  Serial.print(rtc.getTimeStr());
  Serial.print(" ");
  Serial.print("Date : ");
  Serial.print(rtc.getDateStr(FORMAT_SHORT));
  Serial.print(" ");
  Serial.println(rtc.getDOWStr(FORMAT_SHORT));
   
  //Wait 1s and do it all over
  delay (1000);
}