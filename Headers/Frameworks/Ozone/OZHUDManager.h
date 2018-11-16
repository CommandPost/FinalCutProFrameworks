//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSWindowDelegate.h"
#import "OZObjCObserver.h"

@class HUDListEntry, NSTimer;

@interface OZHUDManager : NSObject <OZObjCObserver, NSWindowDelegate>
{
    HUDListEntry *_pHUDEntry;
    HUDListEntry *_pFadeOutHUDEntry;
    NSTimer *_pFadeOutTimer;
    struct timeval _lastFadeOutTime;
    int _suppressCount;
    struct OZDocument *_pDocument;
    list_909ba1c0 *_pObjectIDs;
    struct OZToolOptionsHUDComponent *_pCurrOptionsHUDComponent;
}

+ (id)instance;
+ (void)initialize;
+ (double)horizontalMargin;
+ (double)topMargin;
+ (double)bottomMargin;
- (id)init;
- (void)dealloc;
- (void)awakeFromNib;
- (BOOL)isHUDDisplayedForObject:(struct OZObjectManipulator *)arg1;
- (BOOL)objectHasHUD:(struct OZObjectManipulator *)arg1;
- (id)objectList;
- (void)showHUDForObject:(id)arg1;
- (void)doHUDMenu:(id)arg1 view:(id)arg2;
- (void)buildHUDMenu:(id)arg1;
- (void)removeHUD;
- (void)toggleHUD:(id)arg1;
- (void)suppressHUD;
- (void)unsuppressHUD;
- (void)cycleHUDsForward;
- (void)cycleHUDsBackward;
- (void)documentChanged:(id)arg1;
- (void)screenChanged:(id)arg1;
- (struct OZScene *)scene;
- (BOOL)isSceneEffectivelyEmpty;
- (BOOL)isHUDDisplayed;
- (void)setIsHUDDisplayed:(BOOL)arg1;
- (id)initHUDWithController:(id)arg1 andTransformController:(id)arg2;
- (void)orderEntryOut:(id)arg1;
- (double)getSeconds:(struct timeval *)arg1;
- (void)fadeInHUD;
- (void)fadeOutCB;
- (void)fadeOutHUD;
- (void)saveWindowFrame:(id)arg1;
- (void)loadWindowFrame:(id)arg1;
- (void)displayHUDForScene:(struct OZScene *)arg1;
- (void)displayHUDForToolOptionsComponent:(struct OZToolOptionsHUDComponent *)arg1 andOSC:(id)arg2;
- (void)makeHUDKeyWindow;
- (void)restoreKeyWindow;
- (BOOL)validateMenuItem:(id)arg1;
- (void)notify:(unsigned int)arg1;
- (BOOL)windowShouldClose:(id)arg1;
- (id)currentController;

@end
