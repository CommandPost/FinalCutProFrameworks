//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSButtonCell.h"

@class NSImage;

__attribute__((visibility("hidden")))
@interface FFRolloverButtonCell : NSButtonCell
{
    NSImage *_storedImage;
    NSImage *_rolloverImage;
}

- (void)mouseEntered:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)_updateMouseTracking;
@property(retain, nonatomic) NSImage *rolloverImage; // @synthesize rolloverImage=_rolloverImage;
- (void)dealloc;

@end
