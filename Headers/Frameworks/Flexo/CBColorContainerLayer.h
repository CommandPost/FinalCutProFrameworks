//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CBPanelLayer, CBTabBarLayer;

__attribute__((visibility("hidden")))
@interface CBColorContainerLayer : CALayer
{
    CBTabBarLayer *_tabBar;
    CBPanelLayer *_colorPanel;
    CBPanelLayer *_exposurePanel;
    CBPanelLayer *_saturationPanel;
}

- (id)init;
- (void)dealloc;
- (void)setupLayer;
- (id)actionForKey:(id)arg1;
- (void)createSublayers;
- (void)setupSublayers;
- (void)layoutSublayers;
@property(retain, nonatomic) CBPanelLayer *saturationPanel; // @synthesize saturationPanel=_saturationPanel;
@property(retain, nonatomic) CBPanelLayer *exposurePanel; // @synthesize exposurePanel=_exposurePanel;
@property(retain, nonatomic) CBPanelLayer *colorPanel; // @synthesize colorPanel=_colorPanel;
@property(retain, nonatomic) CBTabBarLayer *tabBar; // @synthesize tabBar=_tabBar;

@end

