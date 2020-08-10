CC = gcc
CFLAGS = -std=c11 -pedantic -Wall -Wextra -Werror
LOTTK_SRC = main.c
LOTTK = LotTK
ifeq ($(OS),Windows_NT)	
	LOTTK = LotTK.exe
	RM = del
endif
.PHONY: all clean tar

all: $(LOTTK)
	@echo Built target $(LOTTK)

$(LOTTK): $(LOTTK_SRC)
	$(CC) $(CFLAGS) -o $(LOTTK) $(LOTTK_SRC)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) *.o *.a *~ $(LOTTK)

tar:
	tar -cf LotTK.tar $(LOTTK_SRC) Makefile