//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFColorBoardPuckInfoView;

__attribute__((visibility("hidden")))
@interface FFColorBoardPuckInfoGroupView : NSView
{
    BOOL _usingMinimalLayout;
    FFColorBoardPuckInfoView *_globalInfoView;
    FFColorBoardPuckInfoView *_shadowsInfoView;
    FFColorBoardPuckInfoView *_midtonesInfoView;
    FFColorBoardPuckInfoView *_highlightsInfoView;
}

- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
@property(nonatomic) BOOL usingMinimalLayout; // @synthesize usingMinimalLayout=_usingMinimalLayout;
- (void)addNotificationObservers;
- (void)removeNotificationObservers;
- (void)notificationHandler:(id)arg1;
- (void)syncToMinimalLayout;
- (void)movePuckInfoView:(id)arg1 toY:(double)arg2;
- (void)adjustLayout;
- (void)setToMinimalLayout;
- (void)setToNormalLayout;
@property(retain, nonatomic) FFColorBoardPuckInfoView *highlightsInfoView; // @synthesize highlightsInfoView=_highlightsInfoView;
@property(retain, nonatomic) FFColorBoardPuckInfoView *midtonesInfoView; // @synthesize midtonesInfoView=_midtonesInfoView;
@property(retain, nonatomic) FFColorBoardPuckInfoView *shadowsInfoView; // @synthesize shadowsInfoView=_shadowsInfoView;
@property(retain, nonatomic) FFColorBoardPuckInfoView *globalInfoView; // @synthesize globalInfoView=_globalInfoView;

@end
