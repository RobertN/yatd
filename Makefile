SOURCES := $(shell find src -iname '*.cpp' )
OBJECTS := $(SOURCES:.cpp=.o)
LFLAGS :=
CFLAGS := 

ifeq ($(DEBUG),YES)
	CFLAGS += -DDEBUG
endif

all:	yad

yad:	$(OBJECTS)
	g++ $(OBJECTS) $(LFLAGS) $(CFLAGS) -o yatd

.cpp.o:
	g++ $(CFLAGS) -c $^ -o $@

.PHONY: clean
clean:
	rm $(OBJECTS) yatd
