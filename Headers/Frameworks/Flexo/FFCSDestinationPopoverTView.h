//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class FFCSDestinationPopoverIView, FFShareDestination;

__attribute__((visibility("hidden")))
@interface FFCSDestinationPopoverTView : NSProView
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
