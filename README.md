# AT8236_Motor_Driver_Module
使用stm32 NUCLEO-F446RE微處理器，搭配AT8236_Motor_Driver_Module去控制直流馬達

# Pin connection

| stm32 | AT8236 | Motor&Encoder |description|
| ----- | ------ | ----- | ----------------- |
| D5 | E1A | | encoder phase A |
| D6 | E1B | | encoder phase B |
| 5v | 5v | |
| GND | GND | |
| A1 | AN1 | | pwm正轉 |
| A0 | AN2 | | pwm反轉 |
| | AO1 | M+ | 
| | AO2 | M- |
| | 3.3v | 5v |
| | GND | GND |
| | E1A | A | encoder phase A |
| | E1B | B | encoder phase B |

# note
- 下載QEI函式庫後，要去修改QEI裡面的程式如QEI.cpp，否則編譯會出錯
