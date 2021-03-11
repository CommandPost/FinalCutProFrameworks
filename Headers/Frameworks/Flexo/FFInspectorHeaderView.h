//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 11 2021 20:53:35).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppKit/NSTableHeaderView.h>

@class NSStackView, NSView;

__attribute__((visibility("hidden")))
@interface FFInspectorHeaderView : NSTableHeaderView
{
    NSView *_headerView;
    NSStackView *_stackView;
}

@property(retain, nonatomic) NSStackView *stackView; // @synthesize stackView=_stackView;
@property(retain, nonatomic) NSView *headerView; // @synthesize headerView=_headerView;
- (void)drawRect:(struct CGRect)arg1;
- (void)_setupHeader;
- (void)dealloc;
- (id)initWithHeaderView:(id)arg1;

@end

