//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FFApplication.h"

@class SPODDetector;

@interface PEApplication : FFApplication
{
    SPODDetector *m_spodDetector;
}

- (BOOL)hideTitlebarWhenFullScreen;
- (void)miniaturizeAll:(id)arg1;
- (void)dealloc;
- (void)finishLaunching;
- (void)reportException:(id)arg1;
- (BOOL)useOverlayScrollers;
- (void)_reportExceptionToUser:(id)arg1;

@end

