//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProInspector/OZViewControllerGroup.h>

#import <Ozone/NSMenuDelegate-Protocol.h>

@class LKPopUpButton, NSString;

@interface OZFontFamilyPopUpController : OZViewControllerGroup <NSMenuDelegate>
{
    LKPopUpButton *_popUpButton;
    _Bool _areAllChansEqual;
    BOOL _isMenuOpen;
}

+ (void)initialize;
@property(retain, nonatomic) LKPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void)removeNotifications;
- (void)setupNotifications;
- (void)unlockText:(struct OZChannel *)arg1;
- (void)lockText:(struct OZChannel *)arg1;
- (void)fontFamilyControllerDidChange;
- (id)nibName;
- (id)getFontImageCache;
- (struct OZFontCollection *)getCurrentCollection;
- (void)setChannel:(struct OZChannel *)arg1 value:(int)arg2 time:(CDStruct_1b6d18a9)arg3;
- (void)saveDefaultFont:(int)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)inspectorWillDealloc;
- (BOOL)isMenuOpen;
- (void)changeChannel:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)reset;
- (void)selectItemAtIndex:(int)arg1;
- (void)updatePopUpMenu:(BOOL)arg1;
- (BOOL)areAllChannelsEqual;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (void)collectionChanged:(id)arg1;
- (void)dealloc;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

