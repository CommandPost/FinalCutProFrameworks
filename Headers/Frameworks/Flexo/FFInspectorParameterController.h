//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Flexo/FFInspectorLabelParameterViewController-Protocol.h>
#import <Flexo/NSCopying-Protocol.h>

@class FFInspectorBaseController, NSArray, NSFormatter, NSMutableArray, NSString;
@protocol FFInspectorLabelParameterAccessibilityDelegate, FFInspectorLabelParameterToolTipDelegate;

__attribute__((visibility("hidden")))
@interface FFInspectorParameterController : NSObject <FFInspectorLabelParameterViewController, NSCopying>
{
    FFInspectorBaseController *_parentController;
    id _contextInfo;
    unsigned long long _controlSize;
    NSFormatter *_formatter;
    NSMutableArray *_bindings;
    id <FFInspectorLabelParameterAccessibilityDelegate> _accessibilityDelegate;
    id <FFInspectorLabelParameterToolTipDelegate> _toolTipDelegate;
}

+ (BOOL)viewHeightIsFixed;
+ (id)parameterControllerWithProperties:(id)arg1;
+ (id)parameterController;
+ (id)defaultProperties;
@property(nonatomic) id <FFInspectorLabelParameterToolTipDelegate> toolTipDelegate; // @synthesize toolTipDelegate=_toolTipDelegate;
@property(nonatomic) id <FFInspectorLabelParameterAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;
@property(readonly, nonatomic) NSArray *bindings; // @synthesize bindings=_bindings;
@property(readonly, nonatomic) NSFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly) unsigned long long controlSize; // @synthesize controlSize=_controlSize;
@property(retain, nonatomic) id contextInfo; // @synthesize contextInfo=_contextInfo;
@property(nonatomic) FFInspectorBaseController *parentController; // @synthesize parentController=_parentController;
- (id)view;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)resyncFontForControl:(id)arg1;
- (void)setPropertiesForControl:(id)arg1;
- (void)unbindControl:(id)arg1;
- (void)bindControl:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)controlValueForKey:(id)arg1;
- (void)setControlValue:(id)arg1 forKey:(id)arg2;
- (void)setControlFormatter:(id)arg1;
- (void)setControlSize:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithProperties:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

