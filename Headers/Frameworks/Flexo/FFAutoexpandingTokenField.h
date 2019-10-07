//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "LKTokenField.h"

@class FFAutoexpandingTextFieldImpl;

__attribute__((visibility("hidden")))
@interface FFAutoexpandingTokenField : LKTokenField
{
    FFAutoexpandingTextFieldImpl *_impl;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) id <FFAutoexpandingTextFieldDelegate> autoexpandingDelegate;
@property(nonatomic) BOOL autoresizesSuperview;
- (void)textDidChange:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)bind:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (void)dealloc;
- (void)_init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

