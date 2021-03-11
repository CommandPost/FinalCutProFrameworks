//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Ozone/OZOSCObjectDelegate.h>

@class TXGlyphOSC;

@interface TXGlyphOSCObjectDelegate : OZOSCObjectDelegate
{
    TXGlyphOSC *_glyphOSC;
}

@property(nonatomic) TXGlyphOSC *glyphOSC; // @synthesize glyphOSC=_glyphOSC;
- (void)getLocalToParentBeforeScale:(PCMatrix44Tmpl_93ed1289 *)arg1 withFlattening:(BOOL)arg2;
- (PCVector3_457fd1f0)getPivotBeforeScale;
- (PCBox_dd92ab54)getLocalVolumeBeforeScale;
- (void)getLocalToWorldBeforeScale:(PCMatrix44Tmpl_93ed1289 *)arg1 withFlattening:(BOOL)arg2;
- (void)updateScale:(const PCVector3_457fd1f0 *)arg1 translate:(const PCVector3_457fd1f0 *)arg2 event:(id)arg3;
- (void)getLocalToParent:(PCMatrix44Tmpl_93ed1289 *)arg1 withFlattening:(BOOL)arg2;
- (PCRay3_bdf7da08)computeRay:(const PCVector3_457fd1f0 *)arg1 withFlattening:(BOOL)arg2;
- (void)setScale:(const PCVector3_457fd1f0 *)arg1;
- (void)setPosition:(const PCVector3_457fd1f0 *)arg1;
- (PCVector3_457fd1f0)getPosition;
- (PCVector3_457fd1f0)getPivot;
- (PCVector3_457fd1f0)getScale;
- (void)getLocalToWorld:(PCMatrix44Tmpl_93ed1289 *)arg1 withFlattening:(BOOL)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_93ed1289 *)arg1 textObject:(struct TXTextObject *)arg2;
- (void)getLocalToWorld:(PCMatrix44Tmpl_93ed1289 *)arg1;
- (PCBox_dd92ab54)getLocalVolume:(struct TXTextObject *)arg1;
- (PCBox_dd92ab54)getLocalVolume;
- (shared_ptr_a6fe21d1)focusedTextObject;

@end

