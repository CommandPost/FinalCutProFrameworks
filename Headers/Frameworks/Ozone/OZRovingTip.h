//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindow.h"

@class NSDictionary, NSTextField;

@interface OZRovingTip : NSWindow
{
    NSTextField *_text;
    NSDictionary *_textAttributes;
    int _move;
    int _distance;
}

+ (void)endTip:(id)arg1;
+ (void)endTip;
+ (BOOL)isTipUp;
+ (void)hideTip;
+ (struct CGSize)tipSize:(id)arg1;
+ (void)updateTip:(id)arg1 withFrame:(struct CGRect)arg2;
+ (void)updateTip:(id)arg1 atPoint:(struct CGPoint)arg2;
+ (void)updateTip:(id)arg1;
+ (void)startTip:(int)arg1 andDistance:(int)arg2 who:(id)arg3;
+ (void)startTip:(int)arg1 who:(id)arg2;
- (void)hide;
- (struct CGSize)sizeWithString:(id)arg1;
- (void)updateString:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)updateString:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)updateString:(id)arg1;
- (void)setStringValue:(id)arg1 windowFrame:(struct CGRect)arg2;
- (void)initializeContents:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithMove:(int)arg1;
- (id)initWithMove:(int)arg1 andDistance:(int)arg2;

@end

