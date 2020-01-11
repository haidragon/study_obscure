LOCAL_PATH := $(call my-dir)
 
include $(CLEAR_VARS)

LOCAL_ARM_MODE := arm
LOCAL_MODULE    := test_ollvm
LOCAL_SRC_FILES := test.c
LOCAL_CFLAGS   := -mllvm -fla -mllvm -split -mllvm -split_num=3 -mllvm -sub -mllvm -sub_loop=3 -mllvm -bcf -mllvm -bcf_loop=3 -mllvm -sobf
include $(BUILD_EXECUTABLE) #include $(BUILD_SHARED_LIBRARY) 生成库
