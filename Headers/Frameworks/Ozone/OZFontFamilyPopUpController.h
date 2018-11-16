//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

#import "NSMenuDelegate.h"

@class LKPopUpButton, NSString;

@interface OZFontFamilyPopUpController : OZViewControllerGroup <NSMenuDelegate>
{
    LKPopUpButton *_popUpButton;
    _Bool _areAllChansEqual;
    BOOL _isMenuOpen;
}

+ (void)initialize;
+ (void)rebuildImageCache:(double)arg1;
+ (id)newImageForFontMenuItem:(id)arg1 size:(struct CGSize)arg2 backingScaleFactor:(double)arg3;
@property(retain, nonatomic) LKPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;
- (void)saveDefaultFont:(int)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)changeChannel:(id)arg1;
- (void)disable;
- (void)enable;
- (void)update;
- (void)reset;
- (void)selectItemAtIndex:(int)arg1;
- (void)updatePopUpMenu:(BOOL)arg1;
- (struct OZFontCollection *)getCurrentCollection;
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

