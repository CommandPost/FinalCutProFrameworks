//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesView.h>

#import "FFPlayerVideoScopesModuleViewDelegate.h"

@class LKMenu;

__attribute__((visibility("hidden")))
@interface FFVideoScopesVectorscopeView : FFVideoScopesView <FFPlayerVideoScopesModuleViewDelegate>
{
    LKMenu *_contextualMenu;
    long long _phase;
    long long _barTarget;
    CDStruct_d36b2e56 _state;
    void *_FFVideoScopesVectorscopeViewPrivate;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
@property BOOL showIandQ; // @dynamic showIandQ;
@property BOOL showSkinToneIndicator; // @dynamic showSkinToneIndicator;
@property long long phase; // @dynamic phase;
@property long long barTarget; // @dynamic barTarget;
- (void)buildLayers;
- (void)teardownLayers;
- (void)awakeFromNib;
- (void)removeFromSuperview;
- (void)setZoomFactor:(float)arg1;
- (void)mouseDown:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)drawScopeViewWithFrame:(id)arg1 forRate:(double)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (id)menuForVideoScopeOptions;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (struct FFVideoScopesVectorscopeViewPrivate *)_Private;
- (id)_initVideoScopesVectorscopeView;

@end

