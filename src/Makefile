TARGET=target


LIB_UTIL_DIR = ../util
LIB_UTIL 	= $(LIB_UTIL_DIR)/util.a

LDPLAGS += $(LIB_UTIL)

TARGET_SRCS = test.c

MAIN_OBJS = $(TARGET_SRCS:%.c=%.o)

CFLAGS = -Wall -Werror -O2 -I$(LIB_UTIL_DIR) 


all : $(TARGET)

$(TARGET) : $(MAIN_OBJS) 
	gcc -o $@ $(MAIN_OBJS) $(LIB_UTIL) 
clean:
	rm -rf $(TARGET) $(MAIN_OBJS)
