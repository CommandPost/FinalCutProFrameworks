//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSView;

__attribute__((visibility("hidden")))
@interface FFViewMaskPair : NSObject
{
    NSView *_view;
    unsigned long long _autoresizingMask;
}

@property unsigned long long autoresizingMask; // @synthesize autoresizingMask=_autoresizingMask;
@property(retain) NSView *view; // @synthesize view=_view;
- (void)restoreAutoresizingMask;
- (void)dealloc;
- (id)initWithView:(id)arg1;

@end

