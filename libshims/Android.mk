LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES :=  \
	ui.cpp
LOCAL_SHARED_LIBRARIES := libui
LOCAL_C_INCLUDES += framework/native/include
LOCAL_MODULE := libmtk_ui
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)

include $(CLEAR_VARS)
LOCAL_SRC_FILES :=  \
	netutils.c
LOCAL_SHARED_LIBRARIES := liblog libcutils
LOCAL_C_INCLUDES += system/core/libnetutils/include
LOCAL_MODULE := libmtk_ifc
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)
