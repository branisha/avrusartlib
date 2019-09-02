AR=avr-ar
ARFLAGS=rcs
# without prefix and .a
LIBNAME=usart
SRC=$(wildcard *.c)
OBJ=$(SRC:.c=.o)
CC=avr-gcc
MCU_TARGET=atmega328p
CFLAGS=-Os -mmcu=$(MCU_TARGET) -Wall
LFLAGS= -I.

all: $(OBJ)
	$(AR) $(ARFLAGS) lib$(LIBNAME).a $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf $(OBJ)
	rm -rf lib$(LIBNAME).a

	