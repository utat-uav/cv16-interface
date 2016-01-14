#############################################################################
# Makefile for building: CVInterface
# Generated by qmake (3.0) (Qt 5.4.0)
# Project:  CVInterface.pro
# Template: app
# Command: D:/Programs/Qt/5.4/mingw491_32/bin/qmake.exe -spec win32-g++ -o Makefile CVInterface.pro
#############################################################################

MAKEFILE      = Makefile

first: release
install: release-install
uninstall: release-uninstall
QMAKE         = D:/Programs/Qt/5.4/mingw491_32/bin/qmake.exe
DEL_FILE      = rm -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p
COPY          = cp -f
COPY_FILE     = cp -f
COPY_DIR      = cp -f -R
INSTALL_FILE  = cp -f
INSTALL_PROGRAM = cp -f
INSTALL_DIR   = $(COPY_DIR)
DEL_FILE      = rm -f
SYMLINK       = 
DEL_DIR       = rmdir
MOVE          = mv -f
SUBTARGETS    =  \
		release \
		debug


release: FORCE
	$(MAKE) -f $(MAKEFILE).Release
release-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Release 
release-all: FORCE
	$(MAKE) -f $(MAKEFILE).Release all
release-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Release clean
release-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Release distclean
release-install: FORCE
	$(MAKE) -f $(MAKEFILE).Release install
release-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Release uninstall
debug: FORCE
	$(MAKE) -f $(MAKEFILE).Debug
debug-make_first: FORCE
	$(MAKE) -f $(MAKEFILE).Debug 
debug-all: FORCE
	$(MAKE) -f $(MAKEFILE).Debug all
debug-clean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug clean
debug-distclean: FORCE
	$(MAKE) -f $(MAKEFILE).Debug distclean
debug-install: FORCE
	$(MAKE) -f $(MAKEFILE).Debug install
debug-uninstall: FORCE
	$(MAKE) -f $(MAKEFILE).Debug uninstall

Makefile: CVInterface.pro ../../../Programs/Qt/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf ../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/spec_pre.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/qdevice.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/device_config.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/common/shell-unix.conf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/qconfig.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bootstrap_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_clucene_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_core.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_core_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designer.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designer_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designercomponents_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_gui.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_gui_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_help.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_help_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_location.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_location_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_network.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_network_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_platformsupport_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qml.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qml_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmldevtools_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quick.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quick_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickparticles_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_script.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_script_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sql.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sql_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_svg.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_svg_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webview.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webview_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xml.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xml_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt_functions.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt_config.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/qt_config.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/spec_post.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exclusive_builds.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/default_pre.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/default_pre.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/resolve_config.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exclusive_builds_post.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/default_post.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/rtti.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/precompile_header.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/warn_on.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/resources.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/moc.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/opengl.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/uic.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/windows.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/testcase_targets.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exceptions.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/yacc.prf \
		../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/lex.prf \
		CVInterface.pro \
		D:/Programs/Qt/5.4/mingw491_32/lib/qtmain.prl \
		D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Core.prl \
		D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Widgets.prl \
		D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Gui.prl
	$(QMAKE) -spec win32-g++ -o Makefile CVInterface.pro
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/spec_pre.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/qdevice.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/device_config.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/common/shell-unix.conf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/qconfig.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axbase_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axcontainer_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_axserver_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bluetooth_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_bootstrap_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_clucene_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_concurrent_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_core.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_core_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_declarative_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designer.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designer_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_designercomponents_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_enginio_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_gui.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_gui_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_help.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_help_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_location.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_location_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimedia_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_multimediawidgets_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_network.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_network_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_nfc_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_opengl_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_openglextensions_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_platformsupport_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_positioning_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_printsupport_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qml.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qml_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmldevtools_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qmltest_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_qtmultimediaquicktools_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quick.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quick_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickparticles_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_quickwidgets_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_script.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_script_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_scripttools_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sensors_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_serialport_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sql.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_sql_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_svg.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_svg_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_testlib_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_uitools_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webchannel_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkit_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webkitwidgets_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_websockets_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webview.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_webview_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_widgets_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_winextras_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xml.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xml_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/modules/qt_lib_xmlpatterns_private.pri:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt_functions.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt_config.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/qt_config.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/win32-g++/qmake.conf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/spec_post.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exclusive_builds.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/default_pre.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/default_pre.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/resolve_config.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exclusive_builds_post.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/default_post.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/rtti.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/precompile_header.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/warn_on.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/qt.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/resources.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/moc.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/opengl.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/uic.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/win32/windows.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/testcase_targets.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/exceptions.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/yacc.prf:
../../../Programs/Qt/5.4/mingw491_32/mkspecs/features/lex.prf:
CVInterface.pro:
D:/Programs/Qt/5.4/mingw491_32/lib/qtmain.prl:
D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Core.prl:
D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Widgets.prl:
D:/Programs/Qt/5.4/mingw491_32/lib/Qt5Gui.prl:
qmake: FORCE
	@$(QMAKE) -spec win32-g++ -o Makefile CVInterface.pro

qmake_all: FORCE

make_first: release-make_first debug-make_first FORCE
all: release-all debug-all FORCE
clean: release-clean debug-clean FORCE
distclean: release-distclean debug-distclean FORCE
	-$(DEL_FILE) Makefile

release-mocclean:
	$(MAKE) -f $(MAKEFILE).Release mocclean
debug-mocclean:
	$(MAKE) -f $(MAKEFILE).Debug mocclean
mocclean: release-mocclean debug-mocclean

release-mocables:
	$(MAKE) -f $(MAKEFILE).Release mocables
debug-mocables:
	$(MAKE) -f $(MAKEFILE).Debug mocables
mocables: release-mocables debug-mocables

check: first
FORCE:

$(MAKEFILE).Release: Makefile
$(MAKEFILE).Debug: Makefile
