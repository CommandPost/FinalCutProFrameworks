//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSegmentedCell.h"

@class NSImage, OZToolbarModule;

@interface OZTimeDurationSwitchCell : LKSegmentedCell
{
    NSImage *_currentTimeStateImage;
    NSImage *_durationStateImage;
    OZToolbarModule *_toolbarModule;
}

@property(nonatomic) OZToolbarModule *toolbarModule; // @synthesize toolbarModule=_toolbarModule;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (struct CGSize)cellSizeForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)initializeStateImages;

@end

