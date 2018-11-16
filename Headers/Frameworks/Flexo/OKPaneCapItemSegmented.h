//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/OKPaneCapItem.h>

@class NSProFont, NSProSegmentedControl, NSProThemeFacet, NSString;

__attribute__((visibility("hidden")))
@interface OKPaneCapItemSegmented : OKPaneCapItem
{
    NSProThemeFacet *_glyph;
    NSString *_label;
    NSString *_tooltip;
    NSProSegmentedControl *_segmentedControl;
    unsigned long long _segmentIndex;
    NSProFont *_preferredFont;
    unsigned long long _trackingMode;
}

@property(retain, nonatomic) NSProFont *preferredFont; // @synthesize preferredFont=_preferredFont;
@property(nonatomic) unsigned long long trackingMode; // @synthesize trackingMode=_trackingMode;
@property(copy, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) NSProThemeFacet *glyph; // @synthesize glyph=_glyph;
- (id)description;
- (void)disconnectFromView;
- (void)dealloc;
- (void)setToolTip:(id)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setHidden:(BOOL)arg1;
- (id)init;
- (void)refreshSegmentedControl;
@property(readonly) unsigned long long segmentIndex;
- (void)setSegmentedControl:(id)arg1 segmentIndex:(unsigned long long)arg2;
@property(readonly) NSProSegmentedControl *segmentedControl;

@end

