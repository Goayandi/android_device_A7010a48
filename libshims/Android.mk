LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES :=  \
	ui.cpp
LOCAL_SHARED_LIBRARIES := libui
LOCAL_C_INCLUDES += framework/native/include
LOCAL_MODULE := libmtk_ui
LOCAL_MODULE_TAGS := optional
include $(BUILD_SHARED_LIBRARY)
