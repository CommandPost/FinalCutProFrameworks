//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSView.h>

__attribute__((visibility("hidden")))
@interface FFMediaDetailContainerViewContainerView : NSView
{
    NSView *_headerView;
    NSView *_contentView;
    NSView *_footerView;
}

@property(retain, nonatomic) NSView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void)resizeSubviews;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

