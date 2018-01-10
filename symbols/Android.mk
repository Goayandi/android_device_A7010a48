LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)
LOCAL_SRC_FILES := gui.cpp
LOCAL_SHARED_LIBRARIES := libui libgui
LOCAL_C_INCLUDES := frameworks/native/include
LOCAL_MODULE := libmtkshim_gui
LOCAL_MODULE_TAGS := optional
LOCAL_PROPRIETARY_MODULE := true
include $(BUILD_SHARED_LIBRARY)
