//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

@class FFCSDestinationPopoverIView, FFShareDestination;

__attribute__((visibility("hidden")))
@interface FFCSDestinationPopoverTView : NSView
{
    FFCSDestinationPopoverIView *_theaterButton;
    FFShareDestination *_destination;
}

@property(nonatomic) FFCSDestinationPopoverIView *theaterButton; // @synthesize theaterButton=_theaterButton;
@property(retain, nonatomic) FFShareDestination *destination; // @synthesize destination=_destination;
- (void)handleClick:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

