//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <LunaKit/LKDFRController.h>

@class NSTouchBarItem;

__attribute__((visibility("hidden")))
@interface FFAllProjectsDFRController : LKDFRController
{
    NSTouchBarItem *_projectButtonsBarItem;
}

- (id)_allProjectsModule;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (void)updateFunctionBarToSelection;
- (void)dealloc;
- (id)initWithAllProjectsModule:(id)arg1;

@end

