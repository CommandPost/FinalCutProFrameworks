//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PEWindowModule.h"

@interface PEFullScreenWindowModule : PEWindowModule
{
    unsigned long long _screenNumber;
    BOOL _fullscreen;
    struct CGRect _nonFullscreenFrame;
}

+ (unsigned long long)nextAvailableScreenIndexExcludingIndexes:(id)arg1;
+ (unsigned long long)nextAvailableScreenIndexExcluding:(unsigned long long)arg1;
+ (Class)windowClass;
+ (id)fullScreenWindowModule;
@property(nonatomic) unsigned long long screenNumber; // @synthesize screenNumber=_screenNumber;
@property(nonatomic, getter=isFullscreen) BOOL fullscreen; // @synthesize fullscreen=_fullscreen;
- (id)customWindowsToEnterFullScreenForWindow:(id)arg1;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (void)takeContentLayoutFromDictionary:(id)arg1;
- (id)contentLayoutDictionary;
- (void)viewDidLoad;
- (void)setFullscreen:(BOOL)arg1 animate:(BOOL)arg2;
- (void)_setFullscreen:(BOOL)arg1 animate:(BOOL)arg2;
- (void)screenParametersChanged:(id)arg1;
- (id)initWithWindowClass:(Class)arg1 windowStyleMask:(unsigned long long)arg2;

@end

