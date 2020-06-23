#SUBDIRS	= m68xx h6301 h6303 m6805 m6811
SUBDIRS	= m68xx h6303

all clean default depend realclean:
	for f in $(SUBDIRS); do cd $$f; $(MAKE) $@; cd ..; done
