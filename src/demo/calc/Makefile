PRG=calc
ROMDATA=calc.romdata.c

BIN=$(PRG).bin
PFILE=$(PRG).p
LFILE=$(PRG).lst

SRC=$(PRG).asm 9600bps.inc

# INCDIR=../include
#ASM=asl -L -i $(INCDIR)
ASM=asl -L

P2BIN=p2bin

.SUFFIXES: .asm .p .bin .lst

all: $(PFILE) $(BIN) $(ROMDATA)

$(ROMDATA): $(BIN)
	./bin2c.pl $(BIN) > $(ROMDATA)

.asm.p:
	$(ASM) $<

.p.bin:
	$(P2BIN) $<

$(BIN): $(PFILE)

$(PFILE): $(SRC)

clean:
	rm $(BIN) $(PFILE) $(LFILE)
