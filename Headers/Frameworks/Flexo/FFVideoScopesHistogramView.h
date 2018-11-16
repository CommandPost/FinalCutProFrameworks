//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFVideoScopesView.h>

#import "FFPlayerVideoScopesModuleViewDelegate.h"

@class LKMenu;

__attribute__((visibility("hidden")))
@interface FFVideoScopesHistogramView : FFVideoScopesView <FFPlayerVideoScopesModuleViewDelegate>
{
    LKMenu *_contextualMenu;
    long long _viewMode;
    long long _printerDensityLevels;
    long long _displayColorMode;
    CDStruct_3de7261d _state;
    void *_FFVideoScopesHistogramViewPrivate;
}

- (id).cxx_construct;
- (id)_initVideoScopesHistogramView;
- (struct FFVideoScopesHistogramViewPrivate *)_Private;
- (id)accessibilityAttributeValue:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)menuForVideoScopeOptions;
- (void)drawScopeViewWithFrame:(id)arg1 forRate:(double)arg2 atTime:(CDStruct_1b6d18a9)arg3;
- (void)scrollWheel:(id)arg1;
- (void)rightMouseDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)setZoomFactor:(float)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)removeFromSuperview;
- (void)viewDidUnhide;
- (void)viewWillMoveToSuperview:(id)arg1;
- (void)awakeFromNib;
- (void)teardownLayers;
- (void)buildLayers;
@property long long displayColorMode; // @dynamic displayColorMode;
@property long long printerDensityLevels; // @dynamic printerDensityLevels;
@property long long viewMode; // @dynamic viewMode;
@property BOOL showGuides; // @dynamic showGuides;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

