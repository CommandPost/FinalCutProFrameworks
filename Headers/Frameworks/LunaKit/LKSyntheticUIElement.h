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

+ (id)standardAttributeNames;
+ (id)_specializedButtonAttributeNames;
+ (id)_closeButtonAttributeNames;
+ (id)buttonAttributeNames;
+ (id)_buttonAttributeNames:(id)arg1;
+ (id)imageAttributeNames;
+ (id)valueIndicatorAttributeNames;
+ (id)handleAttributeNames;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
+ (id)elementWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
- (id)_initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3 contextObject:(id)arg4 contextIndex:(unsigned long long)arg5;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextInfo:(void *)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextObject:(id)arg3;
- (id)initWithRole:(id)arg1 parent:(id)arg2 contextIndex:(unsigned long long)arg3;
- (void)dealloc;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)accessibilityAttributeNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)accessibilityIsAttributeSettable:(id)arg1;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityActionNames;
- (id)accessibilityActionDescription:(id)arg1;
- (void)accessibilityPerformAction:(id)arg1;
- (BOOL)accessibilityIsIgnored;
- (id)accessibilityHitTest:(struct CGPoint)arg1;
- (id)accessibilityFocusedUIElement;
@property(readonly, nonatomic) id parent; // @synthesize parent=_parent;
@property(copy, nonatomic) NSString *subrole; // @synthesize subrole=_subrole;
@property(readonly, copy, nonatomic) NSString *role; // @synthesize role=_role;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) unsigned long long contextIndex; // @synthesize contextIndex=_contextIndex;
@property(readonly, retain, nonatomic) id contextObject; // @synthesize contextObject=_contextObject;
@property(readonly, nonatomic) void *contextInfo; // @synthesize contextInfo=_contextInfo;

@end
