//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKSlider.h"

@class NSString;

@interface PEAudioCleanupSlider : LKSlider
{
    NSString *_actionName;
    id _delegate;
}

- (void)mouseDown:(id)arg1;
@property(nonatomic) id <PEAudioCleanupSliderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;

@end

