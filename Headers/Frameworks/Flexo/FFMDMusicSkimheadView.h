//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface FFMDMusicSkimheadView : NSView
{
    NSImage *_skimheadImage;
}

@property(retain, nonatomic) NSImage *skimheadImage; // @synthesize skimheadImage=_skimheadImage;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

