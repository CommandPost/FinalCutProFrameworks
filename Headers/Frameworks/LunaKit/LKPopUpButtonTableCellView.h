//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class LKPopUpButton, LKTablePopUpButton, NSArray;

@interface LKPopUpButtonTableCellView : NSTableCellView
{
    LKTablePopUpButton *_popupButton;
    NSArray *_centeringConstraints;
}

- (void)prepareForReuse;
- (void)setObjectValue:(id)arg1;
- (void)_cleanUp;
- (void)dealloc;
@property(nonatomic) LKPopUpButton *popupButton; // @synthesize popupButton=_popupButton;

@end

