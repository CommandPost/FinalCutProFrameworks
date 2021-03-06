//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSButtonCell.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface FFRolloverButtonCell : NSButtonCell
{
    NSImage *_storedImage;
    NSImage *_rolloverImage;
}

@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)_updateMouseTracking;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;

@end

