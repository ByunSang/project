SUBDIRS = util

all:
	@for dir in $(SUBDIRS); do \
		make -C $$dir all; \
		if [ $$? != 0 ]; then exit 1; fi; \
	done

clean:
	@for dir in $(SUBDIRS); do \
		make -C $$dir clean; \
		if [ $$? != 0 ]; then exit 1; fi; \
	done
