//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class FFInlineColorBoardInspectorController, FFInlineColorBoardPuckInfoLegendView, FFInlineColorBoardPuckInfoScrubber, LKTextField, NSTextField;

__attribute__((visibility("hidden")))
@interface FFInlineColorBoardPuckInfoView : NSView
{
    BOOL _selected;
    BOOL _supportsXVariable;
    BOOL _usingMinimalLayout;
    int _puckType;
    FFInlineColorBoardPuckInfoLegendView *_legendView;
    LKTextField *_puckTypeTextField;
    FFInlineColorBoardPuckInfoScrubber *_xDataScrubber;
    LKTextField *_xDataSuffix;
    FFInlineColorBoardPuckInfoScrubber *_yDataScrubber;
    NSTextField *_yDataSuffix;
    FFInlineColorBoardInspectorController *_ctr;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) NSTextField *yDataSuffix; // @synthesize yDataSuffix=_yDataSuffix;
@property(readonly, nonatomic) FFInlineColorBoardPuckInfoScrubber *yDataScrubber; // @synthesize yDataScrubber=_yDataScrubber;
@property(readonly, nonatomic) LKTextField *xDataSuffix; // @synthesize xDataSuffix=_xDataSuffix;
@property(readonly, nonatomic) FFInlineColorBoardPuckInfoScrubber *xDataScrubber; // @synthesize xDataScrubber=_xDataScrubber;
@property(readonly, nonatomic) LKTextField *puckTypeTextField; // @synthesize puckTypeTextField=_puckTypeTextField;
@property(readonly, nonatomic) FFInlineColorBoardPuckInfoLegendView *legendView; // @synthesize legendView=_legendView;
@property(nonatomic) int puckType; // @synthesize puckType=_puckType;
@property(nonatomic) BOOL usingMinimalLayout; // @synthesize usingMinimalLayout=_usingMinimalLayout;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property __weak FFInlineColorBoardInspectorController *controller; // @synthesize controller=_ctr;
- (long long)integerValueFormattedControl:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)syncToPuckType;
- (void)syncToSelection;
- (void)mouseDown:(id)arg1;
- (void)infoTextValueChangedAction:(id)arg1;
- (void)updateInfoScrubberValues;
- (void)notificationHandler:(id)arg1;
- (void)removeNotificationObservers;
- (void)addNotificationObservers;
- (id)accessibilityForPuckTypeForAmount:(int)arg1;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

