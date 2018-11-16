//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LKSyntheticUIElement : NSObject
{
    NSString *_role;
    NSString *_subrole;
    void *_contextInfo;
    id _contextObject;
    unsigned long long _contextIndex;
    id _parent;
    id _delegate;
}

+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
+ (id)handleAttributeNames;
+ (id)staticTextAttributeNames;
+ (id)groupAttributeNames;
+ (id)valueIndicatorAttributeNames;
+ (id)imageAttributeNames;
+ (id)_buttonAttributeNames:(id)arg1;
+ (id)buttonAttributeNames;
+ (id)_closeButtonAttributeNames;
+ (id)_specializedButtonAttributeNames;
+ (id)standardAttributeNames;
@property(readonly, nonatomic) id parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *subrole; // @synthesize subrole=_subrole;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long contextIndex; // @synthesize contextIndex=_contextIndex;
@property(retain, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property(nonatomic) void *contextInfo; // @synthesize contextInfo=_contextInfo;
- (id)accessibilityFocusedUIElement;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (BOOL)accessibilityIsIgnored;
- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)_getStaticTextOptionalAttribute:(id)arg1 value:(id *)arg2;
- (BOOL)_getGroupOptionalAttribute:(id)arg1 value:(id *)arg2;
- (BOOL)_getValueIndicatorOptionalAttribute:(id)arg1 value:(id *)arg2;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
- (id)_initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3 contextObject:(id)arg4 contextIndex:(unsigned long long)arg5;

@end

