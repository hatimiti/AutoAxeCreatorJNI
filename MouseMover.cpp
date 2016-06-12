//
//  MouseMover.cpp
//  AutoAxeCreatorJNI
//
//  Created by hatimiti on 2016/06/09.
//  Copyright © 2016年 hatimiti All rights reserved.
//

#include <stdio.h>
#include <JavaVM/jni.h>
#include <ApplicationServices/ApplicationServices.h>

#include "HelloJNI.h"

JNIEXPORT void JNICALL Java_HelloJNI_hello (JNIEnv *env, jobject obj) {
    ProcessSerialNumber psn;
    
//    if (GetProcessForPID(1172, &psn) != noErr) {
//        printf("Unable to get front process\n");
//        return;
//    }
    
    CGPoint point = CGPointMake(100.0f, 100.0f);
    CGEventRef event = CGEventCreateMouseEvent(NULL, kCGEventMouseMoved, point, kCGMouseButtonLeft);
    CGEventPost(kCGHIDEventTap, event);
//    CGEventPostToPSN(&psn, event);
    CFRelease(event);
    printf("Hello World!\n");
}
