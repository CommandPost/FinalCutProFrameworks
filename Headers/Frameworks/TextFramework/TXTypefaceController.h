//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OZViewController.h"

#import "NSComboBoxDelegate.h"

@class NSComboBox;

@interface TXTypefaceController : OZViewController <NSComboBoxDelegate>
{
    NSComboBox *_pComboBox;
    struct TXTextLayout *_text;
    _Bool _isDragging;
    int _fontType;
    _Bool _areAllFontsEqual;
    _Bool _selectionDidChange;
    _Bool _aboutToChangeCalled;
    unsigned int _textID;
    struct OZScene *_scene;
}

- (id)initWithChan:(struct OZChannelBase *)arg1 textLayout:(struct TXTextLayout *)arg2 context:(id)arg3;
- (void)setAssociatedTextLayout:(struct TXTextLayout *)arg1;
- (void)dealloc;
- (void)_saveDefaultFont:(int)arg1;
- (void)fontTypeChanged:(id)arg1;
- (void)familyChanged:(id)arg1;
- (void)updateComboBox:(BOOL)arg1;
- (void)selectItemAtIndex:(int)arg1 setChannel:(_Bool)arg2;
- (BOOL)control:(id)arg1 isValidObject:(id)arg2;
- (BOOL)areAllFontsEqual;
- (void)update;
- (void)enable;
- (void)disable;
- (void)changeChannel:(id)arg1;
- (void)setChannelValue:(id)arg1;
- (void)comboBoxWillPopUp:(id)arg1;
- (void)comboBoxWillDismiss:(id)arg1;
- (void)comboBoxSelectionIsChanging:(id)arg1;
- (void)comboBoxSelectionDidChange:(id)arg1;

@end

