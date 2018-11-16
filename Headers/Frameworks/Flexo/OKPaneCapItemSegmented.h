//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Flexo/OKPaneCapItem.h>

@class NSProSegmentedControl, NSProThemeFacet, NSString;

__attribute__((visibility("hidden")))
@interface OKPaneCapItemSegmented : OKPaneCapItem
{
    NSProThemeFacet *_glyph;
    NSString *_label;
    NSString *_tooltip;
    NSProSegmentedControl *_segmentedControl;
    unsigned long long _segmentIndex;
    unsigned long long _trackingMode;
}

- (id)init;
- (void)setHidden:(BOOL)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) NSProThemeFacet *glyph; // @synthesize glyph=_glyph;
@property(copy, nonatomic) NSString *label; // @synthesize label=_label;
- (void)setToolTip:(id)arg1;
@property unsigned long long trackingMode; // @synthesize trackingMode=_trackingMode;
- (void)dealloc;
- (void)disconnectFromView;
- (id)description;
@property(copy, nonatomic) NSString *tooltip; // @synthesize tooltip=_tooltip;

@end
