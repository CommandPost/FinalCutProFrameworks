//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewControllerGroup.h"

#import "NSMenuDelegate.h"

@class LKPopUpButton;

@interface TXFontFamilyPopUpController : OZViewControllerGroup <NSMenuDelegate>
{
    LKPopUpButton *_popUpButton;
    struct TXTextLayout *_text;
    _Bool _areAllChansEqual;
    BOOL _isMenuOpen;
}

+ (void)rebuildImageCache:(double)arg1;
+ (void)initialize;
- (id)initWithChan:(struct OZChannelBase *)arg1 context:(id)arg2;
- (void)dealloc;
- (void)collectionChanged:(id)arg1;
- (void)windowDidChangeBackingProperties:(id)arg1;
- (BOOL)areAllChannelsEqual;
- (struct TXFontCollection *)getCurrentCollection;
- (void)updatePopUpMenu:(BOOL)arg1;
- (void)selectItemAtIndex:(int)arg1;
- (void)reset;
- (void)update;
- (void)enable;
- (void)disable;
- (void)changeChannel:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menuDidClose:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)saveDefaultFont:(int)arg1;
@property(retain, nonatomic) LKPopUpButton *popUpButton; // @synthesize popUpButton=_popUpButton;

@end

