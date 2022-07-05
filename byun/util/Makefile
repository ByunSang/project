CFLAGS = -O2 -g -Wall

LIB_UTIL = util.a

LIB_UTIL_SRCS = sncatprintf.c util_string.c

LIB_UTIL_OBJS = $(LIB_UTIL_SRCS:%.c=%.o)

all : $(LIB_UTIL)

$(LIB_UTIL) : $(LIB_UTIL_OBJS)
		ar rcv $@ $(LIB_UTIL_OBJS)

clean : 

	rm -rf $(LIB_UTIL) $(LIB_UTIL_OBJS) 
