//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class LKButton, LKTextField, NSString;

@interface TLKEditorCloseView : NSView
{
    LKButton *_closeButton;
    LKTextField *_descriptionField;
}

- (void)mouseDown:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)sizeToFit;
- (struct CGSize)_textSize;
@property SEL action;
@property id target;
@property NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

