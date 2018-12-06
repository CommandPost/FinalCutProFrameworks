//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/FFResponderLayerCheckbox.h>

@class CALayer, CATextLayer, NSImage;

__attribute__((visibility("hidden")))
@interface CBTabBarItemLayer : FFResponderLayerCheckbox
{
    BOOL _tabPressed;
    int _boardType;
    NSImage *_iconImage;
    CATextLayer *_labelLayer;
    CALayer *_iconLayer;
    CALayer *_backgroundLayer;
    CALayer *_backgroundLayerbackgroundLayer;
}

- (id)initWithBoardType:(int)arg1;
- (void)dealloc;
- (double)barItemWidth;
- (void)registerNotifications;
- (void)releaseNotifications;
- (void)notificationHandler:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (void)pressTab;
- (void)syncTab;
- (void)setupLayer;
- (void)createSublayers;
- (void)setupSublayers;
- (void)layoutSublayers;
- (struct CGRect)iconFrame;
- (struct CGRect)labelFrame;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
@property(retain, nonatomic) CALayer *backgroundLayer; // @synthesize backgroundLayer=_backgroundLayerbackgroundLayer;
@property(retain, nonatomic) CALayer *iconLayer; // @synthesize iconLayer=_iconLayer;
@property(retain, nonatomic) CATextLayer *labelLayer; // @synthesize labelLayer=_labelLayer;
@property(nonatomic) int boardType; // @synthesize boardType=_boardType;
@property(retain, nonatomic) NSImage *iconImage; // @synthesize iconImage=_iconImage;
@property(nonatomic) BOOL tabPressed; // @synthesize tabPressed=_tabPressed;

@end

