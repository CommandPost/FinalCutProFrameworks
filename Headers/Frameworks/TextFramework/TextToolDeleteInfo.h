//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class OZViewer;

@interface TextToolDeleteInfo : NSObject
{
    struct OZRenderManager *_renderManager;
    OZViewer *_viewer;
    unsigned int _textID;
}

- (void)dealloc;
- (void)delayedDelete;

@end

