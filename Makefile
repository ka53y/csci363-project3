#----------------------------------------------------------------------------
#       NMAKE Workspace
#
# 
#
# This file was generated by MPC.  Any changes made directly to
# this file will be lost the next time it is generated.
#
# MPC Command:
# .\MPC-master\mwc.pl -type nmake .\assignment2-composition\csci36300-fall2021-composition\
#
#----------------------------------------------------------------------------

!IF "$(CFG)" == ""
CFG=Win32 Debug
!MESSAGE No configuration specified. Defaulting to Win32 Debug.
!ENDIF

!IF "$(CUSTOM_TARGETS)" == ""
CUSTOM_TARGETS=_EMPTY_TARGET_
!ENDIF

all: assignment2

depend: assignment2-depend

clean generated realclean $(CUSTOM_TARGETS):
	@echo Project: Makefile.assignment2.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.assignment2.mak CFG="$(CFG)" $(@)

assignment2:
	@echo Project: Makefile.assignment2.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.assignment2.mak CFG="$(CFG)" all

assignment2-depend:
	@echo Project: Makefile.assignment2.mak
	$(MAKE) /$(MAKEFLAGS) /f Makefile.assignment2.mak CFG="$(CFG)" depend

project_name_list:
	@echo assignment2
