That library is intended for STM32, for RTC(Real time clock).
That library include main functions to rule the sustem of RTC: get,set time and also will allow users to get all the time parameters. 
Below you can see installation instructions and basic functions of that library. 

Installation Instrauction
1)At first you should to create a new STM32 project, I think you can do this
2)Then you need to configurate System Core and to choose "Crystal/Ceramic Resonator" in both points, the timing settings. Also and establish maximum frequency of STM32
3)And now we need to turn of our RTC on STM32. We need to go the points "Timers" and choose the first point - RTC and put a check mark in the parameter "Active Clock Source". Thats all, our system is ready to start
4)In this repository you cand find two files with extensions C and H, you need to download them
5)When you finished the fourth point then includes these files in your project. File with extensions С in folder Src and file h in folder Inc. And finally you should to inckude this library in code. You can see this in the screenshots below.
![image](https://github.com/DanilaProgrammist/RTC_STM32_Lib/assets/69789792/b7efeaa8-9429-44b8-8655-4cc7c590b538)
![image](https://github.com/DanilaProgrammist/RTC_STM32_Lib/assets/69789792/44689fdf-862f-4c48-8f1b-b17dc357b9a2)





