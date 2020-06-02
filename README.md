# LCD1202-SPI-9Bit-
Example how to make settings for 9 bit SPI (STM32F0... series MCU).
Please be careefool the DS  field in the SPI->CR2 can not be less then 0b011 (3) and you can not firstly 
drop down all bits in this fiels, and then fill up it. 
Because if value will be less than 3 field stay equal 7 (0b111) (start (reset) value) 
