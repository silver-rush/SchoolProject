

CC            = gcc
CXX           = g++
DEFINES       = -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/local/software/qt-4.8.6/mkspecs/linux-g++-64 -I. -I/usr/local/software/qt-4.8.6/include/QtCore -I/usr/local/software/qt-4.8.6/include/QtGui -I/usr/local/software/qt-4.8.6/include -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1 -Wl,-rpath,/usr/local/software/qt-4.8.6/lib
LIBS          = $(SUBLIBS)  -L/usr/local/software/qt-4.8.6/lib -lQtGui -Wl,-rpath,/usr/local/software/qt4/lib -L/usr/local/software/qt4/lib -L/usr/X11R6/lib64 -Wl,-rpath,/usr/local/software/qt4/lib -Wl,-rpath,/usr/local/software/qt4/lib -lQtCore -Wl,-rpath,/usr/local/software/qt4/lib -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/local/software/qt4/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = board.cpp \
		main.cpp \
		main_window.cpp moc_board.cpp \
		moc_main_window.cpp
OBJECTS       = board.o \
		main.o \
		main_window.o \
		moc_board.o \
		moc_main_window.o
DIST          = /usr/local/software/qt-4.8.6/mkspecs/common/unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/linux.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base-unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/g++-base.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/g++-unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/qconfig.pri \
		/usr/local/software/qt-4.8.6/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt_functions.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt_config.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/exclusive_builds.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/default_pre.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/release.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/default_post.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/shared.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/warn_on.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/unix/thread.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/moc.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/resources.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/uic.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/yacc.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/lex.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/include_source_dir.prf \
		patterns.pro
QMAKE_TARGET  = patterns
DESTDIR       = 
TARGET        = patterns

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: brute fast Makefile $(TARGET)

brute: brute_main.o
	g++ -o $@ $^
fast: fast_main.o
	g++ -o $@ $^

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: patterns.pro  /usr/local/software/qt-4.8.6/mkspecs/linux-g++-64/qmake.conf /usr/local/software/qt-4.8.6/mkspecs/common/unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/linux.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base-unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/g++-base.conf \
		/usr/local/software/qt-4.8.6/mkspecs/common/g++-unix.conf \
		/usr/local/software/qt-4.8.6/mkspecs/qconfig.pri \
		/usr/local/software/qt-4.8.6/mkspecs/modules/qt_webkit_version.pri \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt_functions.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt_config.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/exclusive_builds.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/default_pre.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/release.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/default_post.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/shared.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/warn_on.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/qt.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/unix/thread.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/moc.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/resources.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/uic.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/yacc.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/lex.prf \
		/usr/local/software/qt-4.8.6/mkspecs/features/include_source_dir.prf \
		/usr/local/software/qt-4.8.6/lib/libQtGui.prl \
		/usr/local/software/qt-4.8.6/lib/libQtCore.prl
	$(QMAKE) -o Makefile patterns.pro
/usr/local/software/qt-4.8.6/mkspecs/common/unix.conf:
/usr/local/software/qt-4.8.6/mkspecs/common/linux.conf:
/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base.conf:
/usr/local/software/qt-4.8.6/mkspecs/common/gcc-base-unix.conf:
/usr/local/software/qt-4.8.6/mkspecs/common/g++-base.conf:
/usr/local/software/qt-4.8.6/mkspecs/common/g++-unix.conf:
/usr/local/software/qt-4.8.6/mkspecs/qconfig.pri:
/usr/local/software/qt-4.8.6/mkspecs/modules/qt_webkit_version.pri:
/usr/local/software/qt-4.8.6/mkspecs/features/qt_functions.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/qt_config.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/exclusive_builds.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/default_pre.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/release.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/default_post.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/shared.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/warn_on.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/qt.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/unix/thread.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/moc.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/resources.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/uic.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/yacc.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/lex.prf:
/usr/local/software/qt-4.8.6/mkspecs/features/include_source_dir.prf:
/usr/local/software/qt-4.8.6/lib/libQtGui.prl:
/usr/local/software/qt-4.8.6/lib/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile patterns.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/patterns1.0.0 || $(MKDIR) .tmp/patterns1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/patterns1.0.0/ && $(COPY_FILE) --parents board.h brute.h fast.h main_window.h point.h point_plotter.h .tmp/patterns1.0.0/ && $(COPY_FILE) --parents board.cpp main.cpp main_window.cpp .tmp/patterns1.0.0/ && (cd `dirname .tmp/patterns1.0.0` && $(TAR) patterns1.0.0.tar patterns1.0.0 && $(COMPRESS) patterns1.0.0.tar) && $(MOVE) `dirname .tmp/patterns1.0.0`/patterns1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/patterns1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_board.cpp moc_main_window.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_board.cpp moc_main_window.cpp
moc_board.cpp: point.h \
		point_plotter.h \
		brute.h \
		fast.h \
		board.h
	/usr/local/software/qt-4.8.6/bin/moc $(DEFINES) $(INCPATH) board.h -o moc_board.cpp

moc_main_window.cpp: board.h \
		point.h \
		point_plotter.h \
		brute.h \
		fast.h \
		main_window.h
	/usr/local/software/qt-4.8.6/bin/moc $(DEFINES) $(INCPATH) main_window.h -o moc_main_window.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

board.o: board.cpp board.h \
		point.h \
		point_plotter.h \
		brute.h \
		fast.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o board.o board.cpp

main.o: main.cpp main_window.h \
		board.h \
		point.h \
		point_plotter.h \
		brute.h \
		fast.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

main_window.o: main_window.cpp main_window.h \
		board.h \
		point.h \
		point_plotter.h \
		brute.h \
		fast.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main_window.o main_window.cpp

moc_board.o: moc_board.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_board.o moc_board.cpp

moc_main_window.o: moc_main_window.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_main_window.o moc_main_window.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

