//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import <Flexo/NSPopoverDelegate-Protocol.h>

@class NSArray, NSPopover, NSString;

__attribute__((visibility("hidden")))
@interface FFShareCompatibilityViewController : NSViewController <NSPopoverDelegate>
{
    NSArray *_iconViews;
    NSArray *_labelViews;
    NSPopover *_hostingPopover;
    NSArray *_settings;
}

+ (id)sharedCompatibilityViewControllerWithSettings:(id)arg1;
+ (id)sharedCompatibilityViewControllerWithSetting:(id)arg1;
+ (id)sharedCompatibilityViewController;
@property(retain, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) NSArray *iconViews; // @synthesize iconViews=_iconViews;
@property(retain, nonatomic) NSArray *settings; // @synthesize settings=_settings;
- (void)close;
- (void)showRelativeToRect:(struct CGRect)arg1 ofView:(id)arg2 preferredEdge:(unsigned long long)arg3;
- (void)dealloc;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

