//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/NSMenuDelegate-Protocol.h>

@class NSArray, NSString, NSURL;

@interface FFCustomOverlayRepositoryController : NSObject <NSMenuDelegate>
{
    NSURL *_repositoryURL;
    NSArray *_customOverlayPaths;
    BOOL _isObserving;
    struct __FSEventStream *_eventStream;
}

+ (void)setCustomOverlayOpacityValueForPlayerRole:(int)arg1 value:(int)arg2;
+ (int)customOverlayOpacityValueForPlayerRole:(int)arg1;
+ (id)customOverlayOpacityKeyForPlayerRole:(int)arg1;
+ (id)customOverlayNameKeyForPlayerRole:(int)arg1;
+ (void)displayCustomOverlayMissingMessage:(id)arg1;
+ (void)releaseSharedInstance;
+ (id)sharedInstance;
- (BOOL)shouldFill:(id)arg1;
- (BOOL)isFCPXVectorFormat:(id)arg1;
- (id)customOverlayPath:(int)arg1;
- (void)selectCustomOverlayNameBoth:(id)arg1;
- (void)selectCustomOverlayNameViewer:(id)arg1;
- (void)selectCustomOverlayNameCanvas:(id)arg1;
- (void)selectCustomOverlayNameFromIndex:(int)arg1 playerRole:(int)arg2;
- (id)customOverlayNameForPlayerRole:(int)arg1;
- (void)setCustomOverlayName:(id)arg1 playerRole:(int)arg2;
- (int)customOverlayConformModeForRole:(int)arg1;
- (void)setCustomOverlayConformMode:(int)arg1 playerRole:(int)arg2;
- (BOOL)customOverlaysAvailable;
- (id)customOverlaysSubMenu:(int)arg1;
- (id)showCustomOverlaysSubMenu:(int)arg1;
- (void)revealInFinder:(id)arg1;
- (void)setOverlayConform:(id)arg1;
- (void)setOverlayOpacity:(id)arg1;
- (void)openCustomOverlayFilePanel:(id)arg1;
- (void)importURLs:(id)arg1 toLocation:(id)arg2 playerRole:(int)arg3;
- (BOOL)copyURLToTargetPath:(id)arg1 targetPathString:(id)arg2 oneURL:(BOOL)arg3 playerRole:(int)arg4;
- (id)uniquePathByAppendingCopy:(id)arg1;
- (BOOL)validateURLs:(id)arg1;
- (void)scanCurrentDirectoryURLForOverlays;
- (id)defaultAllowedCustomOverlayFileTypes;
- (void)_removeObservers;
- (void)_addObservers;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

