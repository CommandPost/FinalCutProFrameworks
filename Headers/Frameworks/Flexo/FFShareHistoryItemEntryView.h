//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSProView.h"

@class LKButton, LKTextField, NSDictionary;

__attribute__((visibility("hidden")))
@interface FFShareHistoryItemEntryView : NSProView
{
    LKTextField *_shareInfo;
    LKButton *_revealButton;
    NSDictionary *_sharedItem;
}

@property(retain) LKButton *revealButton; // @synthesize revealButton=_revealButton;
@property(retain) LKTextField *shareInfo; // @synthesize shareInfo=_shareInfo;
@property(retain, nonatomic) NSDictionary *sharedItem; // @synthesize sharedItem=_sharedItem;
- (void)show:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
