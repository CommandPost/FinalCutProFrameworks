//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Flexo/FFVideoScopesView.h>

__attribute__((visibility("hidden")))
@interface FFVideoScopesVectorscopeView : FFVideoScopesView
{
    long long _phase;
    long long _barTarget;
    int _colorSpaceType;
    BOOL _showIandQ;
    BOOL _showSkinToneIndicator;
}

+ (BOOL)supportsSecureCoding;
- (id)accessibilityAttributeValue:(id)arg1;
- (void)colorSpaceDidChangeForVideoScopes:(id)arg1;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)awakeFromNib;
- (void)buildLayers;
@property int colorSpaceType; // @dynamic colorSpaceType;
@property long long barTarget; // @dynamic barTarget;
@property long long phase; // @dynamic phase;
@property BOOL showSkinToneIndicator; // @dynamic showSkinToneIndicator;
@property BOOL showIandQ; // @dynamic showIandQ;
- (id)_vectorscopeLayer;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_initVideoScopesVectorscopeView;

@end

