FILE = led

PROGRAMMER = usbasp
DEVICE = atmega328p
BAUD = 9600

default: compile upload clean

compile:
	avr-gcc -Wall -Os -mmcu=$(DEVICE) -c ./$(FILE).c -o ./build/$(FILE).o
	avr-gcc -Wall -Os -mmcu=$(DEVICE) ./build/$(FILE).o -o ./build/$(FILE).elf
	avr-objcopy -j .data -j .text -O ihex ./build/$(FILE).elf ./build/$(FILE).hex

upload:
	avrdude -c $(PROGRAMMER) -p $(DEVICE) -b $(BAUD)\
		-V -U lfuse:w:0xf2:m -U hfuse:w:0xd6:m -U flash:w:./build/$(FILE).hex:i

clean:
	rm ./build/*
