//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCell.h"

@class NSImage, OFProgressEntry, OZOpticalFlowProgressController;

@interface OFProgressCell : NSCell
{
    OZOpticalFlowProgressController *_controller;
    OFProgressEntry *_data;
    NSImage *_alertImage;
    NSImage *_dragHandleImage;
    NSImage *_pauseImage[2];
    NSImage *_resumeImage[2];
    struct CGRect _pauseResumeFrame;
    NSImage *_cancelImage[2];
    struct CGRect _cancelFrame;
    struct CGRect _trackedFrame;
    OFProgressEntry *_trackedData;
    unsigned int _imageState;
    unsigned int _trackedImage;
}

+ (BOOL)prefersTrackingUntilMouseUp;
- (void)abortTracking;
- (void)stopTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3 mouseIsUp:(BOOL)arg4;
- (BOOL)continueTracking:(struct CGPoint)arg1 at:(struct CGPoint)arg2 inView:(id)arg3;
- (BOOL)startTrackingAt:(struct CGPoint)arg1 inView:(id)arg2;
- (unsigned long long)hitTestForEvent:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3;
- (void)cancelAction:(id)arg1;
- (void)pauseResumeAction:(id)arg1;
- (void)getFromCellFrame:(struct CGRect)arg1 row1Frame:(struct CGRect *)arg2 andRow2Frame:(struct CGRect *)arg3 andRow3Frame:(struct CGRect *)arg4 andProgressFrame:(struct CGRect *)arg5 andPauseResumeFrame:(struct CGRect *)arg6 andCancelFrame:(struct CGRect *)arg7 andDragHandleFrame:(struct CGRect *)arg8;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)getRemainingStr;
- (void)setTrackedData:(id)arg1;
- (id)trackedData;
- (id)objectValue;
- (void)setObjectValue:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initOFProgressCell:(id)arg1;

@end

