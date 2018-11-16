//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesView.h>

#import "FFDestVideoScopesGLDelegate.h"

__attribute__((visibility("hidden")))
@interface FFVideoScopesVectorscopeView : FFVideoScopesView <FFDestVideoScopesGLDelegate>
{
    long long _phase;
    long long _barTarget;
    CDStruct_d36b2e56 _state;
    void *_FFVideoScopesVectorscopeViewPrivate;
}

- (id)_initVideoScopesVectorscopeView;
- (struct FFVideoScopesVectorscopeViewPrivate *)_Private;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)colorspaceDidChangeForVideoScopes:(id)arg1;
- (void)drawScopeWithFrame:(id)arg1 forRate:(double)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)setSkimmable:(struct NSObject *)arg1 context:(id)arg2 effectCount:(long long)arg3;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)buildLayers;
@property long long barTarget; // @dynamic barTarget;
@property long long phase; // @dynamic phase;
@property BOOL showSkinToneIndicator; // @dynamic showSkinToneIndicator;
@property BOOL showIandQ; // @dynamic showIandQ;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

