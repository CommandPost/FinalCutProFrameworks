//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSOpenSavePanelDelegate.h"

@class NSButton, NSOpenPanel, NSView;

@interface OZMediaOpenPanelDelegate : NSObject <NSOpenSavePanelDelegate>
{
    NSView *_pView;
    NSButton *_pSequencesButton;
    NSOpenPanel *_pOpenPanel;
}

+ (id)instance;
- (void)panelSelectionDidChange:(id)arg1;
- (BOOL)panel:(id)arg1 shouldEnableURL:(id)arg2;
- (BOOL)doSequenceSearch;

@end

