PNAME=assign1group28
PORT=/dev/ttyUSB0
MCU=atmega328
COMPILER=avr-gcc

compile:
	${COMPILER} -Wall -Os -DF_CPU=16000000UL -mmcu=$(MCU) -o ${PNAME}.elf ${PNAME}.c
	avr-objcopy -O ihex -R .eeprom ${PNAME}.elf ${PNAME}.hex

program:
	sudo avrdude -F -D -V -c arduino -p ATMEGA3290 -P ${PORT} -b 57600 -U flash:w:${PNAME}.hex

clean:
	rm ${PNAME}.hex ${PNAME}.elf