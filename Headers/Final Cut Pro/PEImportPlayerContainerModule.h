//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKViewModule.h"

#import "FFPlayerModuleDelegate.h"

@class FFPlayerModule, LKButton, NSView;

@interface PEImportPlayerContainerModule : LKViewModule <FFPlayerModuleDelegate>
{
    FFPlayerModule *_playerModule;
    NSView *_footerView;
    NSView *_transportControlsFooterView;
    LKButton *_playPauseButton;
    LKButton *_previousEditButton;
    LKButton *_nextEditButton;
}

@property(retain) FFPlayerModule *playerModule; // @synthesize playerModule=_playerModule;
- (void)updateTransportControlsOSC;
- (struct CGRect)shadowRect;
- (void)previousNextEdit:(id)arg1;
- (void)playPause:(id)arg1;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)playerViewFrameDidChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)module:(id)arg1 willRemoveSubmodule:(id)arg2;
- (void)module:(id)arg1 didAddSubmodule:(id)arg2;
- (id)submoduleLayoutArray;
- (BOOL)wantsHeaderBar;
- (struct CGSize)viewMaxSize;
- (struct CGSize)viewMinSize;
- (void)moduleViewWillBeRemoved:(id)arg1;
- (void)moduleViewWasInstalled:(id)arg1;
- (id)moduleFooterAccessoryView;
- (BOOL)wantsFooterBar;
- (void)awakeFromNib;
- (void)dealloc;
- (id)init;

@end

