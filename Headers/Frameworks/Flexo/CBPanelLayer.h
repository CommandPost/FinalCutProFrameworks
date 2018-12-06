//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

@class CBPanelBoardLayer, CBPanelPuckInfoLayer, FFResponderLayerPushButton;

__attribute__((visibility("hidden")))
@interface CBPanelLayer : CALayer
{
    int _boardType;
    FFResponderLayerPushButton *_resetButtonLayer;
    CBPanelBoardLayer *_boardLayer;
    CBPanelPuckInfoLayer *_globalPuckInfoLayer;
    CBPanelPuckInfoLayer *_highlightPuckInfoLayer;
    CBPanelPuckInfoLayer *_midtonePuckInfoLayer;
    CBPanelPuckInfoLayer *_shadowPuckInfoLayer;
}

- (id)initWithBoardType:(int)arg1;
- (void)dealloc;
- (void)resetLayerData:(id)arg1;
- (void)registerNotifications;
- (void)releaseNotifications;
- (void)notificationHandler:(id)arg1;
- (void)setupLayer;
- (id)actionForKey:(id)arg1;
- (void)createSublayers;
- (void)setupSublayers;
- (void)layoutSublayers;
- (void)layoutPuckInfoLayers:(double)arg1;
- (void)layoutMinimalSizePuckInfoLayers:(double)arg1;
- (void)layoutFullSizePuckInfoLayers:(double)arg1;
@property(retain) CBPanelPuckInfoLayer *shadowPuckInfoLayer; // @synthesize shadowPuckInfoLayer=_shadowPuckInfoLayer;
@property(retain) CBPanelPuckInfoLayer *midtonePuckInfoLayer; // @synthesize midtonePuckInfoLayer=_midtonePuckInfoLayer;
@property(retain) CBPanelPuckInfoLayer *highlightPuckInfoLayer; // @synthesize highlightPuckInfoLayer=_highlightPuckInfoLayer;
@property(retain) CBPanelPuckInfoLayer *globalPuckInfoLayer; // @synthesize globalPuckInfoLayer=_globalPuckInfoLayer;
@property(retain) CBPanelBoardLayer *boardLayer; // @synthesize boardLayer=_boardLayer;
@property int boardType; // @synthesize boardType=_boardType;
@property(retain) FFResponderLayerPushButton *resetButtonLayer; // @synthesize resetButtonLayer=_resetButtonLayer;

@end

