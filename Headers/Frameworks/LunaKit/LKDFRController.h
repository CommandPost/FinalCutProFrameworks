//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSTouchBarDelegate.h"

@class LKViewModule<NSTouchBarProvider>, NSArray, NSString, NSTouchBar;

@interface LKDFRController : NSObject <NSTouchBarDelegate>
{
    NSTouchBar *_functionBar;
    LKViewModule<NSTouchBarProvider> *_module;
    NSArray *_savIdentifiers;
}

@property __weak LKViewModule<NSTouchBarProvider> *module; // @synthesize module=_module;
- (id)touchBar:(id)arg1 makeItemForIdentifier:(id)arg2;
- (id)makeTouchBar;
- (id)touchBar;
- (void)timecodeDisplayDidEndNumericEntry:(id)arg1;
- (void)timecodeDisplayWillBeginNumericEntry:(id)arg1;
- (void)endObservingTimecodeDisplay;
- (void)beginObservingTimecodeDisplay;
- (void)playerDidEnterFullScreen:(id)arg1;
- (void)endObservingEnterFullScreen;
- (void)beginObservingEnterFullScreen;
- (id)targetForIdentifier:(id)arg1;
- (SEL)selectorForIdentifier:(id)arg1;
- (id)accessibilityTitleForIdentifier:(id)arg1;
- (id)displayNameForIdentifier:(id)arg1;
- (id)imageForIdentifier:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
